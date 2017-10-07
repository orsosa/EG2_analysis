RooRealVar x("m","m",0.4,0.9); 
RooRealVar s("s","#sigma",0.,0.3); 
RooRealVar m("m","mean",0.5,0.6); 
RooDataHist data("data","dataset with m",m,hM_bin0); 
RooPlot* xframe = x.frame() ;
data.plotOn(xframe);
xframe.p
xframe->Draw()
RooRealVar x("x","x",0.4,0.9); 
RooRealVar m("m","mean",0.5,0.6); 
RooRealVar s("s","#sigma",0.,0.3); 
RooDataHist data("data","dataset with x",x,hM_bin0); 
data.plotOn(xframe);
xframe->Draw()
RooPlot* xframe = x.frame() ;
data.plotOn(xframe);
xframe->Draw()
data.plotOn(xframe,MarkerColor(kBlue));
data.plotOn(xframe,LineColor(kBlue))
data.plotOn(xframe,LineColor(kBlue));
data.plotOn(xframe,RooFit::LineColor(kBlue));
data.plotOn(xframe,RooFit::MarkerColor(kBlue));
use namespace RooFit
using namespace RooFit;
data.plotOn(xframe,MarkerColor(kBlue));
xframe->Draw()
data.plotOn(xframe,MarkerColor(kBlue),LineColor(kBlue));
xframe->Draw()
RooGaussian sig("sig","eta mass",x,m,s)
RooRealVar a1("a1","linear term",10,-100,100); 
RooRealVar a2("a2","quadratic term",-100,-1000,0); 
RooPolynomial bkg("bkg","background",x,RooArgList(a1,a2))
.ls
RooRealVar Ns("Ns","signal counts",100,0,10000);
RooRealVar Ns("Ns","signal counts",100,0,10000);
RooRealVar Nb("Nb","background counts",100,0,10000);
RooAddPdf model("model","sig + bkg",RooArgList(sig,bkg),RooArgList(Ns,Nb));
model.fitTo(*data); 
model.fitTo(*data,Minuit); 
model.fitTo(*data,Minuit()); 
model.fitTo(*data,Extended()); 
data
model.fitTo(*data,Extended()) ; 
.q
