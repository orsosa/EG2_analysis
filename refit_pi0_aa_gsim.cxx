{
  
  TString fname= "Pt2Q2NuZpi0_aa_all_UML_Pcorr_bkgExpxG_Tvz/gsim_CD_Dgsim/binned.root";
  Nbins=54;
  TLegend *leg = new TLegend(0.60,0.35,0.84,0.75);
  TFile *fin =  new TFile(fname,"update");
  RooWorkspace *w;
  RooDataSet *ds;
  RooAbsPdf *model;
  RooAbsPdf *poly;
  RooRealVar *meta;
  RooRealVar *a1;
  RooRealVar *mg;
  RooRealVar *sg;
  RooRealVar *s0; 
  RooRealVar *m0;
  RooRealVar *Nb;
  RooRealVar *Npi0;
  RooPlot *pl;
  RooFitResult *res ;
  
  for (int kk=0;kk<Nbins;kk++)
  
  //for (int kk=0;kk<1;kk++)
  {
    
    int bin=kk;
    /*
    c->Write(Form("c1_%d_refit",bin),TObject::kOverwrite);
    w->Write(Form("w1_%d",bin),TObject::kOverwrite);
    pl->Write(Form("frm1_%d",bin),TObject::kOverwrite);
    */
    
    w = (RooWorkspace *)fin->Get(Form("w1_%d",bin));
    ds = (RooDataSet *)fin->Get(Form("ds1_%d",bin));
    model = w->pdf("model");
    poly= w->pdf("poly");
    w->Print();
    meta = w->var("meta");
    a1 = w->var("a1");
    mg = w->var("mg");
    sg = w->var("sg");
    s0 = w->var("s0");
    m0 = w->var("m0");
    Nb = w->var("Nb");
    Nb->setRange(0,1e8);
    *Nb=1e5;
    a1->setRange(-50,50);
    *a1=-0.1;
    sg->setConstant(0);
    s0->setConstant(0);
    
    Npi0 = w->var("Npi0");
    Npi0->setRange(0,1e8);
    pl = meta->frame();
    
    RooRealVar Npi0_g("Npi0_g","number on pi0",100000.,0.,1e8);
    RooRealVar m_g("m_g","mean pi0",0.135007,0.134,0.136);
    RooRealVar s_g("s_g","sigma pi0",0.0005,0.0,0.001);
    RooRealVar x1("x1","slope parameter",-0.1,-50.,50.);
    RooRealVar Nb_g("Nb_g","Number on background",100.,0.,1e8);
    m_g.setConstant();
    RooGaussian peak("peak","gaussian",*meta,m_g,s_g);
    RooChebychev p1("p1","linear bkg",*meta,RooArgList(x1));
    
    RooAddPdf model_g("model_g","sig + bkg",RooArgList(peak,p1),RooArgList(Npi0_g,Nb_g));

    meta->setRange("rplot",0.12,0.15);
    
    res = model_g.fitTo(*ds,RooFit::Range("rplot"),RooFit::Extended(),RooFit::Save());
    
    //ds->plotOn(pl,RooFit::Binning(1e4,0.05,0.4));
    // model_g.plotOn(pl);
    w->import(model_g);
    //   pl->Draw();
    
    std::cout<<"Npi0 before refit: \n";
    Npi0->Print();
    std::cout<<":::::::::::::::::.\n";
     
    TCanvas *c  = new TCanvas("c", "The canvas",920,690);
    
    c->Divide(1,2);
    c->GetPad(1)->SetPad(0,0.4,1,1);
    c->GetPad(1)->SetBottomMargin(0.01);
    c->GetPad(1)->SetTopMargin(0.05);
    c->GetPad(1)->SetGrid();
    
    c->GetPad(2)->SetPad(0,0,1,0.38);
    c->GetPad(2)->SetTopMargin(0.05);
    c->GetPad(2)->SetBottomMargin(0.25);
    c->GetPad(2)->SetGrid();
    
    c->cd(1);
    
    
    
    res =  model->fitTo(*ds,RooFit::Range("rplot"),RooFit::Extended(),RooFit::Save());
    ds->plotOn(pl,RooFit::Binning(1e4,0.05,0.4));
    leg->AddEntry( pl->nameOf(pl->numItems()-1),"data","p");
    
    //    model->plotOn(pl,RooFit::VisualizeError(*res,1),RooFit::FillColor(kOrange),RooFit::NormRange("rplot"));

    ds->plotOn(pl,RooFit::Binning(1e4,0.05,0.4));


    model->plotOn(pl,RooFit::LineColor(kRed),RooFit::NormRange("rplot"));
    leg->AddEntry( pl->nameOf(pl->numItems()-1),"BW #otimes G + pol1","l");
    model->plotOn(pl,RooFit::Components(*poly),RooFit::LineColor(kRed),RooFit::LineStyle(kDashed),RooFit::NormRange("rplot"));
    leg->AddEntry( pl->nameOf(pl->numItems()-1),"pol1","l");
    
    model_g.plotOn(pl,RooFit::LineColor(kBlue));
    leg->AddEntry( pl->nameOf(pl->numItems()-1),"Gaussian + poly1","l");
    model_g.plotOn(pl,RooFit::Components(p1),RooFit::LineColor(kBlue),RooFit::LineStyle(kDashed));
    leg->AddEntry( pl->nameOf(pl->numItems()-1),"poly1","l");
    
    pl->GetYaxis()->SetTitleSize(1.0);
    pl->GetYaxis()->SetTitle("R^{A}_{D}");
    pl->SetTitle("");
    pl->Draw();
    
    Float_t minRange = meta->getMin();
    Float_t maxRange = meta->getMax();

    //Float_t minRange = 0.1;
    //Float_t maxRange = 0.17;
    
    
    Float_t rangeFit[2]={minRange,maxRange};
    
    TH1F *hdata = (TH1F *)ds->createHistogram("hdata",*meta,RooFit::Binning(100,minRange,maxRange));
    
    RooDataHist *modelhist = model->generateBinned(*meta,0,true,true);
    TH1F * hm= (TH1F *)modelhist->createHistogram("hm",*meta,RooFit::Binning(100,minRange,maxRange));
    
  
    //////// making ratio plot ////////
    TH1F *hratio = (TH1F *) hdata->Clone("hratio");
    for (int b=0;b<hratio->GetNbinsX();b++)
    {
      Float_t data=hdata->GetBinContent(b+1); 
      Float_t mdata=hm->GetBinContent(b+1);
      Float_t err=hdata->GetBinError(b+1);
      hratio->SetBinContent(b+1,(data-mdata)/err);
      hratio->SetBinError(b+1,0.);
    }
    c->cd(2);
    hratio->SetTitle("");
    hratio->SetMaximum(5);
    hratio->SetMinimum(-5);
    //hratio->Draw("hist");
    hratio->GetYaxis()->SetLabelSize(0.06);
    hratio->GetXaxis()->SetLabelSize(0.06);
    hratio->GetXaxis()->SetTitle("M(#gamma#gamma) (GeV)");
    hratio->GetYaxis()->SetTitle("(data-model)/error");
    hratio->GetXaxis()->SetTitleSize(0.09);
    hratio->GetYaxis()->SetTitleSize(0.06);
    hratio->GetYaxis()->SetTitleOffset(0.4);
    
    //hratio->SetMarkerStyle(kFullDotLarge);
    hratio->SetFillColor(kBlue-5);
    hratio->SetMarkerColor(kBlue-5);
    hratio->Draw("bar");
    Float_t siglim=3;
    TLine *line = new TLine(rangeFit[0],siglim,rangeFit[1],siglim);
    line->SetLineWidth(3);
    line->SetLineStyle(2);
    line->SetLineColor(kRed);
    line->Draw();
    line->DrawLine(rangeFit[0],-siglim,rangeFit[1],-siglim);
    
    line->DrawLine(rangeFit[0],-siglim,rangeFit[0],siglim);
    //line->SetLineColor(kBlue);
    line->DrawLine(rangeFit[1],-siglim,rangeFit[1],siglim);
    std::cout<<":::::::::Initial Parameters:::::::::::::\n";
    res->floatParsInit().Print("v");
    std::cout<<":::::::::Final Parameters:::::::::::::\n";
    res->floatParsFinal().Print("v");
    std::cout<<"::::::::::::::::::::::::::::::::::::::\n";

    c->Write(Form("c1_%d_refit",bin),TObject::kOverwrite);
    w->Write(Form("w1_%d",bin),TObject::kOverwrite);
    pl->Write(Form("frm1_%d",bin),TObject::kOverwrite);
    
  }

}
