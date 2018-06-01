
{
  Int_t Nbins=54;
  TString fname= "Pt2Q2NuZpi0_aa_all_UML_Pcorr_bkgExpxG_Tvz/data_CD_C/binned.root";
  gROOT->ProcessLine("#include <libgen.h>");
  TFile fin(fname);
  TString dname=dirname((char*)fname.Data());
  TCanvas *c=0;
  for (int kk=0;kk<Nbins;kk++)
  {

    int bin=kk;
    c = ( TCanvas *) fin.Get(Form("c1_%d_refit",bin));
    c->Draw();
    c->SaveAs(Form("%s/rspic/c1_%d_refit.gif",dname.Data(),bin));
    c->SaveAs(Form("%s/rspic/c1_%d_refit.pdf",dname.Data(),bin));
    
  }

}
