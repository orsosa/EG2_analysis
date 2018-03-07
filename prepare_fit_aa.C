{
  using namespace RooFit;
  Int_t bin=0;
  RooWorkspace *w = (RooWorkspace *)_file0->Get(Form("w1_%d",bin));
  RooDataSet *ds = (RooDataSet *)_file0->Get(Form("ds1_%d",bin));
  RooAbsPdf *sig = w->pdf("sig");
  RooRealVar *meta = w->var("meta");
  RooRealVar k("k","decaying number",-20.,-100.,0.);
  RooRealVar a0("a0","a0",-0.723,-100.,100);
  RooRealVar a1("a1","a1",-0.426,-100,100);
  
  RooChebychev bkg_pol("bkg_pol","bkg polinomial",*meta,RooArgList(a0,a1));
  RooExponential bkg_exp("bkg_exp","exponential background",*meta,k);

  RooRealVar Npol("Npol","polynomial entries",50,0,1e6);
  RooRealVar Nexp("Nexp","exponential entries",100,0,1e6);

  RooAddPdf bkg_exp_pol("bkg_exp_pol","exp + pol1",RooArgList(bkg_exp,bkg_pol),RooArgList(Nexp,Npol));
  
  RooRealVar *Ns = w->var("Ns");
  RooRealVar *Nb = w->var("Nb");
  RooPlot *pl = meta->frame();
  
  //RooAddPdf model_e("model_e","sig + bkg_exp",RooArgList(*sig,bkg_exp),RooArgList(*Ns,*Nb));
  RooAddPdf model_e("model_e","sig + bkg_exp_pol",RooArgList(*sig,bkg_exp_pol),RooArgList(*Ns,*Nb));

  RooFitResult *res = model_e.fitTo(*ds,RooFit::Range(0.35,0.75),RooFit::Extended(),RooFit::Save());
  
  
  ds->plotOn(pl);
  model_e.plotOn(pl,RooFit::LineColor(kRed));
  model_e.plotOn(pl,RooFit::Components(bkg_exp_pol),RooFit::LineColor(kBlue),RooFit::LineStyle(2));
  pl->Draw();
}
