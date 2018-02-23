{
  //Observable
  RooRealVar z("z","z vertex",-40,-18);

  //Gaussian for walls:
  RooRealVar m0("m0","mean for wall 0",-31.2633,-32,-30);
  RooRealVar m1("m1","mean for wall 1",-29.3132,-30,-28);
  RooRealVar s0("s0","sigma for wall 0",0.3,0.,0.8);
  RooRealVar s1("s1","sigma for wall 1",0.3,0.,0.8);
  RooGaussian p0("p0","wall 0",x,m0,s0);
  RooGaussian p1("p0","wall 0",x,m1,s1);

  // smearing function.
  RooRealVar ms("ms","mean smearing");
  RooRealVar ss("ss","sigma smearing");
  RooGaussian sf("sf","smearing function",x,ms,ss);
  
  //Step pdf
  RooRealVar x0("x0","step center");
  RooRealVar w("w","width");
  RooGenericPdf stp("stp","step function","(-w/2.<(x-x0)&&(x-x0)<w/2.)*1.0",RooArgSet(x,x0,w)) ;

  //model liquid.
  RooFFTConvPdf model_lt("model_lt","step (x) gauss + gauss1 + gauss2",x,RooArgList(sf,stp));

  RooDataSet ds("ds","vz data",x);
  
  TTree *t = (TTree *)_file0->Get("ntuple_data_electrons");
  
  

}
