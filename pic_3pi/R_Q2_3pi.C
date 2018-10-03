void R_Q2_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:41:14 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4833333,-0.1347139,4.616667,1.212425);
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
   Double_t xAxis23[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1F *R_q2_stack_3 = new TH1F("R_q2_stack_3","Multiplicity ratios q2",5, xAxis23);
   R_q2_stack_3->SetMinimum(0);
   R_q2_stack_3->SetMaximum(1.077711);
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
   
   Double_t xAxis24[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hRq2_C_stack_1 = new TH1D("hRq2_C_stack_1","Q^{2} solid data",5, xAxis24);
   hRq2_C_stack_1->SetBinContent(1,0.8246152);
   hRq2_C_stack_1->SetBinContent(2,0.8311146);
   hRq2_C_stack_1->SetBinContent(3,0.8465027);
   hRq2_C_stack_1->SetBinContent(4,1.026392);
   hRq2_C_stack_1->SetBinContent(5,0.7793353);
   hRq2_C_stack_1->SetBinError(1,0.1132812);
   hRq2_C_stack_1->SetBinError(2,0.1094704);
   hRq2_C_stack_1->SetBinError(3,0.1362499);
   hRq2_C_stack_1->SetBinError(4,0.1962541);
   hRq2_C_stack_1->SetBinError(5,0.192252);
   hRq2_C_stack_1->SetEntries(156.1416);

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
   hRq2_C_stack_1->GetYaxis()->SetTitle("dN/dQ^{2}");
   hRq2_C_stack_1->GetYaxis()->SetLabelFont(22);
   hRq2_C_stack_1->GetYaxis()->SetLabelSize(0.05);
   hRq2_C_stack_1->GetYaxis()->SetTitleSize(0.05);
   hRq2_C_stack_1->GetYaxis()->SetTitleFont(22);
   hRq2_C_stack_1->GetZaxis()->SetLabelFont(22);
   hRq2_C_stack_1->GetZaxis()->SetLabelSize(0.05);
   hRq2_C_stack_1->GetZaxis()->SetTitleSize(0.05);
   hRq2_C_stack_1->GetZaxis()->SetTitleFont(22);
   R_q2->Add(hRq2_C_stack_1,"");
   Double_t xAxis25[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hRq2_Fe_stack_2 = new TH1D("hRq2_Fe_stack_2","Q^{2} solid data",5, xAxis25);
   hRq2_Fe_stack_2->SetBinContent(1,0.5133171);
   hRq2_Fe_stack_2->SetBinContent(2,0.4431181);
   hRq2_Fe_stack_2->SetBinContent(3,0.6367474);
   hRq2_Fe_stack_2->SetBinContent(4,0.4380243);
   hRq2_Fe_stack_2->SetBinContent(5,0.5054359);
   hRq2_Fe_stack_2->SetBinError(1,0.05726369);
   hRq2_Fe_stack_2->SetBinError(2,0.05394375);
   hRq2_Fe_stack_2->SetBinError(3,0.08571082);
   hRq2_Fe_stack_2->SetBinError(4,0.06971005);
   hRq2_Fe_stack_2->SetBinError(5,0.1038781);
   hRq2_Fe_stack_2->SetEntries(220.4706);

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
   hRq2_Fe_stack_2->GetYaxis()->SetTitle("dN/dQ^{2}");
   hRq2_Fe_stack_2->GetYaxis()->SetLabelFont(22);
   hRq2_Fe_stack_2->GetYaxis()->SetLabelSize(0.05);
   hRq2_Fe_stack_2->GetYaxis()->SetTitleSize(0.05);
   hRq2_Fe_stack_2->GetYaxis()->SetTitleFont(22);
   hRq2_Fe_stack_2->GetZaxis()->SetLabelFont(22);
   hRq2_Fe_stack_2->GetZaxis()->SetLabelSize(0.05);
   hRq2_Fe_stack_2->GetZaxis()->SetTitleSize(0.05);
   hRq2_Fe_stack_2->GetZaxis()->SetTitleFont(22);
   R_q2->Add(hRq2_Fe_stack_2,"");
   Double_t xAxis26[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hRq2_Pb_stack_3 = new TH1D("hRq2_Pb_stack_3","Q^{2} solid data",5, xAxis26);
   hRq2_Pb_stack_3->SetBinContent(1,0.5503653);
   hRq2_Pb_stack_3->SetBinContent(2,0.4313409);
   hRq2_Pb_stack_3->SetBinContent(3,0.3246287);
   hRq2_Pb_stack_3->SetBinContent(4,0.338563);
   hRq2_Pb_stack_3->SetBinContent(5,0.5288743);
   hRq2_Pb_stack_3->SetBinError(1,0.07963284);
   hRq2_Pb_stack_3->SetBinError(2,0.06778548);
   hRq2_Pb_stack_3->SetBinError(3,0.0773717);
   hRq2_Pb_stack_3->SetBinError(4,0.09329207);
   hRq2_Pb_stack_3->SetBinError(5,0.1749575);
   hRq2_Pb_stack_3->SetEntries(84.0257);
   hRq2_Pb_stack_3->SetLineWidth(2);
   hRq2_Pb_stack_3->SetMarkerStyle(8);
   hRq2_Pb_stack_3->SetMarkerSize(2);
   hRq2_Pb_stack_3->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hRq2_Pb_stack_3->GetXaxis()->SetLabelFont(22);
   hRq2_Pb_stack_3->GetXaxis()->SetLabelSize(0.05);
   hRq2_Pb_stack_3->GetXaxis()->SetTitleSize(0.05);
   hRq2_Pb_stack_3->GetXaxis()->SetTitleFont(22);
   hRq2_Pb_stack_3->GetYaxis()->SetTitle("dN/dQ^{2}");
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
