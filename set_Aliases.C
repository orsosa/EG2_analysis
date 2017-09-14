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
  TCanvas *c =  new TCanvas("c","c",1024,768);
  TH1F *h0 = new TH1F("h0","dm",500,0,2);
  TH1F *hm = (TH1F*) h0->Clone("hm");
  TH1F *h0n = (TH1F*) h0->Clone("h0n");
  TH1F *hmn = (TH1F*) h0->Clone("hmn");


  outdata->SetAlias("Epip","TMath::Sqrt(fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2] + 0.13957*0.13957)");
  outdata->SetAlias("Epim","TMath::Sqrt(fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3] + 0.13957*0.13957)");
  outdata->SetAlias("Eeta","Epip+Epim+fE[0]+fE[1]");
  outdata->SetAlias("Pxeta","fX[0]+fX[1]+fX[2]+fX[3]");
  outdata->SetAlias("Pyeta","fY[0]+fY[1]+fY[2]+fY[3]");
  outdata->SetAlias("Pzeta","fZ[0]+fZ[1]+fZ[2]+fZ[3]");

  outdata->SetAlias("Erho","Epip+Epim");
  outdata->SetAlias("Pxrho","fX[2]+fX[3]");
  outdata->SetAlias("Pyrho","fY[2]+fY[3]");
  outdata->SetAlias("Pzrho","fZ[2]+fZ[3]");
  outdata->SetAlias("mrho","TMath::Sqrt(Erho*Erho - Pxrho*Pxrho - Pyrho*Pyrho - Pzrho*Pzrho) ");


  outdata->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta) ");
  outdata->SetAlias("ct","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");

  outdata->SetAlias("Epi0","fE[0] + fE[1]");
  outdata->SetAlias("Pxpi0","fX[0] + fX[1]");
  outdata->SetAlias("Pypi0","fY[0] + fY[1]");
  outdata->SetAlias("Pzpi0","fZ[0] + fZ[1]");

  outdata->SetAlias("crossX","fY[2]*fZ[3] - fZ[2]*fY[3]");
  outdata->SetAlias("crossY","fZ[2]*fX[3] - fX[2]*fZ[3]");
  outdata->SetAlias("crossZ","fX[2]*fY[3] - fY[2]*fX[3]");

  outdata->SetAlias("crossDot","crossX*Pxpi0 + crossY*Pypi0 + crossZ*Pzpi0");

  /// boost.
  outdata->SetAlias("bX","Pxeta/Eeta");
  outdata->SetAlias("bY","Pyeta/Eeta");
  outdata->SetAlias("bZ","Pzeta/Eeta");
  outdata->SetAlias("b","TMath::Sqrt(bX*bX + bY*bY + bZ*bZ)");
  outdata->SetAlias("g","1.0/TMath::Sqrt(1-b*b)"); 
  outdata->SetAlias("bDotr_pip","bX*fX[2] + bY*fY[2] + bZ*fZ[2]");
  outdata->SetAlias("bDotr_pim","bX*fX[3] + bY*fY[3] + bZ*fZ[3]");
  outdata->SetAlias("bDotr_pi0","bX*Pxpi0 + bY*Pypi0 + bZ*Pzpi0");

  outdata->SetAlias("Epip_b","g*(Epip - bDotr_pip)");
  outdata->SetAlias("Epim_b","g*(Epim - bDotr_pim)");
  outdata->SetAlias("Epi0_b","g*(Epi0 - bDotr_pi0)");

  outdata->SetAlias("Pxpip_b","fX[2]+(g-1)/(b*b)*(bDotr_pip)*bX - g*Epip*bX");
  outdata->SetAlias("Pypip_b","fY[2]+(g-1)/(b*b)*(bDotr_pip)*bY - g*Epip*bY");
  outdata->SetAlias("Pzpip_b","fZ[2]+(g-1)/(b*b)*(bDotr_pip)*bZ - g*Epip*bZ");

  outdata->SetAlias("Pxpim_b","fX[3]+(g-1)/(b*b)*(bDotr_pim)*bX - g*Epim*bX");
  outdata->SetAlias("Pypim_b","fY[3]+(g-1)/(b*b)*(bDotr_pim)*bY - g*Epim*bY");
  outdata->SetAlias("Pzpim_b","fZ[3]+(g-1)/(b*b)*(bDotr_pim)*bZ - g*Epim*bZ");

  outdata->SetAlias("Pxpi0_b","Pxpi0 +(g-1)/(b*b)*(bDotr_pi0)*bX - g*Epi0*bX");
  outdata->SetAlias("Pypi0_b","Pypi0 +(g-1)/(b*b)*(bDotr_pi0)*bY - g*Epi0*bY");
  outdata->SetAlias("Pzpi0_b","Pzpi0 +(g-1)/(b*b)*(bDotr_pi0)*bZ - g*Epi0*bZ");

  outdata->SetAlias("crossX_b","Pypip_b*Pzpim_b - Pzpip_b*Pypim_b");
  outdata->SetAlias("crossY_b","Pzpip_b*Pxpim_b - Pxpip_b*Pzpim_b");
  outdata->SetAlias("crossZ_b","Pxpip_b*Pypim_b - Pypip_b*Pxpim_b");

  outdata->SetAlias("crossDot_b","crossX_b*Pxpi0_b + crossY_b*Pypi0_b + crossZ_b*Pzpi0_b");

  //////////////////
  outdata->SetAlias("mpi0","TMath::Sqrt(2*fE[0]*fE[1]*(1-ct))");
  outdata->SetAlias("mpip","TMath::Sqrt(Epip*Epip - (fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2]))");
  outdata->SetAlias("mpim","TMath::Sqrt(Epim*Epim - (fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3]))");

  outdata->SetAlias("Dm","meta-mpi0-mpip-mpim+0.135+0.140+0.140");
  outdata->SetAlias("DDm","meta-mpi0-mpip-mpim+0.135+0.140+0.140");
  TCut pi0cut = "0.1<mpi0&&mpi0<0.18";
  TCut mrhocut = "0.7<mrho&&mrho<0.85";
  TCut mK0cut = "0.48<mrho&&mrho<0.51";
  TCut planecut = "-0.1<crossDot&&crossDot<0.1";

  outdata->Draw("meta>>h0",pi0cut,"");
  outdata->Draw("Dm>>hm",pi0cut,"same");
  //  outdata->Draw("meta>>h0n",pi0cut&&!mK0cut&&!mrhocut,"same");
  //outdata->Draw("Dm>>hmn",pi0cut&&!mK0cut&&!mrhocut,"same");


  outdata->Draw("meta>>h0n",pi0cut&&planecut,"same");
  outdata->Draw("Dm>>hmn",pi0cut&&planecut,"same");

  

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

  TLegend *l = new TLegend(0.6,0.5,0.95,0.65);
  l->AddEntry(h0,"m(#pi^{+}#pi^{-}#pi^{0}(#gamma#gamma))");
  l->AddEntry(hm,"#Delta m");
  l->AddEntry(h0n,"m(#pi^{+}#pi^{-}#pi^{0}(#gamma#gamma)) no K^{0} nor #rho");
  l->AddEntry(hmn,"#Delta m no K^{0} nor #rho");
  l->Draw();
/*
  outdata->Draw("Dm>>h(500,0,2)",pi0cut,"");
  outdata->Draw("Dm>>hp(500,0,2)",pi0cut&&planecut,"same");
  outdata->Draw("Dm>>hnp(500,0,2)",pi0cut&&!planecut,"same");
*/
/*
  outdata->Draw("Pzpi0_b>>hpi0(500,-2,2)",pi0cut&&!mK0cut&&!mrhocut,"");
  outdata->Draw("Pzpip_b>>hpip(500,-2,2)",pi0cut&&!mK0cut&&!mrhocut,"same");
  outdata->Draw("Pzpim_b>>hpim(500,-2,2)",pi0cut&&!mK0cut&&!mrhocut,"same");
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
*/

}
