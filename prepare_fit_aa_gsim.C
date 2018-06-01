{
  using namespace RooFit;
  Int_t bin=0;
  RooWorkspace *w = (RooWorkspace *)_file0->Get(Form("w1_%d",bin));
  RooDataSet *ds = (RooDataSet *)_file0->Get(Form("ds1_%d",bin));
  RooAbsPdf *model = w->pdf("model");
  RooAbsPdf *poly= w->pdf("poly");
  w->Print();
  RooRealVar *meta = w->var("meta");
  RooRealVar *a1 = w->var("a1");
  RooRealVar *mg = w->var("mg");
  RooRealVar *sg = w->var("sg");
  RooRealVar *s0 = w->var("s0");
  RooRealVar *m0 = w->var("m0");
  RooRealVar *Nb = w->var("Nb");
  Nb->setRange(0,1e8);
  RooRealVar *Npi0 = w->var("Npi0");
  
  RooPlot *fr = meta->frame();
  
  RooRealVar Npi0_g("Npi0_g","numbwe on pi0",100000.,0.,1e8);
  RooRealVar m_g("m_g","mean pi0",0.135007,0.134,0.136);
  RooRealVar s_g("s_g","sigma pi0",0.0001,0.0,0.01);
  RooRealVar x1("x1","slope parameter",0.0001,0.0,0.01);
  RooRealVar Nb_g("Nb_g","Number on background",100.,0.,1e8);
  m_g.setConstant(0);
  RooGaussian peak("peak","gaussian",*meta,m_g,s_g);
  RooChebychev p1("p1","linear bkg",*meta,RooArgList(x1));
  
  RooAddPdf model_g("model_g","sig + bkg",RooArgList(peak,p1),RooArgList(Npi0_g,Nb_g));

  RooFitResult *res = model_g.fitTo(*ds,RooFit::Range(0.12,0.15),RooFit::Extended(),RooFit::Save());
    
  ds->plotOn(fr,RooFit::Binning(1e4,0.05,0.4));
  model_g.plotOn(fr);
  
  fr->Draw();
}
