void hMRa_1d_Z_()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 11 23:31:13 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(0.4375,0.3655647,1.0625,0.9718467);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Fe__1 = new TH1D("hMR_Fe__1","hMR_Fe",5, xAxis1);
   hMR_Fe__1->SetBinContent(1,0.7202785);
   hMR_Fe__1->SetBinContent(2,0.6161564);
   hMR_Fe__1->SetBinContent(3,0.5342619);
   hMR_Fe__1->SetBinContent(4,0.655589);
   hMR_Fe__1->SetBinContent(5,0.7365609);
   hMR_Fe__1->SetBinError(1,0.1678436);
   hMR_Fe__1->SetBinError(2,0.1473057);
   hMR_Fe__1->SetBinError(3,0.08607238);
   hMR_Fe__1->SetBinError(4,0.09406433);
   hMR_Fe__1->SetBinError(5,0.1494688);
   hMR_Fe__1->SetEntries(120.3393);
   hMR_Fe__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hMR_Fe__1->SetLineColor(ci);
   hMR_Fe__1->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe__1->SetMarkerColor(ci);
   hMR_Fe__1->SetMarkerStyle(8);
   hMR_Fe__1->SetMarkerSize(3);
   hMR_Fe__1->GetXaxis()->SetTitle("Z");
   hMR_Fe__1->GetXaxis()->SetLabelFont(42);
   hMR_Fe__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleFont(42);
   hMR_Fe__1->GetYaxis()->SetTitle("R(Z)");
   hMR_Fe__1->GetYaxis()->SetLabelFont(42);
   hMR_Fe__1->GetYaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetYaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetYaxis()->SetTitleOffset(0);
   hMR_Fe__1->GetYaxis()->SetTitleFont(42);
   hMR_Fe__1->GetZaxis()->SetLabelFont(42);
   hMR_Fe__1->GetZaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetZaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetZaxis()->SetTitleFont(42);
   hMR_Fe__1->Draw("ep");
   
   TPaveText *pt = new TPaveText(0.4172575,0.9358257,0.5827425,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("hMR_Fe");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
