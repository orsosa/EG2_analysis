const int ND=3;
Double_t *kin_qnuzpt[4];
Double_t *Delta_CFePbD[4];
Double_t *Delta_CFePbD_err[4];
Long_t Nent = 0;
Double_t get_dist2(Double_t *& x0,Double_t *& x1,int nd=ND);
Int_t findClosestInd_q2nuz(Double_t *x0);
Int_t findClosestInd_nuzpt2(Double_t *x0);

int get_fact4bins_taya()
{
  float q2_e[4]= {1.0, 1.33, 1.76, 4.1 };
  float nu_e[4]= {2.2, 3.2, 3.73, 4.25 };
  float z_e[7]= {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1.};
  float pt2_e[7]= {0., 0.1, 0.25, 0.4, 0.55, 0.75, 1.5 };
  
  std::ofstream outfZ("RC_SIDIS_correctionZ.txt");
  std::ofstream outfPt2("RC_SIDIS_correctionPt2.txt");
  outfZ<<"#Q2\tNu\tZh\tRCC\tRCFe\tRCPb\tRCD2#####  RCX = (sig_rad/sig_born)_X\n";
  outfPt2<<"#Nu\tZh\tPt2\tRCC\tRCFe\tRCPb\tRCD2##### RCX = (sig_rad/sig_born)_X\n";
  TFile kinfile("../eta_CD_aa_all_Pcorr_sample.root");
  TTree *tK = (TTree*)kinfile.Get("outdata");
  TFile infile("RCFactors.root");
  TH1F hC("hC","factor C",300,0.9,1.1);
  TH1F hFe("hFe","factor Fe",300,0.9,1.1);
  TH1F hPb("hPb","factor Pb",300,0.9,1.1);
  TNtuple *tD = (TNtuple *)infile.Get("tD");
  TCut kincut;
  tD->SetAlias("Pt2","Pt*Pt");
  tD->SetAlias("Nu","Q2/2/0.93827/Xb");
  Nent = tD->GetEntries();

  TH2F hq2nu("hq2nu","Q^{2}vs #nu",500,2.2,4.3,500,1.0,4.2);
  TH2F hpt2z("hpt2z","Pt^{2} vs z",500,0,1,500,0,1.5);
  TCut mcut="0.1<M&&M<0.18";
  tD->Draw("Q2:Nu:Zh:Pt2:tC.Fact_ex:tFe.Fact_ex:tPb.Fact_ex:Fact_ex:Phi","","goffcandle");

  kin_qnuzpt[0]=new Double_t[Nent];
  kin_qnuzpt[1]=new Double_t[Nent];
  kin_qnuzpt[2]=new Double_t[Nent];
  kin_qnuzpt[3]=new Double_t[Nent];

  Delta_CFePbD[0]=new Double_t[Nent];
  Delta_CFePbD[1]=new Double_t[Nent];
  Delta_CFePbD[2]=new Double_t[Nent];
  Delta_CFePbD[3]=new Double_t[Nent];

  Delta_CFePbD_err[0]=new Double_t[Nent];
  Delta_CFePbD_err[1]=new Double_t[Nent];
  Delta_CFePbD_err[2]=new Double_t[Nent];
  Delta_CFePbD_err[3]=new Double_t[Nent];

  
  cout<<"begining initialization\n";
  
  for (int k=0;k<Nent;k++)
  {
    for (int i=0;i<4;i++)
      kin_qnuzpt[i][k]=tD->GetVal(i)[k];
    for (int i=4;i<8;i++)
    {
      Delta_CFePbD[i-4][k]=tD->GetVal(i)[k];
      //std::cout<<tD->GetVal(7)[k]<<endl;
      if ( (k%24==0)&&(k!=0) )
      {
	Double_t mean_Delta[4]={0,0,0};
	Double_t sigma_Delta[4]={0,0,0};
	for (int j=0;j<24;j++)
	{
	  mean_Delta[0]+=Delta_CFePbD[0][k-j-1];
	  sigma_Delta[0]+=Delta_CFePbD[0][k-j-1]*Delta_CFePbD[0][k-j-1];
	  mean_Delta[1]+=Delta_CFePbD[1][k-j-1];
	  sigma_Delta[1]+=Delta_CFePbD[1][k-j-1]*Delta_CFePbD[1][k-j-1];
	  mean_Delta[2]+=Delta_CFePbD[2][k-j-1];
	  sigma_Delta[2]+=Delta_CFePbD[2][k-j-1]*Delta_CFePbD[2][k-j-1];
	  mean_Delta[3]+=Delta_CFePbD[3][k-j-1];
	  sigma_Delta[3]+=Delta_CFePbD[3][k-j-1]*Delta_CFePbD[3][k-j-1];

	  
	}

	//	sigma_Delta[0]=sqrt((sigma_Delta[0]-mean_Delta[0])/23);
	mean_Delta[0]/=24;

	//sigma_Delta[1]=sqrt((sigma_Delta[1]-mean_Delta[1])/23);
	mean_Delta[1]/=24;
	
	//sigma_Delta[2]=sqrt((sigma_Delta[2]-mean_Delta[2])/23);
	mean_Delta[2]/=24;

	mean_Delta[3]/=24;

	for (int j=0;j<24;j++)
	{
	 Delta_CFePbD[0][k-j-1]= mean_Delta[0];
	 Delta_CFePbD_err[0][k-j-1]=sigma_Delta[0];

	 Delta_CFePbD[1][k-j-1]= mean_Delta[1];
	 Delta_CFePbD_err[1][k-j-1]=sigma_Delta[1];

	 Delta_CFePbD[2][k-j-1]= mean_Delta[2];
	 Delta_CFePbD_err[2][k-j-1]=sigma_Delta[2];

	 Delta_CFePbD[3][k-j-1]= mean_Delta[3];
	 Delta_CFePbD_err[3][k-j-1]=sigma_Delta[3];


	}
      }

    }

    
  }
  cout<<"all initialized\n";
  tK->SetMaxEntryLoop(1e6);
  for (int knu=0;knu<3;knu++)//nu
  {
    for (int kz=0;kz<6;kz++)//z
    {

      for (int kq2=0;kq2<3;kq2++) //q
      {
	std::cout<<"nu:z:q2 :::::"<<knu<<":"<<kz<<":"<<kq2<<"\n";
	kincut=Form("%f<Q2&&Q2<%f",q2_e[kq2],q2_e[kq2+1]);
	kincut+=Form("%f<Nu&&Nu<%f",nu_e[knu],nu_e[knu+1]);// + meaning &&
	kincut+=Form("%f<Z&&Z<%f",z_e[kz],z_e[kz+1]);
	tK->Draw("Q2:Nu>>hq2nu",mcut&&kincut);
	tK->Draw("Pt2:Z>>hpt2z",mcut&&kincut);

	Double_t x0[3]={hq2nu.GetMean(2),hq2nu.GetMean(1),hpt2z.GetMean(1)};

	Int_t ind=findClosestInd_q2nuz(x0);

	//	tD->Draw("Fact_ex/tC.Fact_ex>>hC","Entry$==ind")
	outfZ<<(q2_e[kq2]+q2_e[kq2+1])/2.<<"\t";
	outfZ<<(nu_e[knu]+nu_e[knu+1])/2.<<"\t";
	outfZ<<(z_e[kz]+z_e[kz+1])/2.<<"\t";
	outfZ<<Delta_CFePbD[0][ind]<<"\t";
	outfZ<<Delta_CFePbD[1][ind]<<"\t";
	outfZ<<Delta_CFePbD[2][ind]<<"\t";
	outfZ<<Delta_CFePbD[3][ind]<<"\t";
	outfZ<<"\n";
      }

      for (int kpt2=0;kpt2<6;kpt2++)//pt2
      {
	std::cout<<"nu:z:pt2 :::::"<<knu<<":"<<kz<<":"<<kpt2<<"\n";
	kincut=Form("%f<Z&&Z<%f",z_e[kz],z_e[kz+1]);
	kincut+=Form("%f<Nu&&Nu<%f",nu_e[knu],nu_e[knu+1]);// + meaning &&
	kincut+=Form("%f<Pt2&&Pt2<%f",pt2_e[kpt2],pt2_e[kpt2+1]);
	tK->Draw("Q2:Nu>>hq2nu",mcut&&kincut);
	tK->Draw("Pt2:Z>>hpt2z",mcut&&kincut);
	

	Double_t x0[3]={hq2nu.GetMean(1),hpt2z.GetMean(1),hpt2z.GetMean(2)};
	Int_t ind=findClosestInd_nuzpt2(x0);

	outfPt2<<(nu_e[knu]+nu_e[knu+1])/2.<<"\t";
	outfPt2<<(z_e[kz]+z_e[kz+1])/2.<<"\t";
	outfPt2<<(pt2_e[kpt2]+pt2_e[kpt2+1])/2.<<"\t";
	outfPt2<<Delta_CFePbD[0][ind]<<"\t";
	outfPt2<<Delta_CFePbD[1][ind]<<"\t";
	outfPt2<<Delta_CFePbD[2][ind]<<"\t";
	outfPt2<<Delta_CFePbD[3][ind]<<"\t";
	outfPt2<<"\n";
      }
      
    }
  }
  return 0; 
}

