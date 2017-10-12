#include "TROOT.h"
#include "Riostream.h"
#include "TCanvas.h"
#include "TH1F.h"
#include "RooGaussian.h"
#include "RooRealVar.h"
#include "RooFormulaVar.h"
#include "RooConstVar.h"
#include "RooPolynomial.h"
#include "RooChebychev.h"
#include "RooDataHist.h"
#include "RooFitResult.h"
#include "RooAddPdf.h"
#include "RooPlot.h"
#include "RooArgList.h"

using namespace RooFit;
TCanvas * RooFit_routine(TH1F* hM_bin0){

  TH1F *histo = hM_bin0;
  
  Float_t xmin=0.4,xmax=0.9,R=xmax-xmin;

  RooConstVar xminv=RooConst(xmin);
  RooConstVar xmaxv=RooConst(xmax);
  RooConstVar Rv=RooConst(R);

  //Signal
  RooRealVar x("x","x",xmin,xmax); 
  RooRealVar s("s","#sigma",0.,0.1); 
  RooRealVar m("m","mean",0.5,0.6); 
  RooGaussian sig("sig","eta mass",x,m,s);
  ///////////////////
  //Background
  //////regular polynome
  RooRealVar a1("a1","linear term",100.,-1000.,1000.); 
  RooRealVar a2("a2","quadratic term",-80.,-2000.,0.); 
  RooPolynomial bkg("bkg","background",x,RooArgList(a1,a2));
  RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2));

  /*
  ////////Chebychev
  RooRealVar a1("a1","linear term",60,-1000,1000); 
  RooRealVar a2("a2","quadratic term",-150,-1000,0); 


  RooChebychev bkg("bkg","background",x,RooArgList(a1,a2));
  /////////////
  RooFormulaVar minFunc("minFunc","Minimum formula","xmaxv - Rv/2. - a1*Rv*Rv/16./a2",RooArgList(a1,a2,Rv,xmaxv));
  /////////////////////////////////////
*/

  RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(0.6),RooConst(0.15));

  //Data
  RooDataHist data("data","dataset",x,histo);
  RooPlot* xframe = x.frame();
  data.plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));
  ////////////
  RooRealVar Ns("Ns","signal counts",100,0,10000);
  RooRealVar Nb("Nb","background counts",300,0,10000);
  RooAddPdf model("model","sig + bkg",RooArgList(sig,bkg),RooArgList(Ns,Nb));
  //  RooFitResult* res= model.fitTo(data,Range(0.43,0.75),Save());
  RooFitResult* res= model.fitTo(data,Range(0.42,0.75),ExternalConstraints(parConst),Save());
  //  model.plotOn(xframe,VisualizeError(*res,1),Minimizer("Minuit2"),FillColor(kOrange));
  model.plotOn(xframe,VisualizeError(*res,1),FillColor(kOrange));
  model.plotOn(xframe,Components(bkg),LineStyle(kDashed));
  //  model.plotOn(xframe,Components(sig),LineStyle(kDashed),LineColor(kBlack)); 
  model.plotOn(xframe);
  data.plotOn(xframe);
  TCanvas *c = new TCanvas("c","c",1024,768);
  xframe->Draw();
  return c;
}
