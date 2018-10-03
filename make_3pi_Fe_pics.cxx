{
  TCanvas c;
  c.SetGrid();
  hRz_Fe->Draw();
  hRz_Fe->GetYaxis()->SetTitle("R^{A}_{D}");
  hRz_Fe->SetTitle("Multiplicity ratio for Fe");
  c.SaveAs("eta_3pi_Fe_z.gif");
  c.SaveAs("eta_3pi_Fe_z.pdf");
  c.SaveAs("eta_3pi_Fe_z.C");

  hRpt2_Fe->Draw();
  hRpt2_Fe->SetTitle("Multiplicity ratio for Fe");
  hRpt2_Fe->GetYaxis()->SetTitle("R^{A}_{D}");
  c.SaveAs("eta_3pi_Fe_pt2.gif");
  c.SaveAs("eta_3pi_Fe_pt2.pdf");
  c.SaveAs("eta_3pi_Fe_pt2.C");

  hRq2_Fe->Draw();
  hRq2_Fe->SetTitle("Multiplicity ratio for Fe");
  hRq2_Fe->GetYaxis()->SetTitle("R^{A}_{D}");
  c.SaveAs("eta_3pi_Fe_q2.C");
  c.SaveAs("eta_3pi_Fe_q2.gif");
  c.SaveAs("eta_3pi_Fe_q2.pdf");

  hRnu_Fe->Draw();
  hRnu_Fe->SetTitle("Multiplicity ratio for Fe");
  hRnu_Fe->GetYaxis()->SetTitle("R^{A}_{D}");
  c.SaveAs("eta_3pi_Fe_nu.pdf");
  c.SaveAs("eta_3pi_Fe_nu.gif");
  c.SaveAs("eta_3pi_Fe_nu.C");
}