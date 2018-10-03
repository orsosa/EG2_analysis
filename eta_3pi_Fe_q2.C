void eta_3pi_Fe_q2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:03:57 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-0.1531475,1.75,1.378327);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   Double_t xAxis2[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hRq2_Fe__3 = new TH1D("hRq2_Fe__3","Multiplicity ratio for Fe",5, xAxis2);
   hRq2_Fe__3->SetBinContent(1,0.4769341);
   hRq2_Fe__3->SetBinContent(2,0.4544823);
   hRq2_Fe__3->SetBinContent(3,0.6118961);
   hRq2_Fe__3->SetBinContent(4,0.4759022);
   hRq2_Fe__3->SetBinContent(5,0.524549);
   hRq2_Fe__3->SetBinError(1,0.0493607);
   hRq2_Fe__3->SetBinError(2,0.0504735);
   hRq2_Fe__3->SetBinError(3,0.07705067);
   hRq2_Fe__3->SetBinError(4,0.06794948);
   hRq2_Fe__3->SetBinError(5,0.102559);
   hRq2_Fe__3->SetEntries(248.3361);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hRq2_Fe__3->SetLineColor(ci);
   hRq2_Fe__3->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hRq2_Fe__3->SetMarkerColor(ci);
   hRq2_Fe__3->SetMarkerStyle(8);
   hRq2_Fe__3->SetMarkerSize(2);
   hRq2_Fe__3->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hRq2_Fe__3->GetXaxis()->SetLabelFont(22);
   hRq2_Fe__3->GetXaxis()->SetLabelSize(0.05);
   hRq2_Fe__3->GetXaxis()->SetTitleSize(0.05);
   hRq2_Fe__3->GetXaxis()->SetTitleFont(22);
   hRq2_Fe__3->GetYaxis()->SetTitle("R^{A}_{D}");
   hRq2_Fe__3->GetYaxis()->SetLabelFont(22);
   hRq2_Fe__3->GetYaxis()->SetLabelSize(0.05);
   hRq2_Fe__3->GetYaxis()->SetTitleSize(0.05);
   hRq2_Fe__3->GetYaxis()->SetTitleFont(22);
   hRq2_Fe__3->GetZaxis()->SetLabelFont(22);
   hRq2_Fe__3->GetZaxis()->SetLabelSize(0.05);
   hRq2_Fe__3->GetZaxis()->SetTitleSize(0.05);
   hRq2_Fe__3->GetZaxis()->SetTitleFont(22);
   hRq2_Fe__3->Draw("");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
