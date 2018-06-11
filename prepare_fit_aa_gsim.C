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
  a1->setRange(-50.,50.);
  //*a1=0;
  RooRealVar *mg = w->var("mg");
  //mg->setConstant(0);
  RooRealVar *sg = w->var("sg");
  sg->setConstant(0);
  //*sg=0.001;
  RooRealVar *s0 = w->var("s0");
  s0->setConstant(0);
  //*s0=0.00001;
  RooRealVar *m0 = w->var("m0");
  //m0->setConstant(0);
  RooRealVar *Nb = w->var("Nb");
  Nb->setRange(-100,1e8);
  //*Nb=100;
  
  
  RooRealVar *Npi0 = w->var("Npi0");
  Npi0->setRange(-100,1e8);
  RooPlot *pl = meta->frame();
  /*
  RooRealVar Npi0_g("Npi0_g","numbwe on pi0",100000.,0.,1e8);
  RooRealVar m_g("m_g","mean pi0",0.135007,0.134,0.136);
  RooRealVar s_g("s_g","sigma pi0",0.0001,0.0,0.01);
  RooRealVar x1("x1","slope parameter",0.0001,0.0,0.01);
  RooRealVar Nb_g("Nb_g","Number on background",100.,0.,1e8);
  m_g.setConstant(0);
  RooGaussian pk("pk","gaussian",*meta,m_g,s_g);
  RooChebychev p1("p1","linear bkg",*meta,RooArgList(x1));
  
  RooAddPdf model_g("model_g","sig + bkg",RooArgList(pk,p1),RooArgList(Npi0_g,Nb_g));
  */
  //RooFitResult *res = model_g.fitTo(*ds,RooFit::Range(0.12,0.15),RooFit::Extended(),RooFit::Save());
  RooFitResult *res = model->fitTo(*ds,RooFit::Range(0.12,0.15),RooFit::Extended(),RooFit::Save());
    
  ds->plotOn(pl,RooFit::Binning(1e4,0.05,0.4));
  //model_g.plotOn(pl);
  //  model->plotOn(pl);
  
  RooRealVar w0("w0","width breit-wigner",0.001,0.,0.01);
  //w0.setError(0.001);
  RooRealVar p0("p0","peak signal",0.135007,0.134,0.136);
  //  p0.setConstant();
  RooRealVar ss("ss","sigma smearing",0.0001,0.,0.1);
  //ss.setError(0.0001);
  RooRealVar ms("ms","mean smearing",0.,-0.1,0.1);
  //ms.setError(0.0001);
  ms.setConstant();
  RooRealVar xM("meta","obs",0.05,0.4);
  
  RooBreitWigner bw0("bw0","signal",*meta,p0,w0);
  RooGaussian gs("gs","smearing gaussian",*meta,ms,ss);
  xM.setBins(1e4,"cache");

  RooFFTConvPdf bwxg("bwxg","bw x g",*meta,bw0,gs);
  
  RooRealVar h1("h1","slope parameter",-1,-5000.,5000.);
  //h1.setError(0.005);
  RooChebychev b1("b1","linear bkg",*meta,RooArgList(h1));
  
  RooRealVar Npi0_c("Npi0_c","Npi0 convolved",10e4,0,1e7);
  //Npi0_c.setError(1000.);
  RooRealVar Nb_c("Nb_c","N background",2e5,-10,1e7);
  //Nb_c.setError(1000.);

  RooAddPdf model_c("model_c","bwxg + pol1",RooArgList(bwxg,b1),RooArgList(Npi0_c,Nb_c));
  // b1.plotOn(pl,RooFit::LineStyle(kDashed));
  //  pl->Draw();
  res = model_c.fitTo(*ds,RooFit::Range(0.12,0.15),RooFit::Extended(),RooFit::Save());

  meta->setRange("rplot",0.12,0.15);
  
  model->plotOn(pl,RooFit::LineColor(kBlue),RooFit::NormRange("rplot"));
  model->plotOn(pl,RooFit::LineColor(kBlue),RooFit::Components(*poly),RooFit::LineStyle(kDashed),RooFit::NormRange("rplot"));
  
  model_c.plotOn(pl,RooFit::LineColor(kRed));
  model_c.plotOn(pl,RooFit::LineColor(kRed),RooFit::Components(b1),RooFit::LineStyle(kDashed));

  pl->Draw();
}
