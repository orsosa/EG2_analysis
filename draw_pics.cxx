{
  Int_t Nbins=5;
  TString fname= "Pt2eta_aa_all_UML_Pcorr_bkgPol3_full_Tvz/data_PbD_D/binned.root";
  gROOT->ProcessLine("#include <libgen.h>");
  TFile fin(fname);
  TString dname=dirname((char*)fname.Data());
  TCanvas *c=0;
  cout<<"ok\n";
  for (int kk=0;kk<Nbins;kk++)
  {

    int bin=kk;
    c = ( TCanvas *) fin.Get(Form("c1_%d_refit",bin));
    c->Draw();
    c->SaveAs(Form("%s/rspic/c1_%d_refit.gif",dname.Data(),bin));
    c->SaveAs(Form("%s/rspic/c1_%d_refit.pdf",dname.Data(),bin));
    
  }

}
