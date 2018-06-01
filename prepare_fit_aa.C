{
  using namespace RooFit;
  Int_t bin=0;
  RooWorkspace *w = (RooWorkspace *)_file0->Get(Form("w1_%d",bin));
  RooDataSet *ds = (RooDataSet *)_file0->Get(Form("ds1_%d",bin));
  RooAbsPdf *sig = w->pdf("sig");
  w->Print();
  RooRealVar *meta = w->var("meta");

  RooPlot *fr = meta->frame();

  
  RooRealVar k("k","decaying number",-20.,-100.,0.);
  
  RooRealVar a0("a0","a0",-0.723,-100.,100);
  RooRealVar a1("a1","a1",-0.426,-100,100);

  // RooChebychev bkg_pol("bkg_pol","bkg polinomial",*meta,RooArgList(a0,a1));
   RooChebychev bkg_pol("bkg_pol","bkg polinomial",*meta,RooArgList(a1));

   RooExponential bkg_exp("bkg_exp","exponential background",*meta,k);

  RooRealVar Npol("Npol","polynomial entries",50,0,1e6);

  RooRealVar Nexp("Nexp","exponential entries",100,0,1e6);

  RooAddPdf bkg_exp_pol("bkg_exp_pol","exp + pol1",RooArgList(bkg_exp,bkg_pol),RooArgList(Nexp,Npol));

  //Decay smeared
  RooRealVar tau("tau","decaying time",0.05,0.001,1.);
  RooRealVar bias("bias","bias",0.,-1.,1.);
  RooRealVar sigma("sigma","sigma",0.01,0.,1.);
  RooGaussModel smear("smear","smearing gaussian",*meta,bias,sigma);
  RooDecay bkg_decay("bkg_decay","decay smeared",*meta,tau,smear,RooDecay::SingleSided);
  //RooGExpModel bkg_exG("bkg_exG","Exponential (x) gausian",*meta,s,k);;

  RooAbsPdf *bkg = (RooAbsPdf*)bkg_exp_pol.clone("bkg");
  //RooAbsPdf *bkg = (RooAbsPdf*)bkg_exp.clone("bkg");
  //RooAbsPdf *bkg = (RooAbsPdf*)bkg_decay.clone("bkg_decay");
    
  RooRealVar *Neta = w->var("Neta");
  RooRealVar *Nb = w->var("Nb");
  RooRealVar *s = w->var("s");
  s->setRange(0.04,0.05);
  s->setConstant(0);
  
  RooAddPdf model_e("model_e","sig + bkg",RooArgList(*sig,*bkg),RooArgList(*Neta,*Nb));

  RooFitResult *res = model_e.fitTo(*ds,RooFit::Range(0.2,0.8),RooFit::Extended(),RooFit::Save());
    
  ds->plotOn(fr);
  model_e.plotOn(fr,RooFit::LineColor(kRed));
  model_e.plotOn(fr,RooFit::Components(*bkg),RooFit::LineColor(kBlue),RooFit::LineStyle(2));
  fr->Draw();
}
