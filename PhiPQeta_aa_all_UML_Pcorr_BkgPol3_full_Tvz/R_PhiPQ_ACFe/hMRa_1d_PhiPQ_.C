void hMRa_1d_PhiPQ_()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:32:27 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(-225,-0.8999395,225,3.577405);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hMR_Fe__1 = new TH1D("hMR_Fe__1","hMR_Fe",12, xAxis1);
   hMR_Fe__1->SetBinContent(1,1.273915);
   hMR_Fe__1->SetBinContent(2,0.6757496);
   hMR_Fe__1->SetBinContent(3,0.8683694);
   hMR_Fe__1->SetBinContent(4,0.6201283);
   hMR_Fe__1->SetBinContent(5,1.334672);
   hMR_Fe__1->SetBinContent(6,0.5583055);
   hMR_Fe__1->SetBinContent(7,0.3509242);
   hMR_Fe__1->SetBinContent(8,0.6114415);
   hMR_Fe__1->SetBinContent(9,0.832621);
   hMR_Fe__1->SetBinContent(10,0.657215);
   hMR_Fe__1->SetBinContent(11,0.6741918);
   hMR_Fe__1->SetBinContent(12,0.7630847);
   hMR_Fe__1->SetBinError(1,0.3894237);
   hMR_Fe__1->SetBinError(2,0.2291811);
   hMR_Fe__1->SetBinError(3,0.2737027);
   hMR_Fe__1->SetBinError(4,0.8817499);
   hMR_Fe__1->SetBinError(5,1.624433);
   hMR_Fe__1->SetBinError(6,0.3866638);
   hMR_Fe__1->SetBinError(7,0.2029468);
   hMR_Fe__1->SetBinError(8,0.2553769);
   hMR_Fe__1->SetBinError(9,0.2821688);
   hMR_Fe__1->SetBinError(10,0.221962);
   hMR_Fe__1->SetBinError(11,0.1724103);
   hMR_Fe__1->SetBinError(12,0.2626622);
   hMR_Fe__1->SetEntries(20.34516);
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
