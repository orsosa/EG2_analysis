void R_Q2_aa()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:19:39 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(0.4833333,-0.1021972,4.616667,0.9197747);
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
   R_q2_stack_3->SetMaximum(0.8175775);
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
   hRq2_C_stack_1->SetBinContent(1,0.7384464);
   hRq2_C_stack_1->SetBinContent(2,0.7318438);
   hRq2_C_stack_1->SetBinContent(3,0.7517612);
   hRq2_C_stack_1->SetBinContent(4,0.7437358);
   hRq2_C_stack_1->SetBinContent(5,0.7786452);
   hRq2_C_stack_1->SetBinError(1,0.005251736);
   hRq2_C_stack_1->SetBinError(2,0.005699002);
   hRq2_C_stack_1->SetBinError(3,0.007195692);
   hRq2_C_stack_1->SetBinError(4,0.008055182);
   hRq2_C_stack_1->SetBinError(5,0.01096862);
   hRq2_C_stack_1->SetEntries(47202.61);

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
   hRq2_Fe_stack_2->SetBinContent(1,0.5268194);
   hRq2_Fe_stack_2->SetBinContent(2,0.5070618);
   hRq2_Fe_stack_2->SetBinContent(3,0.5132212);
   hRq2_Fe_stack_2->SetBinContent(4,0.5213014);
   hRq2_Fe_stack_2->SetBinContent(5,0.53353);
   hRq2_Fe_stack_2->SetBinError(1,0.003278095);
   hRq2_Fe_stack_2->SetBinError(2,0.003478004);
   hRq2_Fe_stack_2->SetBinError(3,0.004352455);
   hRq2_Fe_stack_2->SetBinError(4,0.005050439);
   hRq2_Fe_stack_2->SetBinError(5,0.006876221);
   hRq2_Fe_stack_2->SetEntries(59088.13);

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
   hRq2_Pb_stack_3->SetBinContent(1,0.3840659);
   hRq2_Pb_stack_3->SetBinContent(2,0.3824947);
   hRq2_Pb_stack_3->SetBinContent(3,0.3918732);
   hRq2_Pb_stack_3->SetBinContent(4,0.3962244);
   hRq2_Pb_stack_3->SetBinContent(5,0.4299132);
   hRq2_Pb_stack_3->SetBinError(1,0.003779493);
   hRq2_Pb_stack_3->SetBinError(2,0.004167029);
   hRq2_Pb_stack_3->SetBinError(3,0.005249311);
   hRq2_Pb_stack_3->SetBinError(4,0.006164225);
   hRq2_Pb_stack_3->SetBinError(5,0.008686803);
   hRq2_Pb_stack_3->SetEntries(22810.57);
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
   
   TPaveText *pt = new TPaveText(0.01,0.9400135,0.3597456,0.995,"blNDC");
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
