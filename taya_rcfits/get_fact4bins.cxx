{
  float q2_e[4]= {1.0, 1.33, 1.76, 4.1 };
  float nu_e[4]= {2.2, 3.2, 3.73, 4.25 };
  float z_e[7]= {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1.};
  float pt2_e[7]= {0., 0.1, 0.25, 0.4, 0.55, 0.75, 1.5 };
  
  std::ofstream outfZ("RC_SIDIS_correctionZ.txt");
  std::ofstream outfPt2("RC_SIDIS_correctionPt2.txt");
  outfZ<<"#Q2\tNu\tZh\tfC\tfC_e\tfFe\tfFe_e\tfPb\tfPb_e\t##### fX = DeltaD2/DeltaX; DeltaX = (sig_rad/sig_born)_X\n";
  outfPt2<<"#Q2\tNu\tPt2\tfC\tfC_e\tfFe\tfFe_e\tfPb\tfPb_e\t##### fX = DeltaD2/DeltaX; DeltaX = (sig_rad/sig_born)_X\n";
  TFile infile("RCFactors.root");
  TH1F hC("hC","factor C",300,0.9,1.1);
  TH1F hFe("hFe","factor Fe",300,0.9,1.1);
  TH1F hPb("hPb","factor Pb",300,0.9,1.1);
  TNtuple *tD = (TNtuple *)infile.Get("tD");
  TCut kincut;
  tD->SetAlias("Pt2","Pt*Pt");
  tD->SetAlias("Nu","Q2/2/0.93827/Xb");
  
  for (int kq2=0;kq2<3;kq2++) //q
  {
    for (int knu=0;knu<3;knu++)//nu
    {
      for (int kz=0;kz<6;kz++)//z
      {
	kincut=Form("%f<Q2&&Q2<%f",q2_e[kq2],q2_e[kq2+1]);
	kincut+=Form("%f<Nu&&Nu<%f",nu_e[knu],nu_e[knu+1]);// + implying &&
	kincut+=Form("%f<Zh&&Zh<%f",z_e[kz],z_e[kz+1]);
	tD->Draw("Fact_ex/tC.Fact_ex>>hC",kincut);
	tD->Draw("Fact_ex/tFe.Fact_ex>>hFe",kincut);
	tD->Draw("Fact_ex/tPb.Fact_ex>>hPb",kincut);
	outfZ<<(q2_e[kq2]+q2_e[kq2+1])/2.<<"\t";
	outfZ<<(nu_e[knu]+nu_e[knu+1])/2.<<"\t";
	outfZ<<(z_e[kz]+z_e[kz+1])/2.<<"\t";
	outfZ<<hC.GetMean()<<"\t"<<hC.GetRMS()<<"\t";
	outfZ<<hFe.GetMean()<<"\t"<<hFe.GetRMS()<<"\t";
	outfZ<<hPb.GetMean()<<"\t"<<hPb.GetRMS()<<"\t";
	outfZ<<"\n";
      }

      for (int kpt2=0;kpt2<6;kpt2++)//pt2
      {
	kincut=Form("%f<Q2&&Q2<%f",q2_e[kq2],q2_e[kq2+1]);
	kincut+=Form("%f<Nu&&Nu<%f",nu_e[knu],nu_e[knu+1]);// + implying &&
	kincut+=Form("%f<Pt2&&Pt2<%f",pt2_e[kpt2],pt2_e[kpt2+1]);
	tD->Draw("Fact_ex/tC.Fact_ex>>hC",kincut);
	tD->Draw("Fact_ex/tFe.Fact_ex>>hFe",kincut);
	tD->Draw("Fact_ex/tPb.Fact_ex>>hPb",kincut);
	outfPt2<<(q2_e[kq2]+q2_e[kq2+1])/2.<<"\t";
	outfPt2<<(nu_e[knu]+nu_e[knu+1])/2.<<"\t";
	outfPt2<<(pt2_e[kpt2]+pt2_e[kpt2+1])/2.<<"\t";
	outfPt2<<hC.GetMean()<<"\t"<<hC.GetRMS()<<"\t";
	outfPt2<<hFe.GetMean()<<"\t"<<hFe.GetRMS()<<"\t";
	outfPt2<<hPb.GetMean()<<"\t"<<hPb.GetRMS()<<"\t";
	outfPt2<<"\n";  
      }
      
    }
  }
  
}
