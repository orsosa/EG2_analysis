void expfullT_expfullH_AC()
{
//=========Macro generated from canvas: c/c
//=========  (Tue Mar 20 10:02:44 2018) by ROOT version 6.12/04
   TCanvas *c = new TCanvas("c", "c",83,147,800,600);
   c->Range(0.3,-12.82673,1.1,10.95426);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack *hsdiff = new THStack();
   hsdiff->SetName("hsdiff");
   hsdiff->SetTitle("M. Ratio, Difference between models");
   Double_t xAxis1[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hsdiff_stack_1 = new TH1F("hsdiff_stack_1","M. Ratio, Difference between models",6, xAxis1);
   hsdiff_stack_1->SetMinimum(-10.44863);
   hsdiff_stack_1->SetMaximum(8.576157);
   hsdiff_stack_1->SetDirectory(0);
   hsdiff_stack_1->SetStats(0);
   hsdiff_stack_1->SetLineWidth(2);
   hsdiff_stack_1->GetXaxis()->SetTitle("Z");
   hsdiff_stack_1->GetXaxis()->SetLabelFont(22);
   hsdiff_stack_1->GetXaxis()->SetLabelSize(0.03);
   hsdiff_stack_1->GetXaxis()->SetTitleSize(0.035);
   hsdiff_stack_1->GetXaxis()->SetTitleFont(22);
   hsdiff_stack_1->GetYaxis()->SetTitle("Difference (%)");
   hsdiff_stack_1->GetYaxis()->SetLabelFont(22);
   hsdiff_stack_1->GetYaxis()->SetLabelSize(0.03);
   hsdiff_stack_1->GetYaxis()->SetTitleSize(0.035);
   hsdiff_stack_1->GetYaxis()->SetTitleOffset(0);
   hsdiff_stack_1->GetYaxis()->SetTitleFont(22);
   hsdiff_stack_1->GetZaxis()->SetLabelFont(22);
   hsdiff_stack_1->GetZaxis()->SetLabelSize(0.03);
   hsdiff_stack_1->GetZaxis()->SetTitleSize(0.035);
   hsdiff_stack_1->GetZaxis()->SetTitleFont(22);
   hsdiff->SetHistogram(hsdiff_stack_1);
   
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Fe_diff_stack_1 = new TH1D("hMR_Fe_diff_stack_1","hMR_Fe",6, xAxis2);
   hMR_Fe_diff_stack_1->SetBinContent(1,-3.411595);
   hMR_Fe_diff_stack_1->SetBinContent(2,-8.091948);
   hMR_Fe_diff_stack_1->SetBinContent(3,-0.5262892);
   hMR_Fe_diff_stack_1->SetBinContent(4,-4.054892);
   hMR_Fe_diff_stack_1->SetBinContent(5,-0.9066968);
   hMR_Fe_diff_stack_1->SetBinContent(6,-8.525797);
   hMR_Fe_diff_stack_1->SetBarOffset(0.03);
   hMR_Fe_diff_stack_1->SetBarWidth(0.313);
   hMR_Fe_diff_stack_1->SetEntries(12);
   hMR_Fe_diff_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hMR_Fe_diff_stack_1->SetFillColor(ci);
   hMR_Fe_diff_stack_1->SetFillStyle(3016);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe_diff_stack_1->SetLineColor(ci);
   hMR_Fe_diff_stack_1->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
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
   hsdiff->Add(hMR_Fe_diff_stack_1,"");
   Double_t xAxis3[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_C_diff_stack_2 = new TH1D("hMR_C_diff_stack_2","hMR_C",6, xAxis3);
   hMR_C_diff_stack_2->SetBinContent(1,-1.73314);
   hMR_C_diff_stack_2->SetBinContent(2,-7.728196);
   hMR_C_diff_stack_2->SetBinContent(3,1.317176);
   hMR_C_diff_stack_2->SetBinContent(4,-2.146107);
   hMR_C_diff_stack_2->SetBinContent(5,-3.099326);
   hMR_C_diff_stack_2->SetBinContent(6,-10.44863);
   hMR_C_diff_stack_2->SetBarOffset(0.343);
   hMR_C_diff_stack_2->SetBarWidth(0.313);
   hMR_C_diff_stack_2->SetEntries(12);
   hMR_C_diff_stack_2->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hMR_C_diff_stack_2->SetFillColor(ci);
   hMR_C_diff_stack_2->SetFillStyle(3017);

   ci = TColor::GetColor("#ff0000");
   hMR_C_diff_stack_2->SetLineColor(ci);
   hMR_C_diff_stack_2->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
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
   hsdiff->Add(hMR_C_diff_stack_2,"");
   Double_t xAxis4[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hMR_Pb_diff_stack_3 = new TH1D("hMR_Pb_diff_stack_3","hMR_Pb",6, xAxis4);
   hMR_Pb_diff_stack_3->SetBinContent(1,-5.741482);
   hMR_Pb_diff_stack_3->SetBinContent(2,-1.415899);
   hMR_Pb_diff_stack_3->SetBinContent(3,-9.488762);
   hMR_Pb_diff_stack_3->SetBinContent(4,-5.509012);
   hMR_Pb_diff_stack_3->SetBinContent(5,8.167768);
   hMR_Pb_diff_stack_3->SetBinContent(6,-5.557979);
   hMR_Pb_diff_stack_3->SetBarOffset(0.656);
   hMR_Pb_diff_stack_3->SetBarWidth(0.313);
   hMR_Pb_diff_stack_3->SetEntries(12);
   hMR_Pb_diff_stack_3->SetStats(0);
   hMR_Pb_diff_stack_3->SetFillColor(1);
   hMR_Pb_diff_stack_3->SetFillStyle(3018);
   hMR_Pb_diff_stack_3->SetLineWidth(2);
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
   hsdiff->Add(hMR_Pb_diff_stack_3,"");
   hsdiff->Draw("nostackb");
   
   TPaveText *pt = new TPaveText(0.01,0.9427352,0.6177193,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("M. Ratio, Difference between models");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
