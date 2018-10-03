void R_Q2_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:57:48 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4833333,-0.21875,4.616667,1.96875);
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
   
   TH1F *R_q2_stack_3 = new TH1F("R_q2_stack_3","Multiplicity ratios q2",6,1,4.1);
   R_q2_stack_3->SetMinimum(0);
   R_q2_stack_3->SetMaximum(1.75);
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
   
   
   TH1D *hRq2_C_stack_1 = new TH1D("hRq2_C_stack_1","Q^{2} solid data",6,1,4.1);
   hRq2_C_stack_1->SetBinContent(1,0.6473684);
   hRq2_C_stack_1->SetBinContent(2,0.5906736);
   hRq2_C_stack_1->SetBinContent(3,0.6780822);
   hRq2_C_stack_1->SetBinContent(4,0.7169811);
   hRq2_C_stack_1->SetBinContent(5,0.5263158);
   hRq2_C_stack_1->SetBinContent(6,0.1666667);
   hRq2_C_stack_1->SetBinError(1,0.04325474);
   hRq2_C_stack_1->SetBinError(2,0.04933676);
   hRq2_C_stack_1->SetBinError(3,0.08828184);
   hRq2_C_stack_1->SetBinError(4,0.1524048);
   hRq2_C_stack_1->SetBinError(5,0.2056215);
   hRq2_C_stack_1->SetBinError(6,0.1800206);
   hRq2_C_stack_1->SetEntries(100.559);

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
   
   TH1D *hRq2_Fe_stack_2 = new TH1D("hRq2_Fe_stack_2","Q^{2} solid data",6,1,4.1);
   hRq2_Fe_stack_2->SetBinContent(1,0.4086781);
   hRq2_Fe_stack_2->SetBinContent(2,0.5213115);
   hRq2_Fe_stack_2->SetBinContent(3,0.3885135);
   hRq2_Fe_stack_2->SetBinContent(4,0.5306122);
   hRq2_Fe_stack_2->SetBinContent(5,0.1836735);
   hRq2_Fe_stack_2->SetBinContent(6,1.666667);
   hRq2_Fe_stack_2->SetBinError(1,0.02410237);
   hRq2_Fe_stack_2->SetBinError(2,0.03605727);
   hRq2_Fe_stack_2->SetBinError(3,0.0426906);
   hRq2_Fe_stack_2->SetBinError(4,0.09103496);
   hRq2_Fe_stack_2->SetBinError(5,0.06661026);
   hRq2_Fe_stack_2->SetBinError(6,1.217161);
   hRq2_Fe_stack_2->SetEntries(9.136715);

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
   
   TH1D *hRq2_Pb_stack_3 = new TH1D("hRq2_Pb_stack_3","Q^{2} solid data",6,1,4.1);
   hRq2_Pb_stack_3->SetBinContent(1,0.1873638);
   hRq2_Pb_stack_3->SetBinContent(2,0.1511254);
   hRq2_Pb_stack_3->SetBinContent(3,0.15625);
   hRq2_Pb_stack_3->SetBinContent(4,0.1975309);
   hRq2_Pb_stack_3->SetBinContent(5,0.3043478);
   hRq2_Pb_stack_3->SetBinContent(6,0.3333333);
   hRq2_Pb_stack_3->SetBinError(1,0.01556731);
   hRq2_Pb_stack_3->SetBinError(2,0.0167238);
   hRq2_Pb_stack_3->SetBinError(3,0.02839958);
   hRq2_Pb_stack_3->SetBinError(4,0.05404037);
   hRq2_Pb_stack_3->SetBinError(5,0.1313766);
   hRq2_Pb_stack_3->SetBinError(6,0.3849002);
   hRq2_Pb_stack_3->SetEntries(10.42557);
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
