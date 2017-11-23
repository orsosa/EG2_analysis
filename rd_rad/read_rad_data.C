{
  TString pref="clas";
  TString suff="_R";
  TString  file_name="rad_data.root";
  TFile *outf = new TFile(file_name,"recreate");
  TString leaves="Ebeam:Eprime:Theta:x:Q2:Sig_Born:Sig_Born_In:Sig_Born_QE:Sig_Rad:Sig_Rad_EL:Sig_Rad_QE:Sig_Rad_DIS:C_cor";

  TNtuple *tD =new TNtuple("tD","D2 factors",leaves);
  TNtuple *tC =new TNtuple("tC","C12 factors",leaves);
  TNtuple *tFe =new TNtuple("tFe","Fe56 factors",leaves);
  TNtuple *tPb =new TNtuple("tPb","Pb208 factors",leaves);
  tD->ReadFile(pref  + "d2"   + suff + ".out");
  tC->ReadFile(pref  + "C12"  + suff + ".out");
  tFe->ReadFile(pref + "Fe56" + suff + ".out");
  tPb->ReadFile(pref + "Pb208"+ suff + ".out");

  outf->Write();


  TNtuple *tall =new TNtuple("tall","all factors",leaves);
  tall->ReadFile(pref  + "d2"   + suff + ".out");
  tall->AddFriend("tC",file_name);
  tall->AddFriend("tFe",file_name);
  tall->AddFriend("tPb",file_name);

  tall->SetAlias("rfd","Sig_Rad/Sig_Born");
  tall->SetAlias("rfPb","tPb.Sig_Rad/tPb.Sig_Born");
  tall->SetAlias("rfFe","tFe.Sig_Rad/tFe.Sig_Born");
  tall->SetAlias("rfC","tC.Sig_Rad/tC.Sig_Born");
  tall->SetAlias("Nu","Q2/(2*0.93827*x)");

  tall->Write("",TObject::kOverwrite);

  outf->Close();
}
