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



  outdata->SetAlias("Eeta","fE[0]+fE[1]");
  outdata->SetAlias("Pxeta","fX[0]+fX[1]");
  outdata->SetAlias("Pyeta","fY[0]+fY[1]");
  outdata->SetAlias("Pzeta","fZ[0]+fZ[1]");

  outdata->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta)");


  outdata->SetAlias("p0p1","fE[0]*fE[1] - (fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])");

  outdata->SetAlias("meta0","TMath::Sqrt( 2*p0p1 )");

  outdata->SetAlias("ct","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");
  outdata->SetAlias("metaT","TMath::Sqrt( 2*fE[0]*fE[1]*(1-ct) )");
  outdata->SetAlias("metaT2","2*fE[0]*fE[1]*(1-ct)");

  /// boost.
  outdata->SetAlias("bX","Pxeta/Eeta");
  outdata->SetAlias("bY","Pyeta/Eeta");
  outdata->SetAlias("bZ","Pzeta/Eeta");
  outdata->SetAlias("b","TMath::Sqrt(bX*bX + bY*bY + bZ*bZ)");
  outdata->SetAlias("g","1.0/TMath::Sqrt(1-b*b)"); 
  outdata->SetAlias("bDotr_a0","bX*fX[0] + bY*fY[0] + bZ*fZ[0]");
  outdata->SetAlias("bDotr_a1","bX*fX[1] + bY*fY[1] + bZ*fZ[1]");

  outdata->SetAlias("Ea0_b","g*(fE[0] - bDotr_a0)");
  outdata->SetAlias("Ea1_b","g*(fE[1] - bDotr_a1)");

  outdata->SetAlias("Pxa0_b","fX[0]+(g-1)/(b*b)*(bDotr_a0)*bX - g*fE[0]*bX");
  outdata->SetAlias("Pya0_b","fY[0]+(g-1)/(b*b)*(bDotr_a0)*bY - g*fE[0]*bY");
  outdata->SetAlias("Pza0_b","fZ[0]+(g-1)/(b*b)*(bDotr_a0)*bZ - g*fE[0]*bZ");

  outdata->SetAlias("Pxa1_b","fX[1]+(g-1)/(b*b)*(bDotr_a1)*bX - g*fE[1]*bX");
  outdata->SetAlias("Pya1_b","fY[1]+(g-1)/(b*b)*(bDotr_a1)*bY - g*fE[1]*bY");
  outdata->SetAlias("Pza1_b","fZ[1]+(g-1)/(b*b)*(bDotr_a1)*bZ - g*fE[1]*bZ");

  outdata->SetAlias("ma0","TMath::Sqrt(fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0])");
  outdata->SetAlias("ma1","TMath::Sqrt(fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1])");

  outdata->SetAlias("ma0_2","fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0]");
  outdata->SetAlias("ma1_2","fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1]");

 
  //TH2D *hx = hdz->ProjectionX();
  //TH2D *hy = hdz->ProjectionY();
  
  //////////////////

  outdata->SetAlias("Dm","meta-ma0-ma1");
  outdata->SetAlias("Dm0","meta0-ma0-ma1");

  outdata->SetAlias("minAngle","2*TMath::ATan(0.500/(TMath::Sqrt(x*x-0.540*0.500)))*TMath::RadToDeg()");


  TCut pi0cut0 = "0.1<meta0&&meta0<0.18";
  TCut pi0cut = "0.1<meta&&meta<0.18";
  TCut ma0cut = "0<=ma0_2&&ma0_2<0.001";
  TCut ma1cut = "0<=ma1_2&&ma1_2<0.001";
  TCut ma0_2cut = "0<=ma0_2";
  TCut ma1_2cut = "0<=ma1_2";
  TCut angle_cut = "minAngle<TMath::ACos(ct)*TMath::RadToDeg()";

  /*
  outdata->Draw("meta>>hm",!pi0cut0,"");
  outdata->Draw("meta0>>hm0",!pi0cut,"same");
  outdata->Draw("Dm>>hdm",!pi0cut,"same");
  outdata->Draw("Dm0>>hdm0",pi0cut,"same");
  */

  //outdata->Draw("meta>>h0n",pi0cut&&!mK0cut&&!mrhocut,"same");
  //outdata->Draw("Dm>>hmn",pi0cut&&!mK0cut&&!mrhocut,"same");

 //outdata->Draw("meta>>h0n",pi0cut&&planecut,"same");
  //outdata->Draw("Dm>>hmn",pi0cut&&planecut,"same");

  Float_t max=hm0->GetMaximum();
  if (max<hm->GetMaximum())
    max=hm->GetMaximum();
  if (max<hd->GetMaximum())
    max=hd->GetMaximum();
  if (max<hd0->GetMaximum())
    max=hd0->GetMaximum();

  hm0->SetMaximum(max*1.1);

 

  // outdata->Draw("Dm>>h0",pi0cut&&!mK0cut&&!mrhocut,"");
  // outdata->Draw("DDm>>hm",pi0cut&&!mK0cut&&!mrhocut,"same");
  /*
  outdata->Draw("meta>>hm",ma0cut&&ma1cut);
  outdata->Draw("metaT>>hmT",ma0cut&&ma1cut);
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
  outdata->Draw("Pypi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  outdata->Draw("Pypip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  outdata->Draw("Pypim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  TLegend *l = new TLegend(0.6,0.5,0.7,0.8);
  l->AddEntry(hpi0,"#pi^{0}","lp");
  l->AddEntry(hpip,"#pi^{+}","lp");
  l->AddEntry(hpim,"#pi^{-}","lp");
  l->Draw();
  //  hpi0->GetXaxis()->SetTitle("P_{y} CM (GeV)");
  //hpi0->GetYaxis()->SetTitle("dN/dP_{y}");

  //  c->SaveAs("Py_CM_noK0rho_gsim.gif");
  //c->SaveAs("Py_CM_noK0rho_gsim.C");
  
  outdata->Draw("Pxpi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  outdata->Draw("Pxpip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  outdata->Draw("Pxpim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  hpi0->GetXaxis()->SetTitle("P_{x} CM (GeV)");
  hpi0->GetYaxis()->SetTitle("dN/dP_{x}");
  //c->SaveAs("Px_CM_noK0rho_gsim.gif");
  //c->SaveAs("Px_CM_noK0rho_gsim.C");


  outdata->Draw("Pzpi0_b>>hpi0",pi0cut&&!mrhocut&&!mK0cut);
  outdata->Draw("Pzpip_b>>hpip",pi0cut&&!mrhocut&&!mK0cut,"same");
  outdata->Draw("Pzpim_b>>hpim",pi0cut&&!mrhocut&&!mK0cut,"same");
  hpi0->GetXaxis()->SetTitle("P_{z} CM (GeV)");
  hpi0->GetYaxis()->SetTitle("dN/dP_{z}");
  //c->SaveAs("Pz_CM_noK0rho_gsim.gif");
  //c->SaveAs("Pz_CM_noK0rho_gsim.C");


*/
/*
  outdata->Draw("Dm>>h(500,0,2)",pi0cut,"");
  outdata->Draw("Dm>>hp(500,0,2)",pi0cut&&planecut,"same");
  outdata->Draw("Dm>>hnp(500,0,2)",pi0cut&&!planecut,"same");
*/


