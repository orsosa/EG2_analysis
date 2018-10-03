void Q2_N_AC_Fe()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:51:20 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4833333,-12967.77,4.616667,116709.9);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis7[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hs_ac_px__7 = new TH1D("hs_ac_px__7","N hadrons + AC C",5, xAxis7);
   hs_ac_px__7->SetBinContent(1,85609.55);
   hs_ac_px__7->SetBinContent(2,20931.15);
   hs_ac_px__7->SetBinContent(3,14349.52);
   hs_ac_px__7->SetBinContent(4,12508.17);
   hs_ac_px__7->SetBinContent(5,11195.2);
   hs_ac_px__7->SetBinError(1,13192.52);
   hs_ac_px__7->SetBinError(2,4020.836);
   hs_ac_px__7->SetBinError(3,2526.737);
   hs_ac_px__7->SetBinError(4,3420.567);
   hs_ac_px__7->SetBinError(5,5347.273);
   hs_ac_px__7->SetEntries(88.25831);
   hs_ac_px__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hs_ac_px__7->SetLineColor(ci);
   hs_ac_px__7->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hs_ac_px__7->SetMarkerColor(ci);
   hs_ac_px__7->SetMarkerStyle(8);
   hs_ac_px__7->SetMarkerSize(3);
   hs_ac_px__7->GetXaxis()->SetTitle("Q^{2} ((GeV^{2})");
   hs_ac_px__7->GetXaxis()->SetRange(1,5);
   hs_ac_px__7->GetXaxis()->SetLabelFont(22);
   hs_ac_px__7->GetXaxis()->SetLabelSize(0.05);
   hs_ac_px__7->GetXaxis()->SetTitleSize(0.05);
   hs_ac_px__7->GetXaxis()->SetTickLength(0.01);
   hs_ac_px__7->GetXaxis()->SetTitleOffset(0.85);
   hs_ac_px__7->GetXaxis()->SetTitleFont(22);
   hs_ac_px__7->GetYaxis()->SetLabelFont(22);
   hs_ac_px__7->GetYaxis()->SetLabelSize(0.05);
   hs_ac_px__7->GetYaxis()->SetTitleSize(0.05);
   hs_ac_px__7->GetYaxis()->SetTitleFont(22);
   hs_ac_px__7->GetZaxis()->SetLabelFont(22);
   hs_ac_px__7->GetZaxis()->SetLabelSize(0.05);
   hs_ac_px__7->GetZaxis()->SetTitleSize(0.05);
   hs_ac_px__7->GetZaxis()->SetTitleFont(22);
   hs_ac_px__7->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.3231034,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons + AC C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
