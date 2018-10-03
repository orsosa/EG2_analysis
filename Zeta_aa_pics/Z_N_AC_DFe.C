void Z_N_AC_DFe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-15099.59,1.083333,135896.3);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis8[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hl_ac_px__8 = new TH1D("hl_ac_px__8","N hadrons + AC D_C",5, xAxis8);
   hl_ac_px__8->SetBinContent(1,93639.16);
   hl_ac_px__8->SetBinContent(2,62973.23);
   hl_ac_px__8->SetBinContent(3,37332.05);
   hl_ac_px__8->SetBinContent(4,21951);
   hl_ac_px__8->SetBinContent(5,20393.03);
   hl_ac_px__8->SetBinError(1,21405.33);
   hl_ac_px__8->SetBinError(2,12915.3);
   hl_ac_px__8->SetBinError(3,4464.45);
   hl_ac_px__8->SetBinError(4,2010.079);
   hl_ac_px__8->SetBinError(5,2647.393);
   hl_ac_px__8->SetEntries(85.11356);
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
   hl_ac_px__8->GetXaxis()->SetTitle("z");
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
