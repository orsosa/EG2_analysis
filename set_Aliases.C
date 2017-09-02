{
  delete c;
  delete h0;
  delete h0n;
  delete hm
  delete hmn
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
  outdata->SetAlias("mpi0","TMath::Sqrt(2*fE[0]*fE[1]*(1-ct))");
  outdata->SetAlias("mpip","TMath::Sqrt(Epip*Epip - (fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2]))");
  outdata->SetAlias("mpim","TMath::Sqrt(Epim*Epim - (fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3]))");

  outdata->SetAlias("Dm","meta-mpi0-mpip-mpim+0.135+0.140+0.140");
  outdata->SetAlias("DDm","meta-mpi0-mpip-mpim+0.135+0.140+0.140");
  TCut pi0cut = "0.1<mpi0&&mpi0<0.18";
  TCut mrhocut = "0.7<mrho&&mrho<0.85";
  TCut mK0cut = "0.48<mrho&&mrho<0.51";


  outdata->Draw("meta>>h0",pi0cut,"");
  outdata->Draw("Dm>>hm",pi0cut,"same");
  outdata->Draw("meta>>h0n",pi0cut&&!mrhocut&&!mK0cut,"same");
  outdata->Draw("Dm>>hmn",pi0cut&&!mrhocut&&!mK0cut,"same");
  

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

}
