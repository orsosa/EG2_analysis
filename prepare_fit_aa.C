{
  using namespace RooFit;
  Int_t bin=1;
  RooWorkspace *w = (RooWorkspace *)_file0->Get(Form("w1_%d",bin));
  RooDataSet *ds = (RooDataSet *)_file0->Get(Form("ds1_%d",bin));
  RooAbsPdf *sig = w->pdf("sig");
  RooRealVar *meta = w->var("meta");
  RooRealVar k("k","decaying number",-20.,-100.,0.);
  
  RooExponential bkg_exp("bkg_exp","exponential background",*meta,k);
  
  RooRealVar *Ns = w->var("Ns");
  RooRealVar *Nb = w->var("Nb");
  RooPlot *pl = meta->frame();
  
  RooAddPdf model_e("model_e","sig + bkg_exp",RooArgList(*sig,bkg_exp),RooArgList(*Ns,*Nb));

  RooFitResult *res = model_e.fitTo(*ds,RooFit::Range(0.35,0.75),RooFit::Extended(),RooFit::Save());
  
  
  ds->plotOn(pl);
  model_e.plotOn(pl,RooFit::LineColor(kRed));
  model_e.plotOn(pl,RooFit::Components(bkg_exp),RooFit::LineColor(kBlue),RooFit::LineStyle(2));
  pl->Draw();
}
