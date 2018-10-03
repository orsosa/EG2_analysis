void Z_N_AC_Fe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-8691.091,1.083333,78219.82);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis7[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hs_ac_px__7 = new TH1D("hs_ac_px__7","N hadrons + AC C",5, xAxis7);
   hs_ac_px__7->SetBinContent(1,54078.28);
   hs_ac_px__7->SetBinContent(2,37882.2);
   hs_ac_px__7->SetBinContent(3,18201.96);
   hs_ac_px__7->SetBinContent(4,11835.05);
   hs_ac_px__7->SetBinContent(5,15383.67);
   hs_ac_px__7->SetBinError(1,12139.56);
   hs_ac_px__7->SetBinError(2,7213.244);
   hs_ac_px__7->SetBinError(3,3191.379);
   hs_ac_px__7->SetBinError(4,1687.721);
   hs_ac_px__7->SetBinError(5,2396.5);
   hs_ac_px__7->SetEntries(86.50615);
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
   hs_ac_px__7->GetXaxis()->SetTitle("z");
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
