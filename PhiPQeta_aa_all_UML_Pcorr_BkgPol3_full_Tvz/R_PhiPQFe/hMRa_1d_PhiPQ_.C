void hMRa_1d_PhiPQ_()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:32:38 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-225,-0.5345587,225,1.732902);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hMR_Fe__1 = new TH1D("hMR_Fe__1","hMR_Fe",12, xAxis1);
   hMR_Fe__1->SetBinContent(1,0.6475316);
   hMR_Fe__1->SetBinContent(2,0.5459474);
   hMR_Fe__1->SetBinContent(3,0.6459914);
   hMR_Fe__1->SetBinContent(4,0.5971151);
   hMR_Fe__1->SetBinContent(5,0.6068262);
   hMR_Fe__1->SetBinContent(6,0.4063622);
   hMR_Fe__1->SetBinContent(7,0.4821785);
   hMR_Fe__1->SetBinContent(8,0.5126243);
   hMR_Fe__1->SetBinContent(9,0.6656152);
   hMR_Fe__1->SetBinContent(10,0.6238655);
   hMR_Fe__1->SetBinContent(11,0.5187624);
   hMR_Fe__1->SetBinContent(12,0.5940266);
   hMR_Fe__1->SetBinError(1,0.1186796);
   hMR_Fe__1->SetBinError(2,0.07688321);
   hMR_Fe__1->SetBinError(3,0.1205675);
   hMR_Fe__1->SetBinError(4,0.8226616);
   hMR_Fe__1->SetBinError(5,0.1248693);
   hMR_Fe__1->SetBinError(6,0.1387615);
   hMR_Fe__1->SetBinError(7,0.1317888);
   hMR_Fe__1->SetBinError(8,0.1160373);
   hMR_Fe__1->SetBinError(9,0.1542238);
   hMR_Fe__1->SetBinError(10,0.1311638);
   hMR_Fe__1->SetBinError(11,0.07428596);
   hMR_Fe__1->SetBinError(12,0.1070404);
   hMR_Fe__1->SetEntries(56.14628);
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
   hMR_Fe__1->GetXaxis()->SetTitle("PhiPQ");
   hMR_Fe__1->GetXaxis()->SetLabelFont(42);
   hMR_Fe__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleFont(42);
   hMR_Fe__1->GetYaxis()->SetTitle("R(PhiPQ)");
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
