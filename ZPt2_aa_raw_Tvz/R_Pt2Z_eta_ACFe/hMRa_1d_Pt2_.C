void hMRa_1d_Pt2_()
{
//=========Macro generated from canvas: c/c
//=========  (Thu Jun 21 18:45:38 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-0.1875,0.07155417,1.6875,1.537815);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[8] = {0, 0.2142857, 0.4285714, 0.6428571, 0.8571429, 1.071429, 1.285714, 1.5}; 
   
   TH1D *hMR_Fe__1 = new TH1D("hMR_Fe__1","hMR_Fe",7, xAxis1);
   hMR_Fe__1->SetBinContent(1,0.5195762);
   hMR_Fe__1->SetBinContent(2,0.6031673);
   hMR_Fe__1->SetBinContent(3,0.7474566);
   hMR_Fe__1->SetBinContent(4,0.929147);
   hMR_Fe__1->SetBinContent(5,1.081274);
   hMR_Fe__1->SetBinContent(6,0.6285684);
   hMR_Fe__1->SetBinContent(7,0.8905616);
   hMR_Fe__1->SetBinError(1,0.008948864);
   hMR_Fe__1->SetBinError(2,0.01577617);
   hMR_Fe__1->SetBinError(3,0.03115292);
   hMR_Fe__1->SetBinError(4,0.07485333);
   hMR_Fe__1->SetBinError(5,0.1194289);
   hMR_Fe__1->SetBinError(6,0.3571905);
   hMR_Fe__1->SetBinError(7,0.4447693);
   hMR_Fe__1->SetEntries(84.13094);
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
