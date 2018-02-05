{
  if (gROOT->FindObject("c")!=0)
    delete c;
  if (gROOT->FindObject("h0")!=0)
    delete h0;
  if (gROOT->FindObject("h0n")!=0)
    delete h0n;
  if (gROOT->FindObject("hm")!=0)
    delete hm;
  if (gROOT->FindObject("hmn")!=0)
    delete hmn;
  if (gROOT->FindObject("hdz")!=0)
    delete hdz;

  TCanvas *c =  new TCanvas("c","c",1024,768);

  TH2F *hdz = new TH2F("hdz","dalitz plot",300,0,1,300,0,1);
  TH1F *h0 = new TH1F("h0","dm",500,0,2);
  TH1F *hm = (TH1F*) h0->Clone("hm");
  TH1F *h0n = (TH1F*) h0->Clone("h0n");
  TH1F *hmn = (TH1F*) h0->Clone("hmn");


  TTree *t = (TTree *)_file0->Get("outdata");
  
  t->SetAlias("Epip","TMath::Sqrt(fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2] + 0.13957*0.13957)");
  t->SetAlias("Epim","TMath::Sqrt(fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3] + 0.13957*0.13957)");
  t->SetAlias("Eeta","Epip+Epim+fE[0]+fE[1]");
  t->SetAlias("Pxeta","fX[0]+fX[1]+fX[2]+fX[3]");
  t->SetAlias("Pyeta","fY[0]+fY[1]+fY[2]+fY[3]");
  t->SetAlias("Pzeta","fZ[0]+fZ[1]+fZ[2]+fZ[3]");

  t->SetAlias("Erho","Epip+Epim");
  t->SetAlias("Pxrho","fX[2]+fX[3]");
  t->SetAlias("Pyrho","fY[2]+fY[3]");
  t->SetAlias("Pzrho","fZ[2]+fZ[3]");
  t->SetAlias("mrho","TMath::Sqrt(Erho*Erho - Pxrho*Pxrho - Pyrho*Pyrho - Pzrho*Pzrho) ");


  t->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta) ");


  t->SetAlias("p0p1","fE[0]*fE[1] - (fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])");
  t->SetAlias("p0p2","fE[0]*fE[2] - (fX[0]*fX[2] + fY[0]*fY[2] + fZ[0]*fZ[2])");
  t->SetAlias("p0p3","fE[0]*fE[3] - (fX[0]*fX[3] + fY[0]*fY[3] + fZ[0]*fZ[3])");
  t->SetAlias("p1p2","fE[1]*fE[2] - (fX[1]*fX[2] + fY[1]*fY[2] + fZ[1]*fZ[2])");
  t->SetAlias("p1p3","fE[1]*fE[3] - (fX[1]*fX[3] + fY[1]*fY[3] + fZ[1]*fZ[3])");
  t->SetAlias("p2p3","fE[2]*fE[3] - (fX[2]*fX[3] + fY[2]*fY[3] + fZ[2]*fZ[3])");

  t->SetAlias("meta0","TMath::Sqrt( 2*0.13957*0.13957  + 2*(p0p1 + p0p2 + p0p3 + p1p2 + p1p3 + p2p3) )");



  t->SetAlias("ct","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");

  t->SetAlias("Epi0","fE[0] + fE[1]");
  t->SetAlias("Pxpi0","fX[0] + fX[1]");
  t->SetAlias("Pypi0","fY[0] + fY[1]");
  t->SetAlias("Pzpi0","fZ[0] + fZ[1]");

  t->SetAlias("crossX","fY[2]*fZ[3] - fZ[2]*fY[3]");
  t->SetAlias("crossY","fZ[2]*fX[3] - fX[2]*fZ[3]");
  t->SetAlias("crossZ","fX[2]*fY[3] - fY[2]*fX[3]");

  t->SetAlias("crossDot","crossX*Pxpi0 + crossY*Pypi0 + crossZ*Pzpi0");

  /// boost.
  t->SetAlias("bX","Pxeta/Eeta");
  t->SetAlias("bY","Pyeta/Eeta");
  t->SetAlias("bZ","Pzeta/Eeta");
  t->SetAlias("b","TMath::Sqrt(bX*bX + bY*bY + bZ*bZ)");
  t->SetAlias("g","1.0/TMath::Sqrt(1-b*b)"); 
  t->SetAlias("bDotr_pip","bX*fX[2] + bY*fY[2] + bZ*fZ[2]");
  t->SetAlias("bDotr_pim","bX*fX[3] + bY*fY[3] + bZ*fZ[3]");
  t->SetAlias("bDotr_pi0","bX*Pxpi0 + bY*Pypi0 + bZ*Pzpi0");

  t->SetAlias("Epip_b","g*(Epip - bDotr_pip)");
  t->SetAlias("Epim_b","g*(Epim - bDotr_pim)");
  t->SetAlias("Epi0_b","g*(Epi0 - bDotr_pi0)");

  t->SetAlias("Pxpip_b","fX[2]+(g-1)/(b*b)*(bDotr_pip)*bX - g*Epip*bX");
  t->SetAlias("Pypip_b","fY[2]+(g-1)/(b*b)*(bDotr_pip)*bY - g*Epip*bY");
  t->SetAlias("Pzpip_b","fZ[2]+(g-1)/(b*b)*(bDotr_pip)*bZ - g*Epip*bZ");

  t->SetAlias("Pxpim_b","fX[3]+(g-1)/(b*b)*(bDotr_pim)*bX - g*Epim*bX");
  t->SetAlias("Pypim_b","fY[3]+(g-1)/(b*b)*(bDotr_pim)*bY - g*Epim*bY");
  t->SetAlias("Pzpim_b","fZ[3]+(g-1)/(b*b)*(bDotr_pim)*bZ - g*Epim*bZ");

  t->SetAlias("Pxpi0_b","Pxpi0 +(g-1)/(b*b)*(bDotr_pi0)*bX - g*Epi0*bX");
  t->SetAlias("Pypi0_b","Pypi0 +(g-1)/(b*b)*(bDotr_pi0)*bY - g*Epi0*bY");
  t->SetAlias("Pzpi0_b","Pzpi0 +(g-1)/(b*b)*(bDotr_pi0)*bZ - g*Epi0*bZ");

  t->SetAlias("crossX_b","Pypip_b*Pzpim_b - Pzpip_b*Pypim_b");
  t->SetAlias("crossY_b","Pzpip_b*Pxpim_b - Pxpip_b*Pzpim_b");
  t->SetAlias("crossZ_b","Pxpip_b*Pypim_b - Pypip_b*Pxpim_b");

  t->SetAlias("crossDot_b","crossX_b*Pxpi0_b + crossY_b*Pypi0_b + crossZ_b*Pzpi0_b");

  t->SetAlias("Pxpip","fX[2]");
  t->SetAlias("Pypip","fY[2]");
  t->SetAlias("Pzpip","fZ[2]");
  t->SetAlias("Pxpim","fX[3]");
  t->SetAlias("Pypim","fY[3]");
  t->SetAlias("Pzpim","fZ[3]");


  t->SetAlias("Mpi0pip","TMath::Sqrt((Epi0+Epip)*(Epi0+Epip) - (Pxpi0+Pxpip)*(Pxpi0+Pxpip)  - (Pypi0+Pypip)*(Pypi0+Pypip) - (Pzpi0+Pzpip)*(Pzpi0+Pzpip))");
  t->SetAlias("Mpimpip","TMath::Sqrt((Epim+Epip)*(Epim+Epip) - (Pxpim+Pxpip)*(Pxpim+Pxpip)  - (Pypim+Pypip)*(Pypim+Pypip) - (Pzpim+Pzpip)*(Pzpim+Pzpip))");
  t->SetAlias("Mpi0pim","TMath::Sqrt((Epi0+Epim)*(Epi0+Epim) - (Pxpi0+Pxpim)*(Pxpi0+Pxpim)  - (Pypi0+Pypim)*(Pypi0+Pypim) - (Pzpi0+Pzpim)*(Pzpi0+Pzpim))");


  t->SetAlias("Mpi0pip_b","TMath::Sqrt((Epi0_b+Epip_b)*(Epi0_b+Epip_b) - (Pxpi0_b+Pxpip_b)*(Pxpi0_b+Pxpip_b)  - (Pypi0_b+Pypip_b)*(Pypi0_b+Pypip_b) - (Pzpi0_b+Pzpip_b)*(Pzpi0_b+Pzpip_b))");
  t->SetAlias("Mpimpip_b","TMath::Sqrt((Epim_b+Epip_b)*(Epim_b+Epip_b) - (Pxpim_b+Pxpip_b)*(Pxpim_b+Pxpip_b)  - (Pypim_b+Pypip_b)*(Pypim_b+Pypip_b) - (Pzpim_b+Pzpip_b)*(Pzpim_b+Pzpip_b))");
  t->SetAlias("Mpi0pim_b","TMath::Sqrt((Epi0_b+Epim_b)*(Epi0_b+Epim_b) - (Pxpi0_b+Pxpim_b)*(Pxpi0_b+Pxpim_b)  - (Pypi0_b+Pypim_b)*(Pypi0_b+Pypim_b) - (Pzpi0_b+Pzpim_b)*(Pzpi0_b+Pzpim_b))");


  //  t->SetAlias("xd","Mpi0pip-0.31");
  //t->SetAlias("yd","Mpi0pip-0.39");
  //TCut dalitzCut = "xd*xd+yd*yd<0.05*0.05";

  Float_t xc=9.32886e-02,rx= 3.*1.41376e-02,yc=1.16822e-01,ry=3.*2.20606e-02;

  //  Float_t xc=3.15276e-01,rx=7.02903e-02,yc=3.44368e-01,ry=6.53304e-02;
  t->SetAlias("xd_r",Form("(Mpi0pim*Mpi0pim-%f)/%f",xc,rx));
  t->SetAlias("yd_r",Form("(Mpi0pip*Mpi0pip-%f)/%f",yc,ry));

  t->SetAlias("xd2","Mpi0pim*Mpi0pim");
  t->SetAlias("yd2","Mpi0pip*Mpi0pip");

  //  TCut dalitzCut = Form("xd_r*xd_r + yd_r*yd_r <1",rx,rx,ry,ry);
  TCut dalitzCut = "0<xd2&&xd2<0.16&&0<yd2&&yd2<0.2";

  TEllipse *el= new TEllipse(xc,yc,rx,ry);
  el->SetFillStyle(0);
  el->SetLineWidth(3);
 
  //TH2D *hx = hdz->ProjectionX();
  //TH2D *hy = hdz->ProjectionY();
  
  t->SetAlias("Tpip","Epip_b-0.13957");
  t->SetAlias("Tpim","Epim_b-0.13957");
  t->SetAlias("Tpi0","Epi0_b-mpi0");
  t->SetAlias("Qeta","Tpip+Tpim+Tpi0");
  t->SetAlias("X","sqrt(3)*(Tpip-Tpim)/Qeta");
  t->SetAlias("Y","3*Tpi0/Qeta-1");

  //////////////////
  t->SetAlias("mpi0","TMath::Sqrt(2*fE[0]*fE[1]*(1-ct))");
  t->SetAlias("mpip","TMath::Sqrt(Epip*Epip - (fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2]))");
  t->SetAlias("mpim","TMath::Sqrt(Epim*Epim - (fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3]))");

  t->SetAlias("Dm","meta-mpi0-mpip-mpim+0.135+0.13957+0.13957");
  t->SetAlias("DDm","meta0-mpi0-mpip-mpim+0.135+0.13957+0.13957");
  TCut pi0cut = "0.1<mpi0&&mpi0<0.18";
  TCut mrhocut = "0.7<mrho&&mrho<0.85";
  TCut mK0cut = "0.48<mrho&&mrho<0.51";
  TCut planecut = "-0.1<crossDot&&crossDot<0.1";
  TCut metacut = "0.52<Dm&&Dm<0.6";
  TCut momegacut = "0.74<Dm&&Dm<0.82";
  
  //t->Draw("meta>>h0",pi0cut,"");
  //t->Draw("Dm>>hm",pi0cut,"same");

  //t->Draw("meta>>h0n",pi0cut&&!mK0cut&&!mrhocut,"same");
  //t->Draw("Dm>>hmn",pi0cut&&!mK0cut&&!mrhocut,"same");

  //t->Draw("meta>>h0n",pi0cut&&planecut,"same");
  //t->Draw("Dm>>hmn",pi0cut&&planecut,"same");

  Float_t max=h0->GetMaximum();
  if (max<hm->GetMaximum())
    max=hm->GetMaximum();
  if (max<h0n->GetMaximum())
    max=h0n->GetMaximum();
  if (max<hmn->GetMaximum())
    max=hmn->GetMaximum();

  h0->SetMaximum(max*1.1);
  h0->SetLineWidth(2);
  h0->SetLineColor(kRed);
  hm->SetLineWidth(2);
  hm->SetLineColor(kBlue);
  h0n->SetLineWidth(2);
  h0n->SetLineColor(kGreen-5);
  hmn->SetLineWidth(2);
  hmn->SetLineColor(kBlack);

 
  //t->Draw("Mpi0pip*Mpi0pip:Mpi0pim*Mpi0pim>>hdz",pi0cut,"colz");

  /*  
  TBox *bx = new TBox(0,0,0.16,0.2);
  bx->SetLineWidth(3);
  bx->SetFillStyle(0);
  hdz->GetYaxis()->SetTitle("m^{2}(#pi^{0},#pi^{+})");
  hdz->GetXaxis()->SetTitle("m^{2}(#pi^{0},#pi^{-})");
  t->Draw("yd2:xd2>>hdz",pi0cut,"colz");
  bx->Draw();
  */ 

  


  using namespace RooFit;

  //observable
  RooRealVar meta("meta","M_{#eta}",0.,1.);

  //gauss(meta,m,s)
  RooRealVar m("m","mean gauss",0.55,0.53,0.57);
  RooRealVar s("s","sigma gauss",0.001,0,0.02);
  RooGaussian sig("sig","eta mass",meta,m,s);
  
 // gauss(meta,mg,sg) ;
  RooRealVar mg("mg","mean gauss bkg",0.0,-2,2.);
  RooRealVar sg("sg","sigma gauss bkg",0.04,0.,.5);
  RooGaussian gbkg("gbkg","gaussian background",meta,mg,sg);

  // Construct landau(meta,ml,sl) ;
  RooRealVar ml("ml","mean landau bkg",.5,-20.,20.);
  RooRealVar sl("sl","sigma landau bkg",0.01,0.0,1.);
  RooLandau lbkg("lbkg","landau background",meta,ml,sl);

  // Construct exponential(meta,k) (exp(k*x)) ;
  RooRealVar k("k","mass ratio",-20.,-200.,0.);
  RooExponential ebkg("ebkg","exponential background",meta,k);
  
  RooFFTConvPdf bkg_lxg("bkg_lxg","landau (X) gauss",meta,lbkg,gbkg);
  RooFFTConvPdf bkg_exg("bkg_exg","exponential (X) gauss",meta,ebkg,gbkg);
  
  RooDataSet dsM("Mdata","Mass #eta #rightarrow #pi^{0}#pi^{+}#pi^{-} ",RooArgSet(meta));
  RooPlot *pl =meta.frame();

  RooRealVar a1("a1","linear term",-2.,-20000.,2.);
  RooRealVar a2("a2","quadratic term",1,0.,20000.);  
  //RooRealVar a3("a3","cubic term",0.1,-1000.,1000.);
  //RooPolynomial bkg("bkg","background",meta,RooArgList(a1,a2,a3));
  RooPolynomial bkg("bkg","background",meta,RooArgList(a1,a2));

  //RooFormulaVar minFunc("minFunc","Minimum formula","(-a2 +TMath::Sqrt(a2*a2 - 3*a3*a1) )/(3*a3)",RooArgList(a1,a2,a3));
  RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2)); 
  RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(1),RooConst(0.15));
  RooRealVar Ns("Ns","mean",100,0.,1000000.);
  RooRealVar Nb("Nb","mean",2000.,20.,1000000.);


  // RooAddPdf model("model","sig + bkg",RooArgList(sig,bkg),RooArgList(Ns,Nb));
   RooAddPdf model("model","@0 + @1",RooArgList(sig,bkg_lxg),RooArgList(Ns,Nb));
   //RooAddPdf model("model","@0 + @1",RooArgList(sig,bkg_exg),RooArgList(Ns,Nb));
  
  RooFitResult* res;  

  t->SetMaxEntryLoop(2e6);
  Int_t nev=t->Draw("meta>>hm",dalitzCut&&pi0cut,"");
  
  Double_t *dataArr=t->GetV1();
  
  for (Long64_t i=0;i<nev; i++) {meta=dataArr[i];dsM.add(meta);}
 
  RooCmdArg range=RooFit::Range(0.45,0.75);
  RooCmdArg save=RooFit::Save();
      
//  Float_t rangeFit[2]={0.42,0.75};
  res  = model.fitTo(dsM,range,save);  
  dsM.plotOn(pl);

  model.plotOn(pl,RooFit::VisualizeError(*res,1),RooFit::FillColor(kOrange)); 
  model.plotOn(pl,RooFit::Components(bkg),RooFit::LineStyle(kDashed));
  model.plotOn(pl,RooFit::LineColor(kRed)) ;
  pl->Draw();
  
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



  //el->Draw();

 // t->Draw("Dm>>h0",pi0cut&&!mK0cut&&!mrhocut,"");
  // t->Draw("DDm>>hm",pi0cut&&!mK0cut&&!mrhocut,"same");


  /*
  TLegend *l = new TLegend(0.6,0.5,0.95,0.65);
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

}
