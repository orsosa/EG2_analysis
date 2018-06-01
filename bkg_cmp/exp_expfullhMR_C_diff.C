void exp_expfullhMR_C_diff()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 19 00:05:51 2018) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",38,102,800,600);
   c->Range(0.3,-8.524239,1.1,5.158281);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_C_diff__2 = new TH1D("hMR_C_diff__2","hMR_C",6, xAxis2);
   hMR_C_diff__2->SetBinContent(1,-6.659569);
   hMR_C_diff__2->SetBinContent(2,0.5500388);
   hMR_C_diff__2->SetBinContent(3,3.26879);
   hMR_C_diff__2->SetBinContent(4,-1.141317);
   hMR_C_diff__2->SetBinContent(5,-1.817029);
   hMR_C_diff__2->SetBinContent(6,-5.953295);
   hMR_C_diff__2->SetEntries(12);
   hMR_C_diff__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#666699");
   hMR_C_diff__2->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hMR_C_diff__2->SetLineColor(ci);

   ci = TColor::GetColor("#666699");
   hMR_C_diff__2->SetMarkerColor(ci);
   hMR_C_diff__2->SetMarkerStyle(8);
   hMR_C_diff__2->GetXaxis()->SetTitle("Z");
   hMR_C_diff__2->GetXaxis()->SetLabelFont(42);
   hMR_C_diff__2->GetXaxis()->SetLabelSize(0.035);
   hMR_C_diff__2->GetXaxis()->SetTitleSize(0.035);
   hMR_C_diff__2->GetXaxis()->SetTitleFont(42);
   hMR_C_diff__2->GetYaxis()->SetTitle("Difference (%)");
   hMR_C_diff__2->GetYaxis()->SetLabelFont(42);
   hMR_C_diff__2->GetYaxis()->SetLabelSize(0.035);
   hMR_C_diff__2->GetYaxis()->SetTitleSize(0.035);
   hMR_C_diff__2->GetYaxis()->SetTitleOffset(1.1);
   hMR_C_diff__2->GetYaxis()->SetTitleFont(42);
   hMR_C_diff__2->GetZaxis()->SetLabelFont(42);
   hMR_C_diff__2->GetZaxis()->SetLabelSize(0.035);
   hMR_C_diff__2->GetZaxis()->SetTitleSize(0.035);
   hMR_C_diff__2->GetZaxis()->SetTitleFont(42);
   hMR_C_diff__2->Draw("bar");
   
   TPaveText *pt = new TPaveText(0.01,0.938554,0.1452882,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("hMR_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