Double_t get_dist2(Double_t *&x0,Double_t *&x1,int nd=3)
{
  Double_t dist2=0;
  for (int k=0;k<nd;k++)
    dist2 +=(x0[k]-x1[k])*(x0[k]-x1[k]);
  return dist2;
}

Int_t findClosestInd_q2nuz(Double_t *x0)
{
  int ind=-1;
  Double_t d2=0,d2_min=1e5;
  for (int k=0;k<Nent;k++)
  {
    Double_t qnuz[3]={kin_qnuzpt[0][k],kin_qnuzpt[1][k],kin_qnuzpt[2][k]};
    Double_t *x1 = qnuz;
    d2 = get_dist2(x0,x1);
    if (d2<d2_min)
    {
      ind=k;
      d2_min=d2;
    }
  }
  return ind;
}

Int_t findClosestInd_nuzpt2(Double_t *x0)
{
  int ind=-1;
  Double_t d2=0,d2_min=1e5;
  for (int k=0;k<Nent;k++)
  {
    Double_t nuzpt[3]={kin_qnuzpt[1][k],kin_qnuzpt[2][k],kin_qnuzpt[3][k]};
    Double_t *x1 = nuzpt;
    d2 = get_dist2(x0,x1);
    if (d2<d2_min)
    {
      ind=k;
      d2_min=d2;
    }
  }
  return ind;
}
