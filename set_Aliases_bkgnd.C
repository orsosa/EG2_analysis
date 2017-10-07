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


  outbkgnd->SetAlias("Epip","TMath::Sqrt(fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2] + 0.13957*0.13957)");
  outbkgnd->SetAlias("Epim","TMath::Sqrt(fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3] + 0.13957*0.13957)");
  outbkgnd->SetAlias("Eeta","Epip+Epim+fE[0]+fE[1]");
  outbkgnd->SetAlias("Pxeta","fX[0]+fX[1]+fX[2]+fX[3]");
  outbkgnd->SetAlias("Pyeta","fY[0]+fY[1]+fY[2]+fY[3]");
  outbkgnd->SetAlias("Pzeta","fZ[0]+fZ[1]+fZ[2]+fZ[3]");

  outbkgnd->SetAlias("Erho","Epip+Epim");
  outbkgnd->SetAlias("Pxrho","fX[2]+fX[3]");
  outbkgnd->SetAlias("Pyrho","fY[2]+fY[3]");
  outbkgnd->SetAlias("Pzrho","fZ[2]+fZ[3]");
  outbkgnd->SetAlias("mrho","TMath::Sqrt(Erho*Erho - Pxrho*Pxrho - Pyrho*Pyrho - Pzrho*Pzrho) ");


  outbkgnd->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta) ");


  outbkgnd->SetAlias("p0p1","fE[0]*fE[1] - (fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])");
  outbkgnd->SetAlias("p0p2","fE[0]*fE[2] - (fX[0]*fX[2] + fY[0]*fY[2] + fZ[0]*fZ[2])");
  outbkgnd->SetAlias("p0p3","fE[0]*fE[3] - (fX[0]*fX[3] + fY[0]*fY[3] + fZ[0]*fZ[3])");
  outbkgnd->SetAlias("p1p2","fE[1]*fE[2] - (fX[1]*fX[2] + fY[1]*fY[2] + fZ[1]*fZ[2])");
  outbkgnd->SetAlias("p1p3","fE[1]*fE[3] - (fX[1]*fX[3] + fY[1]*fY[3] + fZ[1]*fZ[3])");
  outbkgnd->SetAlias("p2p3","fE[2]*fE[3] - (fX[2]*fX[3] + fY[2]*fY[3] + fZ[2]*fZ[3])");

  outbkgnd->SetAlias("meta0","TMath::Sqrt( 2*0.13957*0.13957  + 2*(p0p1 + p0p2 + p0p3 + p1p2 + p1p3 + p2p3) )");



  outbkgnd->SetAlias("ct","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");

  outbkgnd->SetAlias("Epi0","fE[0] + fE[1]");
  outbkgnd->SetAlias("Pxpi0","fX[0] + fX[1]");
  outbkgnd->SetAlias("Pypi0","fY[0] + fY[1]");
  outbkgnd->SetAlias("Pzpi0","fZ[0] + fZ[1]");

  outbkgnd->SetAlias("crossX","fY[2]*fZ[3] - fZ[2]*fY[3]");
  outbkgnd->SetAlias("crossY","fZ[2]*fX[3] - fX[2]*fZ[3]");
  outbkgnd->SetAlias("crossZ","fX[2]*fY[3] - fY[2]*fX[3]");

  outbkgnd->SetAlias("crossDot","crossX*Pxpi0 + crossY*Pypi0 + crossZ*Pzpi0");

  /// boost.
  outbkgnd->SetAlias("bX","Pxeta/Eeta");
  outbkgnd->SetAlias("bY","Pyeta/Eeta");
  outbkgnd->SetAlias("bZ","Pzeta/Eeta");
  outbkgnd->SetAlias("b","TMath::Sqrt(bX*bX + bY*bY + bZ*bZ)");
  outbkgnd->SetAlias("g","1.0/TMath::Sqrt(1-b*b)"); 
  outbkgnd->SetAlias("bDotr_pip","bX*fX[2] + bY*fY[2] + bZ*fZ[2]");
  outbkgnd->SetAlias("bDotr_pim","bX*fX[3] + bY*fY[3] + bZ*fZ[3]");
  outbkgnd->SetAlias("bDotr_pi0","bX*Pxpi0 + bY*Pypi0 + bZ*Pzpi0");

  outbkgnd->SetAlias("Epip_b","g*(Epip - bDotr_pip)");
  outbkgnd->SetAlias("Epim_b","g*(Epim - bDotr_pim)");
  outbkgnd->SetAlias("Epi0_b","g*(Epi0 - bDotr_pi0)");

  outbkgnd->SetAlias("Pxpip_b","fX[2]+(g-1)/(b*b)*(bDotr_pip)*bX - g*Epip*bX");
  outbkgnd->SetAlias("Pypip_b","fY[2]+(g-1)/(b*b)*(bDotr_pip)*bY - g*Epip*bY");
  outbkgnd->SetAlias("Pzpip_b","fZ[2]+(g-1)/(b*b)*(bDotr_pip)*bZ - g*Epip*bZ");

  outbkgnd->SetAlias("Pxpim_b","fX[3]+(g-1)/(b*b)*(bDotr_pim)*bX - g*Epim*bX");
  outbkgnd->SetAlias("Pypim_b","fY[3]+(g-1)/(b*b)*(bDotr_pim)*bY - g*Epim*bY");
  outbkgnd->SetAlias("Pzpim_b","fZ[3]+(g-1)/(b*b)*(bDotr_pim)*bZ - g*Epim*bZ");

  outbkgnd->SetAlias("Pxpi0_b","Pxpi0 +(g-1)/(b*b)*(bDotr_pi0)*bX - g*Epi0*bX");
  outbkgnd->SetAlias("Pypi0_b","Pypi0 +(g-1)/(b*b)*(bDotr_pi0)*bY - g*Epi0*bY");
  outbkgnd->SetAlias("Pzpi0_b","Pzpi0 +(g-1)/(b*b)*(bDotr_pi0)*bZ - g*Epi0*bZ");

  outbkgnd->SetAlias("crossX_b","Pypip_b*Pzpim_b - Pzpip_b*Pypim_b");
  outbkgnd->SetAlias("crossY_b","Pzpip_b*Pxpim_b - Pxpip_b*Pzpim_b");
  outbkgnd->SetAlias("crossZ_b","Pxpip_b*Pypim_b - Pypip_b*Pxpim_b");

  outbkgnd->SetAlias("crossDot_b","crossX_b*Pxpi0_b + crossY_b*Pypi0_b + crossZ_b*Pzpi0_b");

  outbkgnd->SetAlias("Pxpip","fX[2]");
  outbkgnd->SetAlias("Pypip","fY[2]");
  outbkgnd->SetAlias("Pzpip","fZ[2]");
  outbkgnd->SetAlias("Pxpim","fX[3]");
  outbkgnd->SetAlias("Pypim","fY[3]");
  outbkgnd->SetAlias("Pzpim","fZ[3]");


  outbkgnd->SetAlias("Mpi0pip","TMath::Sqrt((Epi0+Epip)*(Epi0+Epip) - (Pxpi0+Pxpip)*(Pxpi0+Pxpip)  - (Pypi0+Pypip)*(Pypi0+Pypip) - (Pzpi0+Pzpip)*(Pzpi0+Pzpip))");
  outbkgnd->SetAlias("Mpimpip","TMath::Sqrt((Epim+Epip)*(Epim+Epip) - (Pxpim+Pxpip)*(Pxpim+Pxpip)  - (Pypim+Pypip)*(Pypim+Pypip) - (Pzpim+Pzpip)*(Pzpim+Pzpip))");
  outbkgnd->SetAlias("Mpi0pim","TMath::Sqrt((Epi0+Epim)*(Epi0+Epim) - (Pxpi0+Pxpim)*(Pxpi0+Pxpim)  - (Pypi0+Pypim)*(Pypi0+Pypim) - (Pzpi0+Pzpim)*(Pzpi0+Pzpim))");



  outbkgnd->SetAlias("Mpi0pip_b","TMath::Sqrt((Epi0_b+Epip_b)*(Epi0_b+Epip_b) - (Pxpi0_b+Pxpip_b)*(Pxpi0_b+Pxpip_b)  - (Pypi0_b+Pypip_b)*(Pypi0_b+Pypip_b) - (Pzpi0_b+Pzpip_b)*(Pzpi0_b+Pzpip_b))");
  outbkgnd->SetAlias("Mpimpip_b","TMath::Sqrt((Epim_b+Epip_b)*(Epim_b+Epip_b) - (Pxpim_b+Pxpip_b)*(Pxpim_b+Pxpip_b)  - (Pypim_b+Pypip_b)*(Pypim_b+Pypip_b) - (Pzpim_b+Pzpip_b)*(Pzpim_b+Pzpip_b))");
  outbkgnd->SetAlias("Mpi0pim_b","TMath::Sqrt((Epi0_b+Epim_b)*(Epi0_b+Epim_b) - (Pxpi0_b+Pxpim_b)*(Pxpi0_b+Pxpim_b)  - (Pypi0_b+Pypim_b)*(Pypi0_b+Pypim_b) - (Pzpi0_b+Pzpim_b)*(Pzpi0_b+Pzpim_b))");


  //  outbkgnd->SetAlias("xd","Mpi0pip-0.31");
  //outbkgnd->SetAlias("yd","Mpi0pip-0.39");
  //TCut dalitzCut = "xd*xd+yd*yd<0.05*0.05";

  Float_t xc=9.32886e-02,rx= 3.*1.41376e-02,yc=1.16822e-01,ry=3.*2.20606e-02;

  //  Float_t xc=3.15276e-01,rx=7.02903e-02,yc=3.44368e-01,ry=6.53304e-02;
  outbkgnd->SetAlias("xd_r",Form("(Mpi0pim*Mpi0pim-%f)/%f",xc,rx));
  outbkgnd->SetAlias("yd_r",Form("(Mpi0pip*Mpi0pip-%f)/%f",yc,ry));

  outbkgnd->SetAlias("xd2","Mpi0pim*Mpi0pim");
  outbkgnd->SetAlias("yd2","Mpi0pip*Mpi0pip");

  //  TCut dalitzCut = Form("xd_r*xd_r + yd_r*yd_r <1",rx,rx,ry,ry);
  TCut dalitzCut = "0<xd2&&xd2<0.16&&0<yd2&&yd2<0.2";

  TEllipse *el= new TEllipse(xc,yc,rx,ry);
  el->SetFillStyle(0);
  el->SetLineWidth(3);
 
  //TH2D *hx = hdz->ProjectionX();
  //TH2D *hy = hdz->ProjectionY();
  
  outbkgnd->SetAlias("Tpip","Epip_b-0.13957");
  outbkgnd->SetAlias("Tpim","Epim_b-0.13957");
  outbkgnd->SetAlias("Tpi0","Epi0_b-mpi0");
  outbkgnd->SetAlias("Qeta","Tpip+Tpim+Tpi0");
  outbkgnd->SetAlias("X","sqrt(3)*(Tpip-Tpim)/Qeta");
  outbkgnd->SetAlias("Y","3*Tpi0/Qeta-1");

  //////////////////
  outbkgnd->SetAlias("mpi0","TMath::Sqrt(2*fE[0]*fE[1]*(1-ct))");
  outbkgnd->SetAlias("mpip","TMath::Sqrt(Epip*Epip - (fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2]))");
  outbkgnd->SetAlias("mpim","TMath::Sqrt(Epim*Epim - (fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3]))");

  outbkgnd->SetAlias("Dm","meta-mpi0-mpip-mpim+0.135+0.13957+0.13957");
  outbkgnd->SetAlias("DDm","meta0-mpi0-mpip-mpim+0.135+0.13957+0.13957");
  TCut pi0cut = "0.1<mpi0&&mpi0<0.18";
  TCut mrhocut = "0.7<mrho&&mrho<0.85";
  TCut mK0cut = "0.48<mrho&&mrho<0.51";
  TCut planecut = "-0.1<crossDot&&crossDot<0.1";
  TCut metacut = "0.52<Dm&&Dm<0.6";
  TCut momegacut = "0.74<Dm&&Dm<0.82";
  
  //outbkgnd->Draw("meta>>h0",pi0cut,"");
  //outbkgnd->Draw("Dm>>hm",pi0cut,"same");

  //outbkgnd->Draw("meta>>h0n",pi0cut&&!mK0cut&&!mrhocut,"same");
  //outbkgnd->Draw("Dm>>hmn",pi0cut&&!mK0cut&&!mrhocut,"same");

  //outbkgnd->Draw("meta>>h0n",pi0cut&&planecut,"same");
  //outbkgnd->Draw("Dm>>hmn",pi0cut&&planecut,"same");

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

 
  //outbkgnd->Draw("Mpi0pip*Mpi0pip:Mpi0pim*Mpi0pim>>hdz",pi0cut,"colz");


  TBox *bx = new TBox(0,0,0.16,0.2);
  bx->SetLineWidth(3);
  bx->SetFillStyle(0);
  hdz->GetYaxis()->SetTitle("m^{2}(#pi^{0},#pi^{+})");
  hdz->GetXaxis()->SetTitle("m^{2}(#pi^{0},#pi^{-})");
  outbkgnd->Draw("yd2:xd2>>hdz",pi0cut,"colz");
  bx->Draw();

  //el->Draw();

 // outbkgnd->Draw("Dm>>h0",pi0cut&&!mK0cut&&!mrhocut,"");
  // outbkgnd->Draw("DDm>>hm",pi0cut&&!mK0cut&&!mrhocut,"same");


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
  outbkgnd->Draw("Pypi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  outbkgnd->Draw("Pypip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  outbkgnd->Draw("Pypim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  TLegend *l = new TLegend(0.6,0.5,0.7,0.8);
  l->AddEntry(hpi0,"#pi^{0}","lp");
  l->AddEntry(hpip,"#pi^{+}","lp");
  l->AddEntry(hpim,"#pi^{-}","lp");
  l->Draw();
  //  hpi0->GetXaxis()->SetTitle("P_{y} CM (GeV)");
  //hpi0->GetYaxis()->SetTitle("dN/dP_{y}");

  //  c->SaveAs("Py_CM_noK0rho_gsim.gif");
  //c->SaveAs("Py_CM_noK0rho_gsim.C");
  
  outbkgnd->Draw("Pxpi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  outbkgnd->Draw("Pxpip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  outbkgnd->Draw("Pxpim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  hpi0->GetXaxis()->SetTitle("P_{x} CM (GeV)");
  hpi0->GetYaxis()->SetTitle("dN/dP_{x}");
  //c->SaveAs("Px_CM_noK0rho_gsim.gif");
  //c->SaveAs("Px_CM_noK0rho_gsim.C");


  outbkgnd->Draw("Pzpi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  outbkgnd->Draw("Pzpip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  outbkgnd->Draw("Pzpim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  hpi0->GetXaxis()->SetTitle("P_{z} CM (GeV)");
  hpi0->GetYaxis()->SetTitle("dN/dP_{z}");
  //c->SaveAs("Pz_CM_noK0rho_gsim.gif");
  //c->SaveAs("Pz_CM_noK0rho_gsim.C");


*/
/*
  outbkgnd->Draw("Dm>>h(500,0,2)",pi0cut,"");
  outbkgnd->Draw("Dm>>hp(500,0,2)",pi0cut&&planecut,"same");
  outbkgnd->Draw("Dm>>hnp(500,0,2)",pi0cut&&!planecut,"same");
*/


/*
  outbkgnd->Draw("Pzpi0_b>>hpi0",pi0cut&&!mK0cut&&!mrhocut,"");
  outbkgnd->Draw("Pzpip_b>>hpip",pi0cut&&!mK0cut&&!mrhocut,"same");
  outbkgnd->Draw("Pzpim_b>>hpim",pi0cut&&!mK0cut&&!mrhocut,"same");
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

outbkgnd->SetAlias("Epi0_0","fE[0] + fE[1]");
outbkgnd->SetAlias("Epi0_1","fE[2] + fE[3]");
outbkgnd->SetAlias("Pxpi0_0","fX[0] + fX[1]");
outbkgnd->SetAlias("Pypi0_0","fY[0] + fY[1]");
outbkgnd->SetAlias("Pypi0_0","f[0] + fZ[1]");
outbkgnd->SetAlias("Pzpi0_0","fZ[0] + fZ[1]");
outbkgnd->SetAlias("Pzpi0_1","fZ[2] + fZ[3]");
outbkgnd->SetAlias("Pypi0_1","fY[2] + fY[3]");
outbkgnd->SetAlias("Pxpi0_1","fX[2] + fX[3]");
outbkgnd->SetAlias("mpi0_1","TMath::Sqrt(2*(fE[2]*fE[3] - fX[2]*fX[3] - fY[2]*fY[3] - fZ[2]*fZ[3]))");
outbkgnd->SetAlias("mpi0_0","TMath::Sqrt(2*(fE[0]*fE[1] - fX[0]*fX[1] - fY[0]*fY[1] - fZ[0]*fZ[1]))");

*/

}
