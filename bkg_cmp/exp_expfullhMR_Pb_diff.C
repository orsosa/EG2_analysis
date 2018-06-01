void exp_expfullhMR_Pb_diff()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 19 00:05:51 2018) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",38,102,800,600);
   c->Range(0.3,-7.26956,1.1,0.4764661);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis3[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Pb_diff__3 = new TH1D("hMR_Pb_diff__3","hMR_Pb",6, xAxis3);
   hMR_Pb_diff__3->SetBinContent(1,-5.042762);
   hMR_Pb_diff__3->SetBinContent(2,-2.707433);
   hMR_Pb_diff__3->SetBinContent(3,-6.213922);
   hMR_Pb_diff__3->SetBinContent(4,-0.5932232);
   hMR_Pb_diff__3->SetBinContent(5,-1.792749);
   hMR_Pb_diff__3->SetBinContent(6,-4.885925);
   hMR_Pb_diff__3->SetEntries(12);
   hMR_Pb_diff__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#666699");
   hMR_Pb_diff__3->SetFillColor(ci);

   ci = TColor::GetColor("#666699");
   hMR_Pb_diff__3->SetMarkerColor(ci);
   hMR_Pb_diff__3->SetMarkerStyle(8);
   hMR_Pb_diff__3->GetXaxis()->SetTitle("Z");
   hMR_Pb_diff__3->GetXaxis()->SetLabelFont(42);
   hMR_Pb_diff__3->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb_diff__3->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb_diff__3->GetXaxis()->SetTitleFont(42);
   hMR_Pb_diff__3->GetYaxis()->SetTitle("Difference (%)");
   hMR_Pb_diff__3->GetYaxis()->SetLabelFont(42);
   hMR_Pb_diff__3->GetYaxis()->SetLabelSize(0.035);
   hMR_Pb_diff__3->GetYaxis()->SetTitleSize(0.035);
   hMR_Pb_diff__3->GetYaxis()->SetTitleOffset(1.1);
   hMR_Pb_diff__3->GetYaxis()->SetTitleFont(42);
   hMR_Pb_diff__3->GetZaxis()->SetLabelFont(42);
   hMR_Pb_diff__3->GetZaxis()->SetLabelSize(0.035);
   hMR_Pb_diff__3->GetZaxis()->SetTitleSize(0.035);
   hMR_Pb_diff__3->GetZaxis()->SetTitleFont(42);
   hMR_Pb_diff__3->Draw("bar");
   
   TPaveText *pt = new TPaveText(0.01,0.9406446,0.1653383,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("hMR_Pb");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
