void R_Q2_bkg_aa()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 19:56:58 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4833333,-0.1055903,4.616667,0.9503129);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *R_q2 = new THStack();
   R_q2->SetName("R_q2");
   R_q2->SetTitle("Multiplicity ratios q2");
   Double_t xAxis33[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1F *R_q2_stack_3 = new TH1F("R_q2_stack_3","Multiplicity ratios q2",5, xAxis33);
   R_q2_stack_3->SetMinimum(0);
   R_q2_stack_3->SetMaximum(0.8447226);
   R_q2_stack_3->SetDirectory(0);
   R_q2_stack_3->SetStats(0);
   R_q2_stack_3->SetLineWidth(2);
   R_q2_stack_3->GetXaxis()->SetLabelFont(22);
   R_q2_stack_3->GetXaxis()->SetLabelSize(0.05);
   R_q2_stack_3->GetXaxis()->SetTitleSize(0.05);
   R_q2_stack_3->GetXaxis()->SetTitleFont(22);
   R_q2_stack_3->GetYaxis()->SetLabelFont(22);
   R_q2_stack_3->GetYaxis()->SetLabelSize(0.05);
   R_q2_stack_3->GetYaxis()->SetTitleSize(0.05);
   R_q2_stack_3->GetYaxis()->SetTitleFont(22);
   R_q2_stack_3->GetZaxis()->SetLabelFont(22);
   R_q2_stack_3->GetZaxis()->SetLabelSize(0.05);
   R_q2_stack_3->GetZaxis()->SetTitleSize(0.05);
   R_q2_stack_3->GetZaxis()->SetTitleFont(22);
   R_q2->SetHistogram(R_q2_stack_3);
   
   Double_t xAxis34[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hRq2_C_stack_1 = new TH1D("hRq2_C_stack_1","Multiplicity Ratio",5, xAxis34);
   hRq2_C_stack_1->SetBinContent(1,0.7714234);
   hRq2_C_stack_1->SetBinContent(2,0.7686385);
   hRq2_C_stack_1->SetBinContent(3,0.7546108);
   hRq2_C_stack_1->SetBinContent(4,0.7774952);
   hRq2_C_stack_1->SetBinContent(5,0.8044977);
   hRq2_C_stack_1->SetBinError(1,0.005229435);
   hRq2_C_stack_1->SetBinError(2,0.005647438);
   hRq2_C_stack_1->SetBinError(3,0.006860453);
   hRq2_C_stack_1->SetBinError(4,0.007981604);
   hRq2_C_stack_1->SetBinError(5,0.01069909);
   hRq2_C_stack_1->SetEntries(52827.54);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hRq2_C_stack_1->SetLineColor(ci);
   hRq2_C_stack_1->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hRq2_C_stack_1->SetMarkerColor(ci);
   hRq2_C_stack_1->SetMarkerStyle(8);
   hRq2_C_stack_1->SetMarkerSize(2);
   hRq2_C_stack_1->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hRq2_C_stack_1->GetXaxis()->SetLabelFont(22);
   hRq2_C_stack_1->GetXaxis()->SetLabelSize(0.05);
   hRq2_C_stack_1->GetXaxis()->SetTitleSize(0.05);
   hRq2_C_stack_1->GetXaxis()->SetTitleFont(22);
   hRq2_C_stack_1->GetYaxis()->SetTitle("R^{A}_{D}");
   hRq2_C_stack_1->GetYaxis()->SetLabelFont(22);
   hRq2_C_stack_1->GetYaxis()->SetLabelSize(0.05);
   hRq2_C_stack_1->GetYaxis()->SetTitleSize(0.05);
   hRq2_C_stack_1->GetYaxis()->SetTitleFont(22);
   hRq2_C_stack_1->GetZaxis()->SetLabelFont(22);
   hRq2_C_stack_1->GetZaxis()->SetLabelSize(0.05);
   hRq2_C_stack_1->GetZaxis()->SetTitleSize(0.05);
   hRq2_C_stack_1->GetZaxis()->SetTitleFont(22);
   R_q2->Add(hRq2_C_stack_1,"");
   Double_t xAxis35[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hRq2_Fe_stack_2 = new TH1D("hRq2_Fe_stack_2","Multiplicity Ratio",5, xAxis35);
   hRq2_Fe_stack_2->SetBinContent(1,0.5554179);
   hRq2_Fe_stack_2->SetBinContent(2,0.545894);
   hRq2_Fe_stack_2->SetBinContent(3,0.550413);
   hRq2_Fe_stack_2->SetBinContent(4,0.5384306);
   hRq2_Fe_stack_2->SetBinContent(5,0.5715611);
   hRq2_Fe_stack_2->SetBinError(1,0.00320662);
   hRq2_Fe_stack_2->SetBinError(2,0.003424173);
   hRq2_Fe_stack_2->SetBinError(3,0.004258929);
   hRq2_Fe_stack_2->SetBinError(4,0.004789265);
   hRq2_Fe_stack_2->SetBinError(5,0.006573051);
   hRq2_Fe_stack_2->SetEntries(71758.67);

   ci = TColor::GetColor("#0000ff");
   hRq2_Fe_stack_2->SetLineColor(ci);
   hRq2_Fe_stack_2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hRq2_Fe_stack_2->SetMarkerColor(ci);
   hRq2_Fe_stack_2->SetMarkerStyle(8);
   hRq2_Fe_stack_2->SetMarkerSize(2);
   hRq2_Fe_stack_2->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hRq2_Fe_stack_2->GetXaxis()->SetLabelFont(22);
   hRq2_Fe_stack_2->GetXaxis()->SetLabelSize(0.05);
   hRq2_Fe_stack_2->GetXaxis()->SetTitleSize(0.05);
   hRq2_Fe_stack_2->GetXaxis()->SetTitleFont(22);
   hRq2_Fe_stack_2->GetYaxis()->SetTitle("R^{A}_{D}");
   hRq2_Fe_stack_2->GetYaxis()->SetLabelFont(22);
   hRq2_Fe_stack_2->GetYaxis()->SetLabelSize(0.05);
   hRq2_Fe_stack_2->GetYaxis()->SetTitleSize(0.05);
   hRq2_Fe_stack_2->GetYaxis()->SetTitleFont(22);
   hRq2_Fe_stack_2->GetZaxis()->SetLabelFont(22);
   hRq2_Fe_stack_2->GetZaxis()->SetLabelSize(0.05);
   hRq2_Fe_stack_2->GetZaxis()->SetTitleSize(0.05);
   hRq2_Fe_stack_2->GetZaxis()->SetTitleFont(22);
   R_q2->Add(hRq2_Fe_stack_2,"");
   Double_t xAxis36[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hRq2_Pb_stack_3 = new TH1D("hRq2_Pb_stack_3","Multiplicity Ratio",5, xAxis36);
   hRq2_Pb_stack_3->SetBinContent(1,0.4169344);
   hRq2_Pb_stack_3->SetBinContent(2,0.4041954);
   hRq2_Pb_stack_3->SetBinContent(3,0.4057109);
   hRq2_Pb_stack_3->SetBinContent(4,0.4157714);
   hRq2_Pb_stack_3->SetBinContent(5,0.4300746);
   hRq2_Pb_stack_3->SetBinError(1,0.003787385);
   hRq2_Pb_stack_3->SetBinError(2,0.00404391);
   hRq2_Pb_stack_3->SetBinError(3,0.00504602);
   hRq2_Pb_stack_3->SetBinError(4,0.005976255);
   hRq2_Pb_stack_3->SetBinError(5,0.008037391);
   hRq2_Pb_stack_3->SetEntries(27455.04);
   hRq2_Pb_stack_3->SetLineWidth(2);
   hRq2_Pb_stack_3->SetMarkerStyle(8);
   hRq2_Pb_stack_3->SetMarkerSize(2);
   hRq2_Pb_stack_3->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hRq2_Pb_stack_3->GetXaxis()->SetLabelFont(22);
   hRq2_Pb_stack_3->GetXaxis()->SetLabelSize(0.05);
   hRq2_Pb_stack_3->GetXaxis()->SetTitleSize(0.05);
   hRq2_Pb_stack_3->GetXaxis()->SetTitleFont(22);
   hRq2_Pb_stack_3->GetYaxis()->SetTitle("R^{A}_{D}");
   hRq2_Pb_stack_3->GetYaxis()->SetLabelFont(22);
   hRq2_Pb_stack_3->GetYaxis()->SetLabelSize(0.05);
   hRq2_Pb_stack_3->GetYaxis()->SetTitleSize(0.05);
   hRq2_Pb_stack_3->GetYaxis()->SetTitleFont(22);
   hRq2_Pb_stack_3->GetZaxis()->SetLabelFont(22);
   hRq2_Pb_stack_3->GetZaxis()->SetLabelSize(0.05);
   hRq2_Pb_stack_3->GetZaxis()->SetTitleSize(0.05);
   hRq2_Pb_stack_3->GetZaxis()->SetTitleFont(22);
   R_q2->Add(hRq2_Pb_stack_3,"");
   R_q2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.01,0.9398649,0.3603922,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Multiplicity ratios q2");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
