void Pt2_N_AC_Fe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-14466.27,1.75,130196.4);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis7[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hs_ac_px__7 = new TH1D("hs_ac_px__7","N hadrons + AC C",5, xAxis7);
   hs_ac_px__7->SetBinContent(1,87852.3);
   hs_ac_px__7->SetBinContent(2,31939);
   hs_ac_px__7->SetBinContent(3,14182.85);
   hs_ac_px__7->SetBinContent(4,7977.786);
   hs_ac_px__7->SetBinContent(5,5491.732);
   hs_ac_px__7->SetBinError(1,22366.87);
   hs_ac_px__7->SetBinError(2,6177.43);
   hs_ac_px__7->SetBinError(3,2377.775);
   hs_ac_px__7->SetBinError(4,1752.661);
   hs_ac_px__7->SetBinError(5,1176.133);
   hs_ac_px__7->SetEntries(39.63134);
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
   hs_ac_px__7->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
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