/*
  outdata->Draw("Pzpi0_b>>hpi0",pi0cut&&!mK0cut&&!mrhocut,"");
  outdata->Draw("Pzpip_b>>hpip",pi0cut&&!mK0cut&&!mrhocut,"same");
  outdata->Draw("Pzpim_b>>hpim",pi0cut&&!mK0cut&&!mrhocut,"same");
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

outdata->SetAlias("Epi0_0","fE[0] + fE[1]");
outdata->SetAlias("Epi0_1","fE[2] + fE[3]");
outdata->SetAlias("Pxpi0_0","fX[0] + fX[1]");
outdata->SetAlias("Pypi0_0","fY[0] + fY[1]");
outdata->SetAlias("Pypi0_0","f[0] + fZ[1]");
outdata->SetAlias("Pzpi0_0","fZ[0] + fZ[1]");
outdata->SetAlias("Pzpi0_1","fZ[2] + fZ[3]");
outdata->SetAlias("Pypi0_1","fY[2] + fY[3]");
outdata->SetAlias("Pxpi0_1","fX[2] + fX[3]");
outdata->SetAlias("mpi0_1","TMath::Sqrt(2*(fE[2]*fE[3] - fX[2]*fX[3] - fY[2]*fY[3] - fZ[2]*fZ[3]))");
outdata->SetAlias("mpi0_0","TMath::Sqrt(2*(fE[0]*fE[1] - fX[0]*fX[1] - fY[0]*fY[1] - fZ[0]*fZ[1]))");

*/

}
