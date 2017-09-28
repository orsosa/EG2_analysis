{
  if (gROOT->FindObject("c"))
    delete c;
  if (gROOT->FindObject("h0"))
    delete h0;
  if (gROOT->FindObject("h0n"))
    delete h0n;
  if (gROOT->FindObject("hm"))
    delete hm;
  if (gROOT->FindObject("hmn"))
    delete hmn;
  
  TCanvas *c =  new TCanvas("c","c",1024,768);
  TH1F *h0 = new TH1F("h0","dm",100,0,2);
  TH1F *hm = (TH1F*) h0->Clone("hm");
  TH1F *h0n = (TH1F*) h0->Clone("h0n");
  TH1F *hmn = (TH1F*) h0->Clone("hmn");


  outdata->SetAlias("Epip","TMath::Sqrt(fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2] + 0.13957*0.13957)");
  outdata->SetAlias("Epim","TMath::Sqrt(fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3] + 0.13957*0.13957)");
  outdata->SetAlias("Eeta","fE[0]+fE[1]+fE[2]+fE[3]+fE[4]+fE[5]");
  outdata->SetAlias("Pxeta","fX[0]+fX[1]+fX[2]+fX[3]+fX[4]+fX[5]");
  outdata->SetAlias("Pyeta","fY[0]+fY[1]+fY[2]+fY[3]+fY[4]+fY[5]");
  outdata->SetAlias("Pzeta","fZ[0]+fZ[1]+fZ[2]+fZ[3]+fZ[4]+fZ[5]");
  outdata->SetAlias("p0p1","fE[0]*fE[1]- fX[0]*fX[1]- fY[0]*fY[1]- fZ[0]*fZ[1]");
  outdata->SetAlias("p0p2","fE[0]*fE[2]- fX[0]*fX[2]- fY[0]*fY[2]- fZ[0]*fZ[2]");
  outdata->SetAlias("p0p3","fE[0]*fE[3]- fX[0]*fX[3]- fY[0]*fY[3]- fZ[0]*fZ[3]");
  outdata->SetAlias("p0p4","fE[0]*fE[4]- fX[0]*fX[4]- fY[0]*fY[4]- fZ[0]*fZ[4]");
  outdata->SetAlias("p0p5","fE[0]*fE[5]- fX[0]*fX[5]- fY[0]*fY[5]- fZ[0]*fZ[5]");
  outdata->SetAlias("p1p2","fE[1]*fE[2]- fX[1]*fX[2]- fY[1]*fY[2]- fZ[1]*fZ[2]");
  outdata->SetAlias("p1p3","fE[1]*fE[3]- fX[1]*fX[3]- fY[1]*fY[3]- fZ[1]*fZ[3]");
  outdata->SetAlias("p1p4","fE[1]*fE[4]- fX[1]*fX[4]- fY[1]*fY[4]- fZ[1]*fZ[4]");
  outdata->SetAlias("p1p5","fE[1]*fE[5]- fX[1]*fX[5]- fY[1]*fY[5]- fZ[1]*fZ[5]");
  outdata->SetAlias("p2p3","fE[2]*fE[3]- fX[2]*fX[3]- fY[2]*fY[3]- fZ[2]*fZ[3]");
  outdata->SetAlias("p2p4","fE[2]*fE[4]- fX[2]*fX[4]- fY[2]*fY[4]- fZ[2]*fZ[4]");
  outdata->SetAlias("p2p5","fE[2]*fE[5]- fX[2]*fX[5]- fY[2]*fY[5]- fZ[2]*fZ[5]");
  outdata->SetAlias("p3p4","fE[3]*fE[4]- fX[3]*fX[4]- fY[3]*fY[4]- fZ[3]*fZ[4]");
  outdata->SetAlias("p3p5","fE[3]*fE[5]- fX[3]*fX[5]- fY[3]*fY[5]- fZ[3]*fZ[5]");
  outdata->SetAlias("p4p5","fE[4]*fE[5]- fX[4]*fX[5]- fY[4]*fY[5]- fZ[4]*fZ[5]");
  
  outdata->SetAlias("meta0","(2*(p0p1 + p0p2 + p0p3 + p0p4\
 + p0p5 + p1p2 + p1p3 + p1p4 + p1p5\
 + p2p3 + p2p4 + p2p5 + p3p4 + p3p5 + p4p5) )");
  
  outdata->SetAlias("Erho","fE[0]+fE[1]");
  outdata->SetAlias("Pxrho","fX[0]+fX[1]");
  outdata->SetAlias("Pyrho","fY[0]+fY[1]");
  outdata->SetAlias("Pzrho","fZ[0]+fZ[1]");
  outdata->SetAlias("mrho","TMath::Sqrt(Erho*Erho - Pxrho*Pxrho - Pyrho*Pyrho - Pzrho*Pzrho) ");


  outdata->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta) ");
  outdata->SetAlias("ct1","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");
  outdata->SetAlias("ct2","(fX[2]*fX[3] + fY[2]*fY[3] + fZ[2]*fZ[3])/(fE[2]*fE[3])");
  outdata->SetAlias("ct3","(fX[4]*fX[5] + fY[4]*fY[5] + fZ[4]*fZ[5])/(fE[4]*fE[5])");
  outdata->SetAlias("mpi0_1","TMath::Sqrt(2*fE[0]*fE[1]*(1-ct1))");
  outdata->SetAlias("mpi0_2","TMath::Sqrt(2*fE[2]*fE[3]*(1-ct2))");
  outdata->SetAlias("mpi0_3","TMath::Sqrt(2*fE[4]*fE[5]*(1-ct3))");
  
  outdata->SetAlias("mpip","TMath::Sqrt(Epip*Epip - (fX[2]*fX[2] + fY[2]*fY[2] +  fZ[2]*fZ[2]))");
  outdata->SetAlias("mpim","TMath::Sqrt(Epim*Epim - (fX[3]*fX[3] + fY[3]*fY[3] +  fZ[3]*fZ[3]))");

  outdata->SetAlias("Dm","meta-mpi0_1-mpi0_2-mpi0_3+3*0.135");
  outdata->SetAlias("Dm0","meta0-mpi0_1-mpi0_2-mpi0_3+3*0.135");
  TCut pi0cut1 = "0.11<mpi0_1&&mpi0_1<0.16";
  TCut pi0cut2 = "0.1<mpi0_2&&mpi0_2<0.16";
  TCut pi0cut3 = "0.11<mpi0_3&&mpi0_3<0.16";
  
  TCut mrhocut = "0.7<mrho&&mrho<0.85";
  TCut mK0cut = "0.48<mrho&&mrho<0.51";


  outdata->Draw("meta>>h0",pi0cut1&&pi0cut2&&pi0cut3,"");
  outdata->Draw("meta0>>h0n",pi0cut1&&pi0cut2&&pi0cut3,"same");
  outdata->Draw("Dm>>hm",pi0cut1&&pi0cut2&&pi0cut3,"same");
  outdata->Draw("Dm0>>hmn",pi0cut1&&pi0cut2&&pi0cut3,"same");
  

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
  l->AddEntry(h0,"m(6#gamma)");
  l->AddEntry(h0n,"m(6#gamma) using Energy and angle");
  l->AddEntry(hm,"#Delta m");

  l->AddEntry(hmn,"#Delta m using Energy and angle");
  l->Draw();

}
