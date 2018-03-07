{
  Float_t SECTOR;
  for (int K =0;K<6;K++)
  {
    Float_t SECTOR=K;
    cout<<"On sector "<<SECTOR<<endl; 
    TString pic="pic";
    TFile *fout = new TFile(Form("vze_theta_sector%.0f.root",SECTOR),"recreate");
    TNtuple *t = (TNtuple *)_file0->Get("NElectrons");
    t->Print();
    Float_t vze,sector,Pex,Pey,Pez,theta;
    t->SetBranchAddress("vze",&vze);
    t->SetBranchAddress("sector",&sector);
    t->SetBranchAddress("Pex",&Pex);
    t->SetBranchAddress("Pey",&Pey);
    t->SetBranchAddress("Pez",&Pez);
    
    TCanvas *c = new TCanvas("c","c",800,600);
    Int_t Nth=10;
    Long_t N = NElectrons->GetEntries();
    TH1F **hth = new TH1F*[Nth];
    Float_t th_edges[2]={0.3,0.95};
    Float_t th_width=(th_edges[1]-th_edges[0])/Nth;
    Float_t thll,thhl; 
    
    for (int i=1;i<=Nth;i++)
    {
      thll   = th_edges[0]+th_width*(i-1);
      thhl   = th_edges[0]+th_width*(i);
      hth[i-1] = new TH1F(Form("hth%d",i-1),Form("theta in [%f,%f]",thll,thhl),500,-40.,-15.);
      hth[i-1]->GetXaxis()->SetTitle("vze");
      hth[i-1]->GetYaxis()->SetTitle("dN/dz");
    }
    
    for (int k=0;k<N;k++)
    {
      t->GetEntry(k);
      theta=TMath::ACos(Pez/TMath::Sqrt(Pex*Pex + Pey*Pey + Pez*Pez));
      for (int i=1;i<=Nth;i++)
      {
	thll   = th_edges[0]+th_width*(i-1);
	thhl   = th_edges[0]+th_width*(i);
	if (thll<theta&&theta<thhl&&SECTOR==sector)
	{
	  hth[i-1]->Fill(vze);
	}
      }
      if(!((int)k%((int)N/100))) cout<<SECTOR<<"::::: "<<(int)k/(N/100)<<"%"<<endl;
    }
    TGraph *g1 = new TGraph(Nth);
    TGraph *g2 = new TGraph(Nth);
    TGraph *g3 = new TGraph(Nth);
    g1->SetMarkerColor(kBlue+3);
    g2->SetMarkerColor(kRed);
    g3->SetMarkerColor(kBlack);
    g1->SetMarkerStyle(kFullDotLarge);
    g2->SetMarkerStyle(kFullDotLarge);
    g3->SetMarkerStyle(kFullDotLarge);
    TFitResultPtr r;
    TF1 *func = new TF1("func","gaus",-27,-23);
    func->SetLineColor(kRed);
    c->SetLogy();
    for (int i=0;i<Nth;i++)
    {
      Float_t gm=hth[i]->GetMaximumBin()*hth[i]->GetBinWidth(0)+hth[i]->GetBinLowEdge(0);
      func->SetParameters(hth[i]->GetMaximum(),gm,0.3);
      // hth[i]->Draw("histoe");
      std::cout<<"<<<<<<<<<<<< bin "<<i<<std::endl;
      hth[i]->Sumw2();
      r=hth[i]->Fit("func","BRS","",gm-0.7,gm+0.7);
      c->SaveAs(pic+Form("/vzth%d_sect%.0f.gif",i,SECTOR));
      c->SaveAs(pic+Form("/vzth%d_sect%.0f.C",i,SECTOR));
      std::cout<<"<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n";
      theta = th_edges[0]+th_width*(i+0.5);
      g1->SetPoint(i,r->Parameter(1)-2*TMath::Abs(r->Parameter(2)),theta);
      g2->SetPoint(i,r->Parameter(1)-4*TMath::Abs(r->Parameter(2)),theta);
      g3->SetPoint(i,r->Parameter(1)-6*TMath::Abs(r->Parameter(2)),theta);
      
    }
    
    t->Draw("TMath::ACos(Pez/TMath::Sqrt(Pex*Pex + Pey*Pey + Pez*Pez)):vze>>h(500,-30,-19,50,0,1.0)",Form("sector==%f",SECTOR),"colz");
    
    g1->Draw("samep");
    g2->Draw("samep");
    g3->Draw("samep");
    c->SetLogz();
    c->SetLogy(0);
    
    c->SaveAs(Form(pic+"/vz_vs_th_sect%.0f_logz.gif",SECTOR));
    c->SaveAs(Form(pic+"/vz_vs_th_sect%.0f_logz.C",SECTOR));
    c->SetLogz(0);
    c->SaveAs(Form(pic+"/vz_vs_th_sect%.0f.gif",SECTOR));
    c->SaveAs(Form(pic+"/vz_vs_th_sect%.0f.C",SECTOR));
    for (int i=0;i<Nth;i++)hth[i]->Write("",2);
    c->Write(Form("vz_vs_th_sect%.0f",SECTOR),2);
    fout->Close();
  //  NElectrons->Draw("TMath::ACos(Pez/TMath::Sqrt(Pex*Pex + Pey*Pey + Pez*Pez)):vze>>hth(500,-40,-15,50,0,1.0)",Form("sector==%d",sec),"");
  }
}
