{
  gStyle->SetOptStat(0);
  //  gStyle->SetHistMinimumZero();
  using namespace RooFit;
  
  RooRealVar m("m","mean",0.55,0.5,0.6);
  RooRealVar s("s","sigma",0.05,0.0,0.1);
  RooRealVar x("x","variable",0.45,0.8);
  Double_t ll,hl;
  RooRealVar metam("meta","#eta mass",0.55,"GeV");
  RooDataSet *ds = (RooDataSet*) gROOT->FindObject("ds1_0");
  RooDataSet dsM = *ds;

  dsM.getRange(metam,ll,hl);
  RooRealVar meta("meta","#eta mass",0.55,ll,hl);
  
  RooGaussian sig("sig","#eta mass",meta,m,s);

  //  RooDataSet dsM("Mdata","Mass #eta #rightarrow #gamma #gamma",RooArgSet(meta));
  RooPlot *pl =meta.frame();

  RooRealVar a1("a1","linear term",-2.,-20000.,0.);
  RooRealVar a2("a2","quadratic term",1.,0.,20000.);  
  //RooRealVar a3("a3","cubic term",0.1,-1000.,1000.);
  //RooPolynomial bkg("bkg","background",meta,RooArgList(a1,a2,a3));
  RooPolynomial bkg("bkg","background",meta,RooArgList(a1,a2));

  //RooFormulaVar minFunc("minFunc","Minimum formula","(-a2 +TMath::Sqrt(a2*a2 - 3*a3*a1) )/(3*a3)",RooArgList(a1,a2,a3));
  RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2)); 

  RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(1),RooConst(0.3));
  RooRealVar Ns("Ns","mean",500,0.,1000000);
  RooRealVar Nb("Nb","mean",3000,0.,1000000);
  RooAddPdf model("model","sig + bkg",RooArgList(sig,bkg),RooArgList(Ns,Nb));

  RooFitResult* res;  

  //RooCmdArg range=RooFit::Range(0.35,0.75);
  //RooCmdArg save=RooFit::Save();

  //RooPlot *pl = meta.frame();
 
  
   res  = model.fitTo(dsM,RooFit::Range(0.35,0.75),ExternalConstraints(parConst),RooFit::Save());  
  

  dsM.plotOn(pl);  
  model.plotOn(pl,RooFit::VisualizeError(*res,1),RooFit::FillColor(kOrange)); 
  model.plotOn(pl,RooFit::Components(bkg),RooFit::LineStyle(kDashed));
  model.plotOn(pl,RooFit::LineColor(kRed)) ;
  dsM.plotOn(pl);  
  pl->SetTitle("");
  pl->Draw();

  TCanvas *c = new TCanvas("c","c",920,690);
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
  pl->GetYaxis()->SetTitleOffset(0.8);
  pl->Draw();
  
  TH1F *hdata = (TH1F *)dsM.createHistogram("hdata",meta,Binning(100,0.2,0.8));

  RooDataHist *modelhist = model.generateBinned(meta,0,true,true);
  RooDataHist *modelhist0 = model.generateBinned(meta,0,true);

  TH1F * hm0= (TH1F *)modelhist0->createHistogram("hm0",meta,Binning(100,0.2,0.8));
  TH1F * hm= (TH1F *)modelhist->createHistogram("hm",meta,Binning(100,0.2,0.8));
  
  TH1F *hratio = (TH1F *) hdata->Clone("hratio");
  for (int k=0;k<hratio->GetNbinsX();k++)
  {
    Float_t data=hdata->GetBinContent(k+1); 
    Float_t mdata=hm->GetBinContent(k+1);
    Float_t err=hdata->GetBinError(k+1);
    hratio->SetBinContent(k+1,(data-mdata)/err);
    hratio->SetBinError(k+1,0.);
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
  TLine *l = new TLine(0.35,3,0.75,3);
  l->SetLineWidth(3);
  l->SetLineStyle(2);
  l->SetLineColor(kRed);
  l->Draw();
  l->DrawLine(0.35,-3,0.75,-3);

  l->DrawLine(0.35,-5,0.35,5);
  //l->SetLineColor(kBlue);
  l->DrawLine(0.75,-5,0.75,5);

}
