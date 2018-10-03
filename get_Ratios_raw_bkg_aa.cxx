const int NT = 3;
int set_Aliases(TTree *&t);
int get_Ratios_raw_bkg_aa(){
  TCanvas *c = new TCanvas();
  TFile fout("ratios_eta_bkg_aa.root","recreate");
  THStack *hsz = new THStack("R_z","Multiplicity ratios Z");
  THStack *hsq2 = new THStack("R_q2","Multiplicity ratios q2");
  THStack *hspt2 = new THStack("R_pt2","Multiplicity ratios pt2");
  THStack *hsnu = new THStack("R_nu","Multiplicity ratios nu");

  Float_t bins_z[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1.0};
  TH1D *hzs = new TH1D("hzs","z solid data",6,bins_z);

  Float_t bins_pt2[7]={0., 0.1, 0.25, 0.4, 0.55, 0.75 ,1.5};
  TH1D *hpt2s = new TH1D("hpt2s","Pt^{2} solid data",6,bins_pt2);

  Float_t bins_nu[6]={2.2, 2.86, 3.22, 3.58, 3.87, 4.25};
  TH1D *hnus = new TH1D("hnus","#nu solid data",5,bins_nu);

  Float_t bins_q2[6]={1.0, 1.33, 1.66, 2.0, 2.5, 4.1};
  TH1D *hq2s = new TH1D("hq2s","Q^{2} solid data",5,bins_q2);


  TFile *fdataElec = new TFile("/home/orsosa/EG2_Analysis/Ne_eta_AllTarg_OSim_Tcut_Q2Nu.root","read");
  
  Double_t NeD,NeA;
  TH2F *heST,*heLT;
  TH1D *hR,*hST_elec_q2,*hST_elec_nu,*hLT_elec_q2,*hLT_elec_nu;
  TTree *t;


  hq2s->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
  hpt2s->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
  hzs->GetXaxis()->SetTitle("z");
  hnus->GetXaxis()->SetTitle("#nu (GeV)");

  hq2s->GetYaxis()->SetTitle("dN/dQ^{2}");
  hpt2s->GetYaxis()->SetTitle("dN/dPt^{2}");
  hzs->GetYaxis()->SetTitle("dN/dz");
  hnus->GetYaxis()->SetTitle("dN/d#nu");

  hq2s->SetMarkerStyle(kFullDotLarge);
  hpt2s->SetMarkerStyle(kFullDotLarge);
  hzs->SetMarkerStyle(kFullDotLarge);
  hnus->SetMarkerStyle(kFullDotLarge);

  hq2s->SetMarkerSize(2);
  hpt2s->SetMarkerSize(2);
  hzs->SetMarkerSize(2);
  hnus->SetMarkerSize(2);

  hq2s->SetLineWidth(2);
  hpt2s->SetLineWidth(2);
  hzs->SetLineWidth(2);
  hnus->SetLineWidth(2);

  

  TH1D *hzl =  (TH1D *)hzs->Clone("hzl");
  TH1D *hq2l =  (TH1D *)hq2s->Clone("hq2l");
  TH1D *hpt2l =  (TH1D *)hpt2s->Clone("hpt2l");
  TH1D *hnul =  (TH1D *)hnus->Clone("hnul"); 

  hq2l->SetMarkerStyle(kOpenSquareDiagonal);
  hpt2l->SetMarkerStyle(kOpenSquareDiagonal);
  hzl->SetMarkerStyle(kOpenSquareDiagonal);
  hnul->SetMarkerStyle(kOpenSquareDiagonal);

  
  TH1D *hRz =  (TH1D *)hzs->Clone("hRz");
  TH1D *hRq2 =  (TH1D *)hq2s->Clone("hRq2");
  TH1D *hRpt2 =  (TH1D *)hpt2s->Clone("hRpt2");
  TH1D *hRnu =  (TH1D *)hnus->Clone("hRnu");

  hRz->SetTitle("Multiplicity Ratio");
  hRq2->SetTitle("Multiplicity Ratio");
  hRpt2->SetTitle("Multiplicity Ratio");
  hRnu->SetTitle("Multiplicity Ratio");

  hRz->GetYaxis()->SetTitle("R^{A}_{D}");
  hRpt2->GetYaxis()->SetTitle("R^{A}_{D}");
  hRnu->GetYaxis()->SetTitle("R^{A}_{D}");
  hRq2->GetYaxis()->SetTitle("R^{A}_{D}");
  
  
  TString ST[NT]={"C","Fe","Pb"};
  Color_t col[NT]={kRed,kBlue,kBlack};
  TCut tt[NT]={"-25.33<vzec&&vzec<-24.10","-25.65<vzec&&vzec<-24.26","-25.54<vzec&&vzec<-24.36"};
  TCut tD="-31.8<vzec&&vzec<-28.40";

  TCut kin_lim="1.0<Q2&&Q2<4.1&&2.2<Nu&&Nu<4.25&&0.3<Z&&Z<1.0&&0.<Pt2&&Pt2<1.5";
  TCut meta_cut="0.3<M&&M<0.4";

    
  for (int k=0;k<NT;k++)
  {
    hsz->Print();
    TFile fin("eta_"+ST[k]+"D_aa_bk.root");
    //    gROOT->ProcessLine(".x set_Aliases_pippimpi0.C");
    t=(TTree *)fin.Get("outdata");
    fin.Add(hzs);
    fin.Add(hpt2s);
    fin.Add(hq2s);
    fin.Add(hnus);
    fin.Add(hzl);
    fin.Add(hpt2l);
    fin.Add(hq2l);
    fin.Add(hnul);

    //    fin.Print();
    //    set_Aliases(t);
    heST=(TH2F*)fdataElec->Get(Form("hNelec%s%s_a",ST[k].Data(),ST[k].Data()));
    heLT=(TH2F*)fdataElec->Get(Form("hNelec%sD_a",ST[k].Data()));
    Int_t xbin_h,ybin_h;
    xbin_h = heST->GetNbinsX();//Q2
    ybin_h = heST->GetNbinsY();//Nu
    NeA = heST->Integral(1,xbin_h,1,ybin_h);
    NeD = heLT->Integral(1,xbin_h,1,ybin_h);

    hST_elec_nu = (TH1D*)heST->ProjectionY("hST_elec_q2");
    hLT_elec_nu = (TH1D*)heLT->ProjectionY("hLT_elec_q2");
    hST_elec_q2 = (TH1D*)heST->ProjectionX("hST_elec_nu");
    hLT_elec_q2 = (TH1D*)heLT->ProjectionX("hLT_elec_nu");

    //Pt2
    t->Draw("Pt2>>hpt2s",kin_lim&&meta_cut&&tt[k]);
    t->Draw("Pt2>>hpt2l",kin_lim&&meta_cut&&tD);
    hpt2s->Sumw2(); hpt2l->Sumw2();
    std::cout<<"getting Pt2\n";
    hRpt2->Divide(hpt2s,hpt2l,NeD,NeA);
    

    //z
    t->Draw("Z>>hzs",kin_lim&&meta_cut&&tt[k]);
    t->Draw("Z>>hzl",kin_lim&&meta_cut&&tD);
    hzs->Sumw2(); hzl->Sumw2();
    std::cout<<"getting z\n";
    hRz->Divide(hzs,hzl,NeD,NeA);

    //Q2
    t->Draw("Q2>>hq2s",kin_lim&&meta_cut&&tt[k]);
    t->Draw("Q2>>hq2l",kin_lim&&meta_cut&&tD);
    hq2s->Sumw2(); hq2l->Sumw2();
    std::cout<<"getting Q2\n";
    hq2s->Divide(hST_elec_q2);
    hq2l->Divide(hLT_elec_q2);
    hRq2->Divide(hq2s,hq2l);

    //Nu
    t->Draw("Nu>>hnus",kin_lim&&meta_cut&&tt[k]);
    t->Draw("Nu>>hnul",kin_lim&&meta_cut&&tD);
    hnus->Sumw2(); hnul->Sumw2();
    std::cout<<"getting Nu\n";
    hnus->Divide(hST_elec_nu);
    hnul->Divide(hLT_elec_nu);
    hRnu->Divide(hnus,hnul);

    fout.cd();
    
    hR=(TH1D*)hRz->Clone("hRz_"+ST[k]);
    hR->SetMarkerColor(col[k]);
    hR->SetLineColor(col[k]);
    hsz->Add(hR);
    hR->Write();
    
    hR=(TH1D*)hRnu->Clone("hRnu_"+ST[k]);
    hR->SetMarkerColor(col[k]);
    hR->SetLineColor(col[k]);
    hsnu->Add(hR);
    hR->Write();
    
    hR=(TH1D*)hRpt2->Clone("hRpt2_"+ST[k]);
    hR->SetMarkerColor(col[k]);
    hR->SetLineColor(col[k]);
    hspt2->Add(hR);
    hR->Write();
    
    hR=(TH1D*)hRq2->Clone("hRq2_"+ST[k]);
    hR->SetMarkerColor(col[k]);
    hR->SetLineColor(col[k]);
    hsq2->Add(hR);
    hR->Write();

    hzs->SetMarkerColor(col[k]);
    hzs->SetLineColor(col[k]);
    hzl->SetMarkerColor(col[k]);
    hzl->SetLineColor(col[k]);
    hzl->Draw("p");
    hzs->Draw("samep");
    c->SaveAs("pic_bkg_aa/hNh_Z"+ST[k]+".gif");
    c->SaveAs("pic_bkg_aa/hNh_Z"+ST[k]+".C");

    hpt2s->SetMarkerColor(col[k]);
    hpt2s->SetLineColor(col[k]);
    hpt2l->SetMarkerColor(col[k]);
    hpt2l->SetLineColor(col[k]);
    hpt2l->Draw("p");
    hpt2s->Draw("samep");
    c->SaveAs("pic_bkg_aa/hNh_Pt2"+ST[k]+".gif");
    c->SaveAs("pic_bkg_aa/hNh_Pt2"+ST[k]+".C");

    hq2s->SetMarkerColor(col[k]);
    hq2s->SetLineColor(col[k]);
    hq2l->SetMarkerColor(col[k]);
    hq2l->SetLineColor(col[k]);
    hq2l->Draw("p");
    hq2s->Draw("samep");
    c->SaveAs("pic_bkg_aa/hNh_Q2"+ST[k]+".gif");
    c->SaveAs("pic_bkg_aa/hNh_Q2"+ST[k]+".C");

    hnus->SetMarkerColor(col[k]);
    hnus->SetLineColor(col[k]);
    hnul->SetMarkerColor(col[k]);
    hnul->SetLineColor(col[k]);
    hnul->Draw("p");
    hnus->Draw("samep");
    c->SaveAs("pic_bkg_aa/hNh_Nu"+ST[k]+".gif");
    c->SaveAs("pic_bkg_aa/hNh_Nu"+ST[k]+".C");


    fin.Remove(hzs);
    fin.Remove(hpt2s);
    fin.Remove(hq2s);
    fin.Remove(hnus);
    fin.Remove(hzl);
    fin.Remove(hpt2l);
    fin.Remove(hq2l);
    fin.Remove(hnul);
    if (k==2)
    {
      hsz->Draw("nostack");
      c->SaveAs("pic_bkg_aa/R_Z_bkg_aa.gif");
      c->SaveAs("pic_bkg_aa/R_Z_bkg_aa.C");
      
      hspt2->Draw("nostack");
      c->SaveAs("pic_bkg_aa/R_Pt2_bkg_aa.gif");
      c->SaveAs("pic_bkg_aa/R_Pt2_bkg_aa.C");
      
      hsq2->Draw("nostack");
      c->SaveAs("pic_bkg_aa/R_Q2_bkg_aa.gif");
      c->SaveAs("pic_bkg_aa/R_Q2_bkg_aa.C");
      
      hsnu->Draw("nostack");
      c->SaveAs("pic_bkg_aa/R_Nu_bkg_aa.gif");
      c->SaveAs("pic_bkg_aa/R_Nu_bkg_aa.C");
    
    }
  }

  
  fout.cd();
  hsz->Write();
  hspt2->Write();
  hsq2->Write();
  hsnu->Write();
  fout.Close();

  
  
  return 0;
}

int set_Aliases(TTree *&t)
{
 
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

  return 0;
}
