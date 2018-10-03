void hMRa_1d_Pt2_()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 21 18:46:30 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.1875,0.4258661,1.6875,1.100464);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 0.2142857, 0.4285714, 0.6428571, 0.8571429, 1.071429, 1.285714, 1.5}; 
   
   TH1D *hMR_Fe__1 = new TH1D("hMR_Fe__1","hMR_Fe",7, xAxis1);
   hMR_Fe__1->SetBinContent(1,0.5205263);
   hMR_Fe__1->SetBinContent(2,0.6184819);
   hMR_Fe__1->SetBinContent(3,0.7160771);
   hMR_Fe__1->SetBinContent(4,0.8264715);
   hMR_Fe__1->SetBinContent(5,0.9390733);
   hMR_Fe__1->SetBinContent(6,0.9247708);
   hMR_Fe__1->SetBinContent(7,0.839161);
   hMR_Fe__1->SetBinError(1,0.002725132);
   hMR_Fe__1->SetBinError(2,0.006615152);
   hMR_Fe__1->SetBinError(3,0.01478017);
   hMR_Fe__1->SetBinError(4,0.03011014);
   hMR_Fe__1->SetBinError(5,0.05722502);
   hMR_Fe__1->SetBinError(6,0.08253479);
   hMR_Fe__1->SetBinError(7,0.1067);
   hMR_Fe__1->SetEntries(1280.189);
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
   hMR_Fe__1->GetXaxis()->SetTitle("Pt2");
   hMR_Fe__1->GetXaxis()->SetLabelFont(42);
   hMR_Fe__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleFont(42);
   hMR_Fe__1->GetYaxis()->SetTitle("R(Pt2)");
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
