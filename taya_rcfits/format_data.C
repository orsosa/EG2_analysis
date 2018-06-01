int format_data (TString fname=""){
  if (fname.IsNull())
  {
    std::cout<<"file name must be given\n";
    return 0;
  }
  TCanvas *c = new TCanvas("c","c",800,600);
  TString ofname=fname;
  ofname.ReplaceAll(".txt",".root");
  TFile kinfile("../eta_CD_aa_all_Pcorr_sample.root","read");
  TH2F *hq2x = new TH2F("hq2x","Q2:Xb",300,0.,0.6,300,1.0,4.1);
  TH2F *hptz = new TH2F("hptz","Z:Pt",300,0,2,300,0.0,1.1);
  //  kinfile.Add(hPt);
  TTree *t_in = (TTree *)kinfile.Get("outdata");
  t_in->SetAlias("Xb","Q2/2./0.93827/Nu");
  kinfile.ls();
  
  TFile ofile(ofname,"recreate");
  TNtuple *t =  new TNtuple("AAcAcc_data","Fit parameters","Q2:Xb:Zh:Pt:A:AErr:Ac:AcErr:Acc:AccErr:ChiSQ");
  const float q_values[3]= {1.0, 1.5, 4.1};
  const float x_values[3]= {0.1, 0.3, 0.6}; 
  const float z_values[5]= {0.15, 0.3, 0.45, 0.65, 1.}; 
  const float pt_values[2] = {0.0, 1.0};
  Float_t q2_val,x_val,z_val,pt_val;
  
  ifstream infile;
  infile.open(fname);
  int nx,nq,nz,Nen;
  Float_t A,Ac,Acc,errA,errAc,errAcc;
  kinfile.cd();
  while(  infile>>nx>>nq>>nz>>A>>errA>>Ac>>errAc>>Acc>>errAcc)
  {
    TCut cut=Form("%f<Q2&&Q2<%f&&%f<Xb&&Xb<%f&&%f<Z&&Z<%f",q_values[nq],q_values[nq+1],x_values[nx],x_values[nx+1],z_values[nz],z_values[nz+1]);
    
    //q2_val= (q_values[nq] + q_values[nq+1]) / 2.;
    //x_val= (x_values[nx] + x_values[nx+1]) / 2.;
    //z_val= (z_values[nz] + z_values[nz+1]) / 2.;
    //pt_val= (pt_values[0] + pt_values[1]) / 2.;
    Nen = t_in->Draw("Q2:Xb>>hq2x",cut,"goff");
    Nen = t_in->Draw("Z:TMath::Sqrt(Pt2)>>hptz",cut,"goff");
    //    c->SaveAs(Form("Pt_distrib_q2_x_z_%1.2f_%1.2f_%1.2f.gif",q2_val,x_val,z_val));

    x_val = hq2x->GetMean(1);
    q2_val= hq2x->GetMean(2);
    z_val = hptz->GetMean(2); 
    pt_val= hptz->GetMean(1);
    t->Fill(q2_val,x_val,z_val,pt_val,A,errA,Ac,errAc,Acc,errAcc);
  }
  ofile.cd();
  t->Write("",TObject::kOverwrite);
  infile.close();

  return 0;
}
