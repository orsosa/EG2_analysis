void Q2_N_Fe()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:51:20 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4833333,-275.2367,4.616667,2477.13);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis11[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hs_px__11 = new TH1D("hs_px__11","N hadrons C",5, xAxis11);
   hs_px__11->SetBinContent(1,1891.646);
   hs_px__11->SetBinContent(2,1051.209);
   hs_px__11->SetBinContent(3,830.6306);
   hs_px__11->SetBinContent(4,854.4122);
   hs_px__11->SetBinContent(5,459.3459);
   hs_px__11->SetBinError(1,205.3951);
   hs_px__11->SetBinError(2,103.7305);
   hs_px__11->SetBinError(3,105.1795);
   hs_px__11->SetBinError(4,89.9453);
   hs_px__11->SetBinError(5,59.3078);
   hs_px__11->SetEntries(342.2496);
   hs_px__11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hs_px__11->SetLineColor(ci);
   hs_px__11->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hs_px__11->SetMarkerColor(ci);
   hs_px__11->SetMarkerStyle(8);
   hs_px__11->SetMarkerSize(3);
   hs_px__11->GetXaxis()->SetTitle("Q^{2} ((GeV^{2})");
   hs_px__11->GetXaxis()->SetRange(1,5);
   hs_px__11->GetXaxis()->SetLabelFont(22);
   hs_px__11->GetXaxis()->SetLabelSize(0.05);
   hs_px__11->GetXaxis()->SetTitleSize(0.05);
   hs_px__11->GetXaxis()->SetTickLength(0.01);
   hs_px__11->GetXaxis()->SetTitleOffset(0.85);
   hs_px__11->GetXaxis()->SetTitleFont(22);
   hs_px__11->GetYaxis()->SetLabelFont(22);
   hs_px__11->GetYaxis()->SetLabelSize(0.05);
   hs_px__11->GetYaxis()->SetTitleSize(0.05);
   hs_px__11->GetYaxis()->SetTitleFont(22);
   hs_px__11->GetZaxis()->SetLabelFont(22);
   hs_px__11->GetZaxis()->SetLabelSize(0.05);
   hs_px__11->GetZaxis()->SetTitleSize(0.05);
   hs_px__11->GetZaxis()->SetTitleFont(22);
   hs_px__11->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2337618,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
