{
//=========Macro generated from canvas: c/c
//=========  (Fri Mar 16 04:36:33 2018) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1200,876);
   c->SetHighLightColor(2);
   c->Range(0.325,0.4339658,1.075,0.7168603);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Fe = new TH1D("hMR_Fe","hMR_Fe",6, xAxis2);
   hMR_Fe->SetBinContent(1,0.6566769);
   hMR_Fe->SetBinContent(2,0.5929298);
   hMR_Fe->SetBinContent(3,0.5657931);
   hMR_Fe->SetBinContent(4,0.5020476);
   hMR_Fe->SetBinContent(5,0.5476813);
   hMR_Fe->SetBinContent(6,0.5629491);
   hMR_Fe->SetBinError(1,0.02111704);
   hMR_Fe->SetBinError(2,0.02674496);
   hMR_Fe->SetBinError(3,0.03118833);
   hMR_Fe->SetBinError(4,0.02952862);
   hMR_Fe->SetBinError(5,0.03098182);
   hMR_Fe->SetBinError(6,0.04752103);
   hMR_Fe->SetEntries(6);
   hMR_Fe->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hMR_Fe->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe->SetMarkerColor(ci);
   hMR_Fe->SetMarkerStyle(8);
   hMR_Fe->GetXaxis()->SetTitle("Z");
   hMR_Fe->GetXaxis()->SetLabelFont(42);
   hMR_Fe->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe->GetXaxis()->SetTitleFont(42);
   hMR_Fe->GetYaxis()->SetTitle("R(Z)");
   hMR_Fe->GetYaxis()->SetLabelFont(42);
   hMR_Fe->GetYaxis()->SetLabelSize(0.035);
   hMR_Fe->GetYaxis()->SetTitleSize(0.035);
   hMR_Fe->GetYaxis()->SetTitleOffset(1.1);
   hMR_Fe->GetYaxis()->SetTitleFont(42);
   hMR_Fe->GetZaxis()->SetLabelFont(42);
   hMR_Fe->GetZaxis()->SetLabelSize(0.035);
   hMR_Fe->GetZaxis()->SetTitleSize(0.035);
   hMR_Fe->GetZaxis()->SetTitleFont(42);
   hMR_Fe->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4172575,0.9358257,0.5827425,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("hMR_Fe");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
