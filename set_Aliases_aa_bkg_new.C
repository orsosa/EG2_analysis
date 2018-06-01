{
  if (gROOT->FindObject("c")!=0)
    delete c;
  if (gROOT->FindObject("h0")!=0)
    delete h0;
  if (gROOT->FindObject("h0n")!=0)
    delete h0n;
  if (gROOT->FindObject("hm")!=0)
    delete hm;
  if (gROOT->FindObject("hm0")!=0)
    delete hm0;
  if (gROOT->FindObject("hd")!=0)
    delete hd;
  if (gROOT->FindObject("hd0")!=0)
    delete hd0;
  if (gROOT->FindObject("hmn")!=0)
    delete hmn;
  if (gROOT->FindObject("hdz")!=0)
    delete hdz;
    
  gROOT->LoadMacro("class_for_aa.C");

  
  TCanvas *c =  new TCanvas("c","c",1024,768);

  TH2F *hdz = new TH2F("hdz","dalitz plot",300,0,1,300,0,1);
  TH1F *h0 = new TH1F("h0","mass spectrum",500,0,2);
  h0->GetXaxis()->SetTitle("M (GeV)");
  h0->GetYaxis()->SetTitle("dN/dM");
  h0->SetLineWidth(2);

  TH1F *hm = (TH1F*) h0->Clone("hm");
  TH1F *hmT = (TH1F*) h0->Clone("hmT");
  TH1F *hm0 = (TH1F*) h0->Clone("hm0");
  TH1F *hd = (TH1F*) h0->Clone("hd");
  TH1F *hd0 = (TH1F*) h0->Clone("hd0");

  TH1F *h0n = (TH1F*) h0->Clone("h0n");
  TH1F *hmn = (TH1F*) h0->Clone("hmn");
  TH1F *hratio = (TH1F*) h0->Clone("hratio");
  hratio->SetTitle("Ratio");
  hratio->GetYaxis()->SetTitle("R");


  hm0->SetLineColor(kRed);
  hm->SetLineColor(kBlue);
  hd->SetLineColor(kGreen-5);
  hd0->SetLineColor(kBlack);
  hmT->SetLineColor(kRed);


  TTree *t = (TTree *)_file0->Get("outbkgnd");
  t->SetAlias("Eeta","fE[0]+fE[1]");
  t->SetAlias("Pxeta","fX[0]+fX[1]");
  t->SetAlias("Pyeta","fY[0]+fY[1]");
  t->SetAlias("Pzeta","fZ[0]+fZ[1]");

  t->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta)");


  t->SetAlias("p0p1","fE[0]*fE[1] - (fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])");

  t->SetAlias("meta0","TMath::Sqrt( 2*p0p1 )");

  t->SetAlias("ct","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");
  t->SetAlias("metaT","TMath::Sqrt( 2*fE[0]*fE[1]*(1-ct) )");
  t->SetAlias("metaT2","2*fE[0]*fE[1]*(1-ct)");

  /// boost.
  t->SetAlias("bX","Pxeta/Eeta");
  t->SetAlias("bY","Pyeta/Eeta");
  t->SetAlias("bZ","Pzeta/Eeta");
  t->SetAlias("b","TMath::Sqrt(bX*bX + bY*bY + bZ*bZ)");
  t->SetAlias("g","1.0/TMath::Sqrt(1-b*b)"); 
  t->SetAlias("bDotr_a0","bX*fX[0] + bY*fY[0] + bZ*fZ[0]");
  t->SetAlias("bDotr_a1","bX*fX[1] + bY*fY[1] + bZ*fZ[1]");

  t->SetAlias("Ea0_b","g*(fE[0] - bDotr_a0)");
  t->SetAlias("Ea1_b","g*(fE[1] - bDotr_a1)");

  t->SetAlias("Pxa0_b","fX[0]+(g-1)/(b*b)*(bDotr_a0)*bX - g*fE[0]*bX");
  t->SetAlias("Pya0_b","fY[0]+(g-1)/(b*b)*(bDotr_a0)*bY - g*fE[0]*bY");
  t->SetAlias("Pza0_b","fZ[0]+(g-1)/(b*b)*(bDotr_a0)*bZ - g*fE[0]*bZ");

  t->SetAlias("Pxa1_b","fX[1]+(g-1)/(b*b)*(bDotr_a1)*bX - g*fE[1]*bX");
  t->SetAlias("Pya1_b","fY[1]+(g-1)/(b*b)*(bDotr_a1)*bY - g*fE[1]*bY");
  t->SetAlias("Pza1_b","fZ[1]+(g-1)/(b*b)*(bDotr_a1)*bZ - g*fE[1]*bZ");

  t->SetAlias("ma0","TMath::Sqrt(fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0])");
  t->SetAlias("ma1","TMath::Sqrt(fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1])");

  t->SetAlias("ma0_2","fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0]");
  t->SetAlias("ma1_2","fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1]");

 
  //TH2D *hx = hdz->ProjectionX();
  //TH2D *hy = hdz->ProjectionY();
  
  //////////////////

  t->SetAlias("Dm","meta-ma0-ma1");
  t->SetAlias("Dm0","meta0-ma0-ma1");

  t->SetAlias("minAngle","2*TMath::ATan(0.500/(TMath::Sqrt(Eeta*Eeta-0.540*0.500)))*TMath::RadToDeg()");


  TCut pi0cut0 = "0.1<meta0&&meta0<0.18";
  TCut pi0cut = "0.1<meta&&meta<0.18";
  TCut ma0cut = "0<=ma0_2&&ma0_2<0.001";
  TCut ma1cut = "0<=ma1_2&&ma1_2<0.001";
  TCut ma0_2cut = "0<=ma0_2";
  TCut ma1_2cut = "0<=ma1_2";
  TCut angle_cut = "minAngle<TMath::ACos(ct)*TMath::RadToDeg()";

  /*
  t->Draw("meta>>hm",!pi0cut0,"");
  t->Draw("meta0>>hm0",!pi0cut,"same");
  t->Draw("Dm>>hdm",!pi0cut,"same");
  t->Draw("Dm0>>hdm0",pi0cut,"same");
  */

  //t->Draw("meta>>h0n",pi0cut&&!mK0cut&&!mrhocut,"same");
  //t->Draw("Dm>>hmn",pi0cut&&!mK0cut&&!mrhocut,"same");

 //t->Draw("meta>>h0n",pi0cut&&planecut,"same");
  //t->Draw("Dm>>hmn",pi0cut&&planecut,"same");

  Float_t max=hm0->GetMaximum();
  if (max<hm->GetMaximum())
    max=hm->GetMaximum();
  if (max<hd->GetMaximum())
    max=hd->GetMaximum();
  if (max<hd0->GetMaximum())
    max=hd0->GetMaximum();

  hm0->SetMaximum(max*1.1);

  using namespace RooFit;
  // observable
  RooRealVar meta("meta","M_{#eta}",0,1);
  // RooRealVar m("m","mean",0.5,0.6);

  //////// pi0 peak ////////////
  RooRealVar m0("m0","mean pi0",0.135,0.125,0.145);
  //  RooRealVar s0("s0","sigma pi0",0.018,0.0,0.3);
  RooRealVar s0("s0","sigma pi0",0.000173711,0.0,0.001);

  RooRealVar m1("m1","mean eta",0.5467,0.543,0.55);
  //RooRealVar s1("s1","sigma eta",0.045,0.0,0.3);
  RooRealVar s1("s1","sigma eta",0.000113379,0.0,0.005);
  RooGaussian peak0("peak0","pi0 mass",meta,m0,s0);
  RooGaussian peak1("peak1","eta mass",meta,m1,s1);
  //////////////////////// constructing background ///////////
  // gauss(meta,mg,sg) ;
  RooRealVar mg("mg","mean gauss bkg",-0.01,-2,2.);
  RooRealVar sg("sg","sigma gauss bkg",0.1,0.,.2);
  RooGaussian gbkg("gbkg","gaussian background",meta,mg,sg);

  //////////////////////// constructing background ///////////
  // gauss(meta,mg,sg) ;
  RooRealVar k("k","slope parameter",-5,-100,-0.1);
  RooExponential exp_bkg("exp_bkg","gaussian background",meta,k);

  /////////// bkg //////////
  RooFFTConvPdf bkg_exg("bkg_exg","exp (X) gauss",meta,exp_bkg,gbkg);
  meta.setBins(1000,"cache");
  ///////////////////////////////////////////////////////////

 
  // Construct landau(meta,ml,sl) ;
  RooRealVar ml("ml","mean landau bkg",.13,-20.,20.);
  RooRealVar sl("sl","sigma landau bkg",0.003,0.0,1.);
  RooLandau lbkg("lbkg","landau background",meta,ml,sl);
  /////////// bkg //////////
  RooFFTConvPdf bkg_lxg("bkg_lxg","landau (X) gauss",meta,lbkg,gbkg);
  meta.setBins(1000,"cache");
  ///////////////////////////////////////////////////////////

  RooDataSet dsM("Mdata","Mass #eta #rightarrow #gamma #gamma",RooArgSet(meta));

  RooRealVar a0("a0","constant term",1.,-10,1e4);
  RooRealVar a1("a1","linear term",-1.,-1e4,1e4);
  RooRealVar a2("a2","quadratic term",0.,-2e3,2e3);  
  //RooRealVar a3("a3","cubic term",0.1,-1000.,1000.);
  //RooPolynomial bkg("bkg","background",meta,RooArgList(a1,a2,a3));
  //  RooPolynomial bkg("bkg","background",meta,RooArgList(a1,a2));
  //RooPolynomial poly("poly","poly for gsim peak",meta,RooArgList(a0,a1),0);
  RooChebychev poly("poly","poly for gsim peak",meta,RooArgList(a0,a1,a2));
  
  //RooFormulaVar minFunc("minFunc","Minimum formula","(-a2 +TMath::Sqrt(a2*a2 - 3*a3*a1) )/(3*a3)",RooArgList(a1,a2,a3));
  //  RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2)); 

  //RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(1),RooConst(0.15));


  RooRealVar Npi0("Npi0","Events on #pi^{0}",107859.,0.,1000000);
  RooRealVar Neta("Neta","Events on #eta",6853.,0.,1000000);
  RooRealVar Nb("Nb","Events on background",182499.,0.,1000000);
  RooRealVar Nm("Nm","Events on #pi^{0} model +bkg",290116,0.,1000000);

  //  RooBreitWigner BWpeak("BWpeak","gsim peak",meta,m0,s0);
  RooBreitWigner BWpeak("BWpeak","gsim peak",meta,m1,s1);

  
  RooFFTConvPdf peak_bwxg("peak_bwxg","BW (x) gauss",meta,BWpeak,gbkg);
  meta.setBins(10000,"cache");
  Nb=526029.;Neta=20000.;

  RooAddPdf gspeak("gspeak","peak_bwxg + pol1",RooArgList(peak_bwxg,poly),RooArgList(Neta,Nb));//eta
  //  RooAddPdf gspeak("gspeak","peak_bwxg + pol1",RooArgList(peak_bwxg,poly),RooArgList(Npi0,Nb));//pi0
  //RooAddPdf gspeak("gspeak","peak + pol1",RooArgList(BWpeak,poly),RooArgList(Neta,Nb));
  //RooAddPdf model("model","peak0 + peak1  + bkg",RooArgList(peak0,peak1,bkg_lxg),RooArgList(Npi0,Neta,Nb));

  //RooAddPdf model("model","peak0 + bkg",RooArgList(peak0,bkg_lxg),RooArgList(Npi0,Nb));
  RooAddPdf model("model","peak0 + bkg",RooArgList(peak0,bkg_exg),RooArgList(Npi0,Nb));

  RooAddPdf model_full("model_full","peak1 + peak0 + bkg",RooArgList(peak1,model),RooArgList(Neta,Nm));

  RooAddPdf model_bkg("model_bkg","bkg_exg + pol1",RooArgList(peak_bwxg,poly),RooArgList(Neta,Nb));//eta

  
  RooFitResult* res;  
  
  RooPlot *pl =meta.frame();

  /*

  class_for_aa reader(t);
  reader.Loop(&dsM,&meta);

  res=model.fitTo(dsM,RooFit::Extended(),RooFit::Range(0.05,0.4),RooFit::Save());

  */



  /*
  //TFile f("dataset_gsim_C_aa.root");
  //auto dst = (RooDataSet*)f.Get("dsM");
  TFile f("Zbin4.root");
  auto dst = (RooDataSet*)f.Get("ds");
  s1.setConstant();sg.setConstant();m1.setConstant();
//  gspeak.fitTo(*dst,RooFit::Range(0.48,0.62),RooFit::Extended()); //eta
  gspeak.fitTo(dsM,RooFit::Range(0.12,0.15),RooFit::Extended()); //pi0
  gspeak.fitTo(dsM,RooFit::Range(0.5,0.6),RooFit::Extended()); //eta
 
 */


