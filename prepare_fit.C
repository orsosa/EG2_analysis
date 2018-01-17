{
  using namespace RooFit;
  
  RooRealVar m("m","mean",0.55,0.5,0.6);
  RooRealVar s("s","sigma",0.05,0.0,0.1);
  RooRealVar x("x","variable",0.45,0.8);
  Double_t ll,hl;
  RooRealVar metam("meta","#eta mass",0.55,"GeV");
  RooDataSet *ds = (RooDataSet*) gROOT->FindObject("ds1_2");
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
  pl->Draw();
  


}
