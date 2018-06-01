void exp_expfull()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Mar 19 00:05:51 2018) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",38,102,800,600);
   c->Range(0.3,-12.35726,1.1,5.186617);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("");
   Double_t xAxis4[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_1 = new TH1F("_stack_1","",6, xAxis4);
   _stack_1->SetMinimum(-10.60287);
   _stack_1->SetMaximum(3.43223);
   _stack_1->SetDirectory(0);
   _stack_1->SetStats(0);
   _stack_1->SetLineWidth(2);
   _stack_1->GetXaxis()->SetLabelFont(22);
   _stack_1->GetXaxis()->SetLabelSize(0.03);
   _stack_1->GetXaxis()->SetTitleSize(0.035);
   _stack_1->GetXaxis()->SetTitleFont(22);
   _stack_1->GetYaxis()->SetLabelFont(22);
   _stack_1->GetYaxis()->SetLabelSize(0.03);
   _stack_1->GetYaxis()->SetTitleSize(0.035);
   _stack_1->GetYaxis()->SetTitleOffset(0);
   _stack_1->GetYaxis()->SetTitleFont(22);
   _stack_1->GetZaxis()->SetLabelFont(22);
   _stack_1->GetZaxis()->SetLabelSize(0.03);
   _stack_1->GetZaxis()->SetTitleSize(0.035);
   _stack_1->GetZaxis()->SetTitleFont(22);
   ->SetHistogram(_stack_1);
   
   Double_t xAxis5[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Fe_diff_stack_1 = new TH1D("hMR_Fe_diff_stack_1","hMR_Fe",6, xAxis5);
   hMR_Fe_diff_stack_1->SetBinContent(1,-10.44824);
   hMR_Fe_diff_stack_1->SetBinContent(2,-10.60287);
   hMR_Fe_diff_stack_1->SetBinContent(3,-1.953387);
   hMR_Fe_diff_stack_1->SetBinContent(4,2.117219);
   hMR_Fe_diff_stack_1->SetBinContent(5,-0.6004527);
   hMR_Fe_diff_stack_1->SetBinContent(6,0.6546304);
   hMR_Fe_diff_stack_1->SetBarOffset(0.03);
   hMR_Fe_diff_stack_1->SetBarWidth(0.313);
   hMR_Fe_diff_stack_1->SetEntries(12);
   hMR_Fe_diff_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#666699");
   hMR_Fe_diff_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe_diff_stack_1->SetLineColor(ci);

   ci = TColor::GetColor("#666699");
   hMR_Fe_diff_stack_1->SetMarkerColor(ci);
   hMR_Fe_diff_stack_1->SetMarkerStyle(8);
   hMR_Fe_diff_stack_1->GetXaxis()->SetTitle("Z");
   hMR_Fe_diff_stack_1->GetXaxis()->SetLabelFont(42);
   hMR_Fe_diff_stack_1->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe_diff_stack_1->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe_diff_stack_1->GetXaxis()->SetTitleFont(42);
   hMR_Fe_diff_stack_1->GetYaxis()->SetTitle("Difference (%)");
   hMR_Fe_diff_stack_1->GetYaxis()->SetLabelFont(42);
   hMR_Fe_diff_stack_1->GetYaxis()->SetLabelSize(0.035);
   hMR_Fe_diff_stack_1->GetYaxis()->SetTitleSize(0.035);
   hMR_Fe_diff_stack_1->GetYaxis()->SetTitleOffset(1.1);
   hMR_Fe_diff_stack_1->GetYaxis()->SetTitleFont(42);
   hMR_Fe_diff_stack_1->GetZaxis()->SetLabelFont(42);
   hMR_Fe_diff_stack_1->GetZaxis()->SetLabelSize(0.035);
   hMR_Fe_diff_stack_1->GetZaxis()->SetTitleSize(0.035);
   hMR_Fe_diff_stack_1->GetZaxis()->SetTitleFont(42);
   ->Add(hMR_Fe_diff_stack_1,"");
   Double_t xAxis6[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_C_diff_stack_2 = new TH1D("hMR_C_diff_stack_2","hMR_C",6, xAxis6);
   hMR_C_diff_stack_2->SetBinContent(1,-6.659569);
   hMR_C_diff_stack_2->SetBinContent(2,0.5500388);
   hMR_C_diff_stack_2->SetBinContent(3,3.26879);
   hMR_C_diff_stack_2->SetBinContent(4,-1.141317);
   hMR_C_diff_stack_2->SetBinContent(5,-1.817029);
   hMR_C_diff_stack_2->SetBinContent(6,-5.953295);
   hMR_C_diff_stack_2->SetBarOffset(0.343);
   hMR_C_diff_stack_2->SetBarWidth(0.313);
   hMR_C_diff_stack_2->SetEntries(12);
   hMR_C_diff_stack_2->SetStats(0);

   ci = TColor::GetColor("#666699");
   hMR_C_diff_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   hMR_C_diff_stack_2->SetLineColor(ci);

   ci = TColor::GetColor("#666699");
   hMR_C_diff_stack_2->SetMarkerColor(ci);
   hMR_C_diff_stack_2->SetMarkerStyle(8);
   hMR_C_diff_stack_2->GetXaxis()->SetTitle("Z");
   hMR_C_diff_stack_2->GetXaxis()->SetLabelFont(42);
   hMR_C_diff_stack_2->GetXaxis()->SetLabelSize(0.035);
   hMR_C_diff_stack_2->GetXaxis()->SetTitleSize(0.035);
   hMR_C_diff_stack_2->GetXaxis()->SetTitleFont(42);
   hMR_C_diff_stack_2->GetYaxis()->SetTitle("Difference (%)");
   hMR_C_diff_stack_2->GetYaxis()->SetLabelFont(42);
   hMR_C_diff_stack_2->GetYaxis()->SetLabelSize(0.035);
   hMR_C_diff_stack_2->GetYaxis()->SetTitleSize(0.035);
   hMR_C_diff_stack_2->GetYaxis()->SetTitleOffset(1.1);
   hMR_C_diff_stack_2->GetYaxis()->SetTitleFont(42);
   hMR_C_diff_stack_2->GetZaxis()->SetLabelFont(42);
   hMR_C_diff_stack_2->GetZaxis()->SetLabelSize(0.035);
   hMR_C_diff_stack_2->GetZaxis()->SetTitleSize(0.035);
   hMR_C_diff_stack_2->GetZaxis()->SetTitleFont(42);
   ->Add(hMR_C_diff_stack_2,"");
   Double_t xAxis7[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Pb_diff_stack_3 = new TH1D("hMR_Pb_diff_stack_3","hMR_Pb",6, xAxis7);
   hMR_Pb_diff_stack_3->SetBinContent(1,-5.042762);
   hMR_Pb_diff_stack_3->SetBinContent(2,-2.707433);
   hMR_Pb_diff_stack_3->SetBinContent(3,-6.213922);
   hMR_Pb_diff_stack_3->SetBinContent(4,-0.5932232);
   hMR_Pb_diff_stack_3->SetBinContent(5,-1.792749);
   hMR_Pb_diff_stack_3->SetBinContent(6,-4.885925);
   hMR_Pb_diff_stack_3->SetBarOffset(0.656);
   hMR_Pb_diff_stack_3->SetBarWidth(0.313);
   hMR_Pb_diff_stack_3->SetEntries(12);
   hMR_Pb_diff_stack_3->SetStats(0);

   ci = TColor::GetColor("#666699");
   hMR_Pb_diff_stack_3->SetFillColor(ci);

   ci = TColor::GetColor("#666699");
   hMR_Pb_diff_stack_3->SetMarkerColor(ci);
   hMR_Pb_diff_stack_3->SetMarkerStyle(8);
   hMR_Pb_diff_stack_3->GetXaxis()->SetTitle("Z");
   hMR_Pb_diff_stack_3->GetXaxis()->SetLabelFont(42);
   hMR_Pb_diff_stack_3->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb_diff_stack_3->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb_diff_stack_3->GetXaxis()->SetTitleFont(42);
   hMR_Pb_diff_stack_3->GetYaxis()->SetTitle("Difference (%)");
   hMR_Pb_diff_stack_3->GetYaxis()->SetLabelFont(42);
   hMR_Pb_diff_stack_3->GetYaxis()->SetLabelSize(0.035);
   hMR_Pb_diff_stack_3->GetYaxis()->SetTitleSize(0.035);
   hMR_Pb_diff_stack_3->GetYaxis()->SetTitleOffset(1.1);
   hMR_Pb_diff_stack_3->GetYaxis()->SetTitleFont(42);
   hMR_Pb_diff_stack_3->GetZaxis()->SetLabelFont(42);
   hMR_Pb_diff_stack_3->GetZaxis()->SetLabelSize(0.035);
   hMR_Pb_diff_stack_3->GetZaxis()->SetTitleSize(0.035);
   hMR_Pb_diff_stack_3->GetZaxis()->SetTitleFont(42);
   ->Add(hMR_Pb_diff_stack_3,"");
   ->Draw("nostackbar");
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
