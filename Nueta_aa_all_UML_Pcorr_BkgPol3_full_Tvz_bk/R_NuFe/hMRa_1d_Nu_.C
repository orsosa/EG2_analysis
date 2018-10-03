void hMRa_1d_Nu_()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 21:53:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",0,0,1200,900);
   c->SetHighLightColor(2);
   c->Range(1.94375,0.2518965,4.50625,0.8964042);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis1[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hMR_Fe__1 = new TH1D("hMR_Fe__1","hMR_Fe",5, xAxis1);
   hMR_Fe__1->SetBinContent(1,0.4799152);
   hMR_Fe__1->SetBinContent(2,0.4082494);
   hMR_Fe__1->SetBinContent(3,0.5164782);
   hMR_Fe__1->SetBinContent(4,0.7016041);
   hMR_Fe__1->SetBinContent(5,0.4921636);
   hMR_Fe__1->SetBinError(1,0.05154239);
   hMR_Fe__1->SetBinError(2,0.06851867);
   hMR_Fe__1->SetBinError(3,0.07689352);
   hMR_Fe__1->SetBinError(4,0.1057966);
   hMR_Fe__1->SetBinError(5,0.0609758);
   hMR_Fe__1->SetEntries(239.6356);
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
   hMR_Fe__1->GetXaxis()->SetTitle("Nu");
   hMR_Fe__1->GetXaxis()->SetLabelFont(42);
   hMR_Fe__1->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe__1->GetXaxis()->SetTitleFont(42);
   hMR_Fe__1->GetYaxis()->SetTitle("R(Nu)");
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
