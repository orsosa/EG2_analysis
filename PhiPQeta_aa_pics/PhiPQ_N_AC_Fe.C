void PhiPQ_N_AC_Fe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-9758.46,240,38679.14);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis7[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hs_ac_px__7 = new TH1D("hs_ac_px__7","N hadrons + AC C",12, xAxis7);
   hs_ac_px__7->SetBinContent(1,11427.81);
   hs_ac_px__7->SetBinContent(2,10162.79);
   hs_ac_px__7->SetBinContent(3,13196.39);
   hs_ac_px__7->SetBinContent(4,7927.084);
   hs_ac_px__7->SetBinContent(5,14585.83);
   hs_ac_px__7->SetBinContent(6,10827.74);
   hs_ac_px__7->SetBinContent(7,6940.189);
   hs_ac_px__7->SetBinContent(8,8900.729);
   hs_ac_px__7->SetBinContent(9,8272.291);
   hs_ac_px__7->SetBinContent(10,11107.5);
   hs_ac_px__7->SetBinContent(11,15165.29);
   hs_ac_px__7->SetBinContent(12,7712.715);
   hs_ac_px__7->SetBinError(1,2737.478);
   hs_ac_px__7->SetBinError(2,2960.033);
   hs_ac_px__7->SetBinError(3,2938.597);
   hs_ac_px__7->SetBinError(4,11084.41);
   hs_ac_px__7->SetBinError(5,17404.3);
   hs_ac_px__7->SetBinError(6,6171.664);
   hs_ac_px__7->SetBinError(7,2084.081);
   hs_ac_px__7->SetBinError(8,2785.171);
   hs_ac_px__7->SetBinError(9,1896.116);
   hs_ac_px__7->SetBinError(10,2854.684);
   hs_ac_px__7->SetBinError(11,3033.993);
   hs_ac_px__7->SetBinError(12,2226.026);
   hs_ac_px__7->SetEntries(30.24738);
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
   hs_ac_px__7->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hs_ac_px__7->GetXaxis()->SetRange(1,12);
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
