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

  TTree *t = outdata;
  
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

  //  t->SetAlias("meta","M-mpi0-mpip-mpim+0.135+0.13957+0.13957");
  t->SetAlias("Dm","M-mpi0-mpip-mpim+0.135+0.13957+0.13957");
  t->SetAlias("DDm","meta0-mpi0-mpip-mpim+0.135+0.13957+0.13957");
 
  //  t->SetAlias("xd","Mpi0pip-0.31");
  //t->SetAlias("yd","Mpi0pip-0.39");
  //TCut dalitzCut = "xd*xd+yd*yd<0.05*0.05";

  Float_t xc=9.32886e-02,rx= 3.*1.41376e-02,yc=1.16822e-01,ry=3.*2.20606e-02;

  //  Float_t xc=3.15276e-01,rx=7.02903e-02,yc=3.44368e-01,ry=6.53304e-02;
  t->SetAlias("xd_r",Form("(Mpi0pim*Mpi0pim-%f)/%f",xc,rx));
  t->SetAlias("yd_r",Form("(Mpi0pip*Mpi0pip-%f)/%f",yc,ry));

  t->SetAlias("xd2","Mpi0pim*Mpi0pim");
  t->SetAlias("yd2","Mpi0pip*Mpi0pip");

  t->SetAlias("Phl","sqrt(Phx*Phx + Phy*Phy + Phz*Phz)*Cospq");
  t->SetAlias("mxeta2","W*W + 0.548*0.548 + 2*sqrt(Q2+Nu)*Phl-2*Z*Nu*(0.93827+Nu)");
  t->SetAlias("mxomega2","W*W + 0.783*0.783 + 2*sqrt(Q2+Nu)*Phl-2*Z*Nu*(0.93827+Nu)");


  t->SetAlias("ma0","TMath::Sqrt(fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0])");
  t->SetAlias("ma1","TMath::Sqrt(fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1])");
  t->SetAlias("ma0_2","fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0]");
  t->SetAlias("ma1_2","fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1]");


  
  //  TCut dalitzCut = Form("xd_r*xd_r + yd_r*yd_r <1",rx,rx,ry,ry);
  //  TCut dalitzCut = "0<xd2&&xd2<0.16&&0<yd2&&yd2<0.2";
  TCut dalitzCut = "0<xd2&&xd2<0.4&&0<yd2&&yd2<0.3";

  
  TEllipse *el= new TEllipse(xc,yc,rx,ry);
  el->SetFillStyle(0);
  el->SetLineWidth(3);
 
  TCut pi0cut = "0.1<mpi0&&mpi0<0.18";
  TCut mrhocut = "0.7<mrho&&mrho<0.85";
  TCut mK0cut = "0.48<mrho&&mrho<0.51";
  TCut planecut = "-0.1<crossDot&&crossDot<0.1";
  TCut metacut = "0.52<Dm&&Dm<0.6";
  TCut momegacut = "0.74<Dm&&Dm<0.82";
  TCut ttcut = "-25.33<vzec&&vzec<-24.10";
  TCut ma0cut = "0<=ma0_2&&ma0_2<0.001";
  TCut ma1cut = "0<=ma1_2&&ma1_2<0.001";


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
  TBox *bx = new TBox(0,0,0.4,0.3);
  //  TBox *bx = new TBox(0,0,0.16,0.2);
  bx->SetLineWidth(3);
  bx->SetFillStyle(0);
  hdz->GetYaxis()->SetTitle("m^{2}(#pi^{0},#pi^{+})");
  hdz->GetXaxis()->SetTitle("m^{2}(#pi^{0},#pi^{-})");
  t->Draw("yd2:xd2>>hdz",pi0cut,"colz");
  bx->Draw();
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

   // observable
  RooRealVar meta("meta","M_{#eta}",0.3,0.8);
  // RooRealVar m("m","mean",0.5,0.6);

  //////// pi0 peak ////////////
  //  RooRealVar m0("m0","mean pi0",0.135076,0.12,0.145);
  //  RooRealVar s0("s0","sigma pi0",0.018,0.0,0.3);//rec
  //RooRealVar s0("s0","sigma pi0",0.000173711,0.0,0.001);//gsim

  //////// meta peak ////////////
  RooRealVar m0("m0","mean eta",0.55,0.5,0.6);
  RooRealVar s0("s0","sigma eta",0.02,0.015,0.025);//rec
  //  s0.setConstant();

  
   
  RooRealVar m1("m1","mean eta",0.5467,0.543,0.55);
  RooRealVar s1("s1","sigma eta",0.045,0.0,0.3);//rec
  //  RooRealVar s1("s1","sigma eta",0.000113379,0.0,0.005);//gsim
  RooGaussian peak0("peak0","pi0 mass",meta,m0,s0);
  RooGaussian peak1("peak1","eta mass",meta,m1,s1);
  //////////////////////// constructing background ///////////
  // gauss(meta,mg,sg) ;
  //  RooRealVar mg("mg","mean gauss bkg",-0.000117099,-2,2.);//gsim
  //RooRealVar sg("sg","sigma gauss bkg",0.000528172,0.,.01);//gsim
  RooRealVar mg("mg","mean gauss bkg",-2.65183e-05 ,-2,2.);//gsim
 
  RooRealVar sg("sg","sigma gauss bkg",0.000528172,0.,.2);//gsim

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

  RooRealVar a0("a0","constant term",1.,-100,1e4);
  RooRealVar a1("a1","linear term",2.3,-100,100);
  RooRealVar a2("a2","quadratic term",0.1,-2.,2.0);  
  RooRealVar a3("a3","cubic term",0.0,-100.,100.);
  //a1.setConstant();
  //a2.setConstant();
  a3.setConstant();
  //RooPolynomial bkg("bkg","background",meta,RooArgList(a1,a2,a3));
  //  RooPolynomial bkg("bkg","background",meta,RooArgList(a1,a2));
  //RooPolynomial poly("poly","poly for gsim peak",meta,RooArgList(a0,a1),0);
  RooChebychev poly("poly","poly background",meta,RooArgList(a1,a2,a3));
  //  RooChebychev poly("poly","poly for gsim peak",meta,RooArgList(a1));
  
  //RooFormulaVar minFunc("minFunc","Minimum formula","(-a2 +TMath::Sqrt(a2*a2 - 3*a3*a1) )/(3*a3)",RooArgList(a1,a2,a3));
  //  RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2)); 

  //RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(1),RooConst(0.15));
  RooRealVar Npi0("Npi0","Events on #pi^{0}",107859.,0.,1000000);
  RooRealVar Neta("Neta","Events on #eta",200.,0.,10000);
  RooRealVar Nb("Nb","Events on background",4000.,0.,100000);
  //  RooRealVar Nb("Nb","Events on background",10.,-10,100.);

  RooRealVar Nm("Nm","Events on #pi^{0} model +bkg",290116,0.,1000000);

  RooBreitWigner BWpeak("BWpeak","gsim peak",meta,m0,s0);
  // RooBreitWigner BWpeak("BWpeak","gsim peak",meta,m1,s1);
  
  RooFFTConvPdf peak_bwxg("peak_bwxg","BW (x) gauss",meta,BWpeak,gbkg);
  meta.setBins(10000,"cache");

  //Nb=526029.;Neta=20000.;

  //RooAddPdf gspeak("gspeak","peak_bwxg + pol1",RooArgList(peak_bwxg,poly),RooArgList(Neta,Nb));//eta
  //  RooAddPdf gspeak("gspeak","peak_bwxg + pol1",RooArgList(peak_bwxg,poly),RooArgList(Npi0,Nb));//pi0
  //RooAddPdf gspeak("gspeak","peak + pol1",RooArgList(BWpeak,poly),RooArgList(Neta,Nb));
  //RooAddPdf model("model","peak0 + peak1  + bkg",RooArgList(peak0,peak1,bkg_lxg),RooArgList(Npi0,Neta,Nb));

  //RooAddPdf model("model","peak0 + bkg",RooArgList(peak0,bkg_lxg),RooArgList(Npi0,Nb));
  //RooAddPdf model("model","peak0 + bkg",RooArgList(peak0,bkg_exg),RooArgList(Npi0,Nb));
  RooAddPdf model("model","peak0 + bkg",RooArgList(peak0,poly),RooArgList(Neta,Nb));

  RooAddPdf model_full("model_full","peak1 + peak0 + bkg",RooArgList(peak1,model),RooArgList(Neta,Nm));

  //s0.setConstant();
  //m0.setConstant();
  //sg.setConstant();
  //mg.setConstant();

  RooFitResult* res;  
  
  RooPlot *pl =meta.frame();

  /*
//454489.72
//455685.60
  class_for_aa reader(t);
  reader.Loop(&dsM,&meta);
  
  res=model.fitTo(dsM,RooFit::Extended(),RooFit::Range(0.05,0.4),RooFit::Save());
Nb=0.5;
  res=gspeak.fitTo(dsM,RooFit::Range(0.12,0.15),RooFit::Extended(),RooFit::Save()); //pi0

  res=peak_bwxg.fitTo(dsM,RooFit::Range(0.12,0.15),RooFit::Save()); //pi0


  dsM.plotOn(pl,RooFit::Binning(1e4,0.1,0.16));
  gspeak.plotOn(pl);
  gspeak.plotOn(pl,RooFit::Components(poly),RooFit::LineColor(kRed),RooFit::LineStyle(kDashed));
  pl->Draw();


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

    ds->plotOn(pl,RooFit::Binning(1e4,0.1,0.016));
    gspeak.plotOn(pl);
    pl->Draw();

  */
  /*
  Int_t nev=t->Draw("Dm",ttcut&&pi0cut&&"0.5<Z&&Z<0.6&&0.3<M&&M<0.8&&Pt2<1.5");
//Int_t nev=t->Draw("meta",ma0cut&&ma1cut);
  Double_t *dataArr=t->GetV1();
  for (int k =0;k<nev;k++)
  {
    if (!(k%10000)) std::cout<<(float)k/nev*100.<<std::endl;
    meta=dataArr[k];
    dsM.add(meta);
  }
  */
  /*
  class_for_aa reader(t);
  reader.Loop(&dsM,&meta);
  */
  /*
  res=model.fitTo(dsM,RooFit::Extended(),RooFit::Range(0.47,0.62),RooFit::Save());
  dsM.plotOn(pl);
  model.plotOn(pl,RooFit::VisualizeError(*res,1),RooFit::FillColor(kOrange));
  dsM.plotOn(pl);
  model.plotOn(pl,RooFit::LineColor(kRed));
  model.plotOn(pl,RooFit::Components(poly),RooFit::LineStyle(kDashed));
  pl->Draw();
  */
}
