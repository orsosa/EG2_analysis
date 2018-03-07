{
  TFile *f;
  for (int i=0;i<6;i++)
  {
    f=new TFile(Form("vertex_fit/C_study/Nth10/vze_theta_sector%d.root",i));
    auto c = (TCanvas *)f->Get(Form("vz_vs_th_sect%d",i));
    cout<<"C sector: "<<i<<endl;
    c->FindObject("Graph1")->Print();
  }

  for (int i=0;i<6;i++)
  {
    f=new TFile(Form("vertex_fit/Fe_study/Nth10/vze_theta_sector%d.root",i));
    auto c = (TCanvas *)f->Get(Form("vz_vs_th_sect%d",i));
    cout<<"Fe sector: "<<i<<endl;
    c->FindObject("Graph1")->Print();
  }

  for (int i=0;i<6;i++)
  {
    f=new TFile(Form("vertex_fit/Pb_study/Nth10/vze_theta_sector%d.root",i));
    auto c = (TCanvas *)f->Get(Form("vz_vs_th_sect%d",i));
    cout<<"Pb sector: "<<i<<endl;
    c->FindObject("Graph1")->Print();
  }

}