///////////////// Perform fit ////////////////
  /*

    ds->plotOn(pl,RooFit::Binning(1e4));
    gspeak.plotOn(pl);
    pl->Draw();

  */
// Int_t nev=t->Draw("meta",ma0cut&&ma1cut&&"0.5<Z&&Z<0.6");
//Int_t nev=t->Draw("meta",ma0cut&&ma1cut);
  //Double_t *dataArr=t->GetV1();

  /*

  class_for_aa reader(t);
  reader.Loop(&dsM,&meta);


  */
 /*  


  //  RooCmdArg range=RooFit::Range(0.35,0.75);
  // RooCmdArg save=RooFit::Save();
    
//  Float_t rangeFit[2]={0.42,0.75};TFile f("dataset_gsim_C_aa.root")

  s0.setConstant();
  //s1.setConstant();
  //  res  = model.fitTo(dsM,range,ExternalConstraints(parConst),save);  
  res=model.fitTo(dsM,RooFit::Extended(),RooFit::Range(0.05,0.4),RooFit::Save());
  model.getParameters(meta)->setAttribAll("Constant");
  
  res=model_full.fitTo(dsM,RooFit::Extended(),RooFit::Range(0.05,0.75),RooFit::Save()); 
  
  dsM.plotOn(pl);

  model_full.plotOn(pl);
  model_full.plotOn(pl,RooFit::VisualizeError(*res,1),RooFit::FillColor(kOrange)); 
  model_full.plotOn(pl,RooFit::Components(bkg_lxg),RooFit::LineStyle(kDashed),RooFit::Range(0.05,0.7));
  model_full.plotOn(pl,RooFit::LineColor(kRed)) ;

  dsM.plotOn(pl);
  pl->Draw();
//////////////////////////////////////////////////
*/
  // t->Draw("Dm>>h0",pi0cut&&!mK0cut&&!mrhocut,"");
  // t->Draw("DDm>>hm",pi0cut&&!mK0cut&&!mrhocut,"same");
  /*
  t->Draw("meta>>hm",ma0cut&&ma1cut);
  t->Draw("metaT>>hmT",ma0cut&&ma1cut);
  hratio->Divide(hm,hmT);

  TLegend *l = new TLegend(0.6,0.7,0.95,0.8);


  l->AddEntry(hmT,"#sqrt{2*E0*E1*(1-cos(#theta_{#gamma#gamma}))}");
  l->AddEntry(hm,"#sqrt{(E0+E1)^{2} - (P0+P1)^{2}}");
  /////draw ratio
  c->Divide(1,2,0,0);
  c->GetPad(1)->SetBottomMargin(0);
  c->GetPad(1)->SetRightMargin(0.01);
  c->GetPad(2)->SetTopMargin(0);
  c->GetPad(2)->SetRightMargin(0.01);
  
  c->cd(1);
  hm->Draw();
  hmT->Draw("same");
  c->cd(2);
  hratio->Draw();
  */

  /*

    l->AddEntry(hmT,"#sqrt{2*E0*E1*(1-cos(#theta_{#gamma#gamma}))}");
    l->AddEntry(hm,"#sqrt{(E0+E1)^{2} - (P0+P1)^{2}}");
/////draw ratio
    c->Divide(1,2);
    c->GetPad(1)->SetBottomMargin(0);
    c->GetPad(2)->SetTopMargin(0);



  l->AddEntry(h0,"m(#pi^{+}#pi^{-}#pi^{0}(#gamma#gamma))");
  l->AddEntry(hm,"#Delta m");
  l->AddEntry(h0n,"m(#pi^{+}#pi^{-}#pi^{0}(#gamma#gamma)) no K^{0} nor #rho");
  l->AddEntry(hmn,"#Delta m no K^{0} nor #rho");
  l->Draw();
  
  TH1F *hpi0=new TH1F("hpi0","Momentum in CM frame",500,-2,2);
  hpi0->SetLineWidth(2);
  TH1F* hpip= (TH1F*)hpi0->Clone("hpip");
  TH1F* hpim= (TH1F*)hpi0->Clone("hpim");
  
  hpi0->SetLineColor(kRed);
  hpip->SetLineColor(kBlue);
  hpim->SetLineColor(kBlack);
  t->Draw("Pypi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  t->Draw("Pypip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  t->Draw("Pypim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  TLegend *l = new TLegend(0.6,0.5,0.7,0.8);
  l->AddEntry(hpi0,"#pi^{0}","lp");
  l->AddEntry(hpip,"#pi^{+}","lp");
  l->AddEntry(hpim,"#pi^{-}","lp");
  l->Draw();
  //  hpi0->GetXaxis()->SetTitle("P_{y} CM (GeV)");
  //hpi0->GetYaxis()->SetTitle("dN/dP_{y}");

  //  c->SaveAs("Py_CM_noK0rho_gsim.gif");
  //c->SaveAs("Py_CM_noK0rho_gsim.C");
  
  t->Draw("Pxpi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  t->Draw("Pxpip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  t->Draw("Pxpim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  hpi0->GetXaxis()->SetTitle("P_{x} CM (GeV)");
  hpi0->GetYaxis()->SetTitle("dN/dP_{x}");
  //c->SaveAs("Px_CM_noK0rho_gsim.gif");
  //c->SaveAs("Px_CM_noK0rho_gsim.C");


  t->Draw("Pzpi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  t->Draw("Pzpip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  t->Draw("Pzpim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  hpi0->GetXaxis()->SetTitle("P_{z} CM (GeV)");
  hpi0->GetYaxis()->SetTitle("dN/dP_{z}");
  //c->SaveAs("Pz_CM_noK0rho_gsim.gif");
  //c->SaveAs("Pz_CM_noK0rho_gsim.C");


*/
/*
  t->Draw("Dm>>h(500,0,2)",pi0cut,"");
  t->Draw("Dm>>hp(500,0,2)",pi0cut&&planecut,"same");
  t->Draw("Dm>>hnp(500,0,2)",pi0cut&&!planecut,"same");
*/


