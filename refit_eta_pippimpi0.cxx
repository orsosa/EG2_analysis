{
  gROOT->ProcessLine("#include <libgen.h>");
  TString fname="Zeta_3pi_all_UML_Pcorr_bkgPol2_Tvz/data_PbD_Pb/binned.root";
  
  TString fnameclone=fname.Copy();
  TString dname=dirname((char*)fnameclone.Data());  
  Int_t Nbins=5;
  /*
  for (int k=0;k<Nbins;k++)
  {
  */
    int bin=4;

    
    /*
  c->Write(Form("c1_%d_refit",bin),TObject::kOverwrite);
  w->Write(Form("w1_%d",bin),TObject::kOverwrite);
  pl->Write(Form("frm1_%d",bin),TObject::kOverwrite);
  //c->Draw();
  c->SaveAs(Form("%s/rspic/c1_%d_refit.gif",dname.Data(),bin));
  c->SaveAs(Form("%s/rspic/c1_%d_refit.pdf",dname.Data(),bin));
  .q
  
  */
  

    TFile fin(fname,"update");
    
    RooWorkspace *w = ( RooWorkspace *) fin.Get(Form("w1_%d",bin));
    RooDataSet *ds = ( RooDataSet *) fin.Get(Form("ds1_%d",bin));
    
    
    RooPlot *pl = w->var("meta")->frame();
    RooRealVar *Neta= w->var("Neta");
    RooRealVar *Nb= w->var("Nb");
    RooRealVar *meta= w->var("meta");
    RooRealVar *m= w->var("m");
    m->setRange(0.53,0.58);


    
    RooRealVar *s= w->var("s");
    //s->setRange(0.04,0.05);

    RooRealVar *a1= w->var("a1");
     *a1=-0.0;    
    RooRealVar *a2= w->var("a2");
     *a2=0.0;
     a1->setConstant();
     //a2->setConstant();
    
    //a2->setRange(-100,0);
    /*    RooRealVar *a3= w->var("a3");
    *a3=0.0;
    a3->setConstant();
    */

    /*
  
    */

    RooAbsPdf *model = w->pdf("model");
    RooAbsPdf *bkg =  w->pdf("bkg");
    //    meta->setRange("rplot",0.3,0.8);
    meta->setRange("rplot",0.45,0.62);

    
    RooFitResult *res;
    std::cout<<"Neta before refit: \n";
    Neta->Print();
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
    
    res =  model->fitTo(*ds,RooFit::Extended(),RooFit::Save(),RooFit::Range("rplot"));
    ds->plotOn(pl);  
    //    model->plotOn(pl,RooFit::VisualizeError(*res,1),RooFit::FillColor(kOrange),RooFit::NormRange("rplot"));
    ds->plotOn(pl);
    model->plotOn(pl,RooFit::LineColor(kRed),RooFit::NormRange("rplot"));
    model->plotOn(pl,RooFit::Components(*bkg),RooFit::LineColor(kBlue),RooFit::LineStyle(kDashed),RooFit::NormRange("rplot"));
    
    pl->GetYaxis()->SetTitleSize(1.0);
    pl->GetYaxis()->SetTitle("R^{A}_{D}");
    pl->SetTitle("");
    pl->Draw();
    
    Float_t minRange = meta->getMin();
    Float_t maxRange = meta->getMax();
    
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
      if (err!=0) hratio->SetBinContent(b+1,(data-mdata)/err);
      else hratio->SetBinContent(b+1,0.);

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
    /*    
    
    c->Write(Form("c1_%d_refit",bin),TObject::kOverwrite);
    w->Write(Form("w1_%d",bin),TObject::kOverwrite);
    pl->Write(Form("frm1_%d",bin),TObject::kOverwrite);



    c->Draw();
    c->SaveAs(Form("%s/rspic/c1_%d_refit.gif",dname.Data(),bin));
    c->SaveAs(Form("%s/rspic/c1_%d_refit.pdf",dname.Data(),bin));
    

  }
    */
  
}
