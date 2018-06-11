{
  gStyle->SetOptStat(0);
  TCanvas c;
  c.SetLogz();
  TFile infile("eta_CD_aa_all_Pcorr_sample.root","read");
  int NQ2 = 3; Float_t Q2_e[4] ={ 1.0, 1.33, 1.77, 4.1};
  int NNu = 3; Float_t Nu_e[4] = {2.2, 3.2, 3.73, 4.25};
  int NPt2 = 6; Float_t Pt2_e[7] = {0., 0.1, 0.25, 0.4, 0.55, 0.75, 1.5};
  int NZ = 6; Float_t Z_e[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1.0};
  
  TTree *t = (TTree*)infile.Get("outdata");
  TH2F *hq2nu = new TH2F("hq2nu","Q^{2} and #nu binning",300,Nu_e[0],Nu_e[NNu],300,Q2_e[0],Q2_e[NQ2]);
  TH2F *hpt2z = new TH2F("hpt2z","Pt^{2} and Z binning",300,Z_e[0],Z_e[NZ],300,Pt2_e[0],Pt2_e[NPt2]);
  hq2nu->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
  hq2nu->GetYaxis()->SetTitle("#nu (GeV)");
  hpt2z->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
  hpt2z->GetYaxis()->SetTitle("Z (GeV)");


  t->Draw("Q2:Nu>>hq2nu","","goff");
  t->Draw("Pt2:Z>>hpt2z","","goff");
  
  TLine line;
  line.SetLineColor(kBlack);
  line.SetLineWidth(3);

  hq2nu->Draw("colz");
  for (int kq2=1; kq2<NQ2; kq2++)
  {
    for (int knu=1; knu<NNu; knu++)
    {
      line.DrawLine(Nu_e[knu],Q2_e[0],Nu_e[knu],Q2_e[NQ2]);
      line.DrawLine(Nu_e[0],Q2_e[kq2],Nu_e[NNu],Q2_e[kq2]);
    }
  }
  c.SaveAs("Q2Nu_binning.gif");
  c.SaveAs("Q2Nu_binning.C");  

  hpt2z->Draw("colz");
  for (int kpt2=1; kpt2<NPt2; kpt2++)
  {
    for (int kz=1; kz<NZ; kz++)
    {
      line.DrawLine(Z_e[kz],Pt2_e[0],Z_e[kz],Pt2_e[NPt2]);
      line.DrawLine(Z_e[0],Pt2_e[kpt2],Z_e[NZ],Pt2_e[kpt2]);
    }
  }
  c.SaveAs("Pt2Z_binning.gif");
  c.SaveAs("Pt2Z_binning.C");  
  
  
}