/*
  t->Draw("Pzpi0_b>>hpi0",pi0cut&&!mK0cut&&!mrhocut,"");
  t->Draw("Pzpip_b>>hpip",pi0cut&&!mK0cut&&!mrhocut,"same");
  t->Draw("Pzpim_b>>hpim",pi0cut&&!mK0cut&&!mrhocut,"same");
  hpi0->SetLineColor(kRed);
  hpi0->SetLineWidth(2);
  hpip->SetLineColor(kBlue);
  hpip->SetLineWidth(2);
  hpim->SetLineColor(kBlack);
  hpim->SetLineWidth(2);

  TLegend *l = new TLegend(0.6,0.5,0.95,0.65);
  l->AddEntry(hpi0,"#pi^{0}","lp");
  l->AddEntry(hpip,"#pi^{+}","lp");
  l->AddEntry(hpim,"#pi^{-}","lp");
  l->Draw();
  hpi0->GetXaxis()->SetTitle("Pz_CM");

t->SetAlias("Epi0_0","fE[0] + fE[1]");
t->SetAlias("Epi0_1","fE[2] + fE[3]");
t->SetAlias("Pxpi0_0","fX[0] + fX[1]");
t->SetAlias("Pypi0_0","fY[0] + fY[1]");
t->SetAlias("Pypi0_0","f[0] + fZ[1]");
t->SetAlias("Pzpi0_0","fZ[0] + fZ[1]");
t->SetAlias("Pzpi0_1","fZ[2] + fZ[3]");
t->SetAlias("Pypi0_1","fY[2] + fY[3]");
t->SetAlias("Pxpi0_1","fX[2] + fX[3]");
t->SetAlias("mpi0_1","TMath::Sqrt(2*(fE[2]*fE[3] - fX[2]*fX[3] - fY[2]*fY[3] - fZ[2]*fZ[3]))");
t->SetAlias("mpi0_0","TMath::Sqrt(2*(fE[0]*fE[1] - fX[0]*fX[1] - fY[0]*fY[1] - fZ[0]*fZ[1]))");

*/

/*
auto ds = (RooDataSet *)_file0->Get("ds")
TFile f1("eta_aa_peak_model.root")
RooWorkspace *w = ( RooWorkspace *)f1.Get("wspc")
auto model = w->pdf("gspeak")
model->getParameters(*(w->var("meta")))->setAttribAll("Constant")
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("Nb"))->setConstant(0)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("Neta"))->setConstant(0)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("a0"))->setConstant(0)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("a1"))->setConstant(0)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("Nb"))->setRange(0,1e4)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("a1"))->setRange(-10,10)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("a0"))->setRange(-1,1e3)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("Nb"))->setVal(1000)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("a0"))->setVal(8)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("a1"))->setVal(0)

((RooRealVar*)model->getParameters(*(w->var("meta")))->find("Nb"))->setError(0)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("a0"))->setError(0)
((RooRealVar*)model->getParameters(*(w->var("meta")))->find("a1"))->setError(0)

model->fitTo(*ds,RooFit::Range(0.53,0.56),RooFit::Extended())

RooPlot *fr= w->var("meta")->frame()
ds->plotOn(fr,RooFit::Binning(1e4))
model->plotOn(fr)
fr->Draw()

*/

  
}
