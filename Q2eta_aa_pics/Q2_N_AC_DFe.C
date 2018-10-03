void Q2_N_AC_DFe()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:51:20 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4833333,-18268.38,4.616667,164415.4);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis8[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hl_ac_px__8 = new TH1D("hl_ac_px__8","N hadrons + AC D_C",5, xAxis8);
   hl_ac_px__8->SetBinContent(1,122019.7);
   hl_ac_px__8->SetBinContent(2,64364.65);
   hl_ac_px__8->SetBinContent(3,27391.37);
   hl_ac_px__8->SetBinContent(4,18359.69);
   hl_ac_px__8->SetBinContent(5,14571.96);
   hl_ac_px__8->SetBinError(1,17167.94);
   hl_ac_px__8->SetBinError(2,6463.68);
   hl_ac_px__8->SetBinError(3,4514.108);
   hl_ac_px__8->SetBinError(4,3325.321);
   hl_ac_px__8->SetBinError(5,12319.41);
   hl_ac_px__8->SetEntries(117.1102);
   hl_ac_px__8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hl_ac_px__8->SetLineColor(ci);
   hl_ac_px__8->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hl_ac_px__8->SetMarkerColor(ci);
   hl_ac_px__8->SetMarkerStyle(8);
   hl_ac_px__8->SetMarkerSize(3);
   hl_ac_px__8->GetXaxis()->SetTitle("Q^{2} ((GeV^{2})");
   hl_ac_px__8->GetXaxis()->SetRange(1,5);
   hl_ac_px__8->GetXaxis()->SetLabelFont(22);
   hl_ac_px__8->GetXaxis()->SetLabelSize(0.05);
   hl_ac_px__8->GetXaxis()->SetTitleSize(0.05);
   hl_ac_px__8->GetXaxis()->SetTickLength(0.01);
   hl_ac_px__8->GetXaxis()->SetTitleOffset(0.85);
   hl_ac_px__8->GetXaxis()->SetTitleFont(22);
   hl_ac_px__8->GetYaxis()->SetLabelFont(22);
   hl_ac_px__8->GetYaxis()->SetLabelSize(0.05);
   hl_ac_px__8->GetYaxis()->SetTitleSize(0.05);
   hl_ac_px__8->GetYaxis()->SetTitleFont(22);
   hl_ac_px__8->GetZaxis()->SetLabelFont(22);
   hl_ac_px__8->GetZaxis()->SetLabelSize(0.05);
   hl_ac_px__8->GetZaxis()->SetTitleSize(0.05);
   hl_ac_px__8->GetZaxis()->SetTitleFont(22);
   hl_ac_px__8->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.9409228,0.3669906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons + AC D_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
