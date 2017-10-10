{
  using namespace RooFit;
  TH1F *histo = hM_bin0;
   
  //Signal
  RooRealVar x("x","x",0.4,0.9); 
  RooRealVar s("s","#sigma",0.,0.1); 
  RooRealVar m("m","mean",0.5,0.6); 
  RooGaussian sig("sig","eta mass",x,m,s);
  ///////////////////
  //Background
  RooRealVar a0("a0","linear term",10,-100,100); 
  RooRealVar a1("a1","linear term",100,0,1000); 
  RooRealVar a2("a2","quadratic term",-80,-200,0); 
  RooPolynomial bkg("bkg","background",x,RooArgList(a1,a2));
  //RooChebychev bkg("bkg","background",x,RooArgList(a1,a2));
  /////////////
  //Data
  RooDataHist data("data","dataset",x,histo);
  RooPlot* xframe = x.frame();
  data.plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));
  ////////////
  RooRealVar Ns("Ns","signal counts",100,0,10000);
  RooRealVar Nb("Nb","background counts",300,0,10000);
  RooAddPdf model("model","sig + bkg",RooArgList(sig,bkg),RooArgList(Ns,Nb));
  RooFitResult* res= model.fitTo(data,Range(0.43,0.75),Save());
  model.plotOn(xframe,VisualizeError(*res,1),Minimizer("Minuit2"),FillColor(kOrange));
  model.plotOn(xframe,Components(bkg),LineStyle(kDashed));
  model.plotOn(xframe,Components(sig),LineStyle(kDashed),LineColor(kBlack));
  xframe->Draw();
  
}
