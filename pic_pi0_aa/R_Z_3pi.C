void R_Z_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:11:01 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.1833333,-0.1134606,1.116667,1.021145);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *R_z = new THStack();
   R_z->SetName("R_z");
   R_z->SetTitle("Multiplicity ratios Z");
   Double_t xAxis25[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *R_z_stack_1 = new TH1F("R_z_stack_1","Multiplicity ratios Z",6, xAxis25);
   R_z_stack_1->SetMinimum(0);
   R_z_stack_1->SetMaximum(0.9076847);
   R_z_stack_1->SetDirectory(0);
   R_z_stack_1->SetStats(0);
   R_z_stack_1->SetLineWidth(2);
   R_z_stack_1->GetXaxis()->SetLabelFont(22);
   R_z_stack_1->GetXaxis()->SetLabelSize(0.05);
   R_z_stack_1->GetXaxis()->SetTitleSize(0.05);
   R_z_stack_1->GetXaxis()->SetTitleFont(22);
   R_z_stack_1->GetYaxis()->SetLabelFont(22);
   R_z_stack_1->GetYaxis()->SetLabelSize(0.05);
   R_z_stack_1->GetYaxis()->SetTitleSize(0.05);
   R_z_stack_1->GetYaxis()->SetTitleFont(22);
   R_z_stack_1->GetZaxis()->SetLabelFont(22);
   R_z_stack_1->GetZaxis()->SetLabelSize(0.05);
   R_z_stack_1->GetZaxis()->SetTitleSize(0.05);
   R_z_stack_1->GetZaxis()->SetTitleFont(22);
   R_z->SetHistogram(R_z_stack_1);
   
   Double_t xAxis26[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hRz_C_stack_1 = new TH1D("hRz_C_stack_1","Multiplicity Ratio",6, xAxis26);
   hRz_C_stack_1->SetBinContent(1,0.8419472);
   hRz_C_stack_1->SetBinContent(2,0.8406572);
   hRz_C_stack_1->SetBinContent(3,0.8411495);
   hRz_C_stack_1->SetBinContent(4,0.8453875);
   hRz_C_stack_1->SetBinContent(5,0.8644616);
   hRz_C_stack_1->SetBinContent(6,0.799324);
   hRz_C_stack_1->SetBinError(1,0.002871887);
   hRz_C_stack_1->SetBinError(2,0.003900066);
   hRz_C_stack_1->SetBinError(3,0.005279803);
   hRz_C_stack_1->SetBinError(4,0.007065211);
   hRz_C_stack_1->SetBinError(5,0.009293308);
   hRz_C_stack_1->SetBinError(6,0.008540496);
   hRz_C_stack_1->SetEntries(97216.02);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hRz_C_stack_1->SetLineColor(ci);
   hRz_C_stack_1->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hRz_C_stack_1->SetMarkerColor(ci);
   hRz_C_stack_1->SetMarkerStyle(8);
   hRz_C_stack_1->SetMarkerSize(2);
   hRz_C_stack_1->GetXaxis()->SetTitle("z");
   hRz_C_stack_1->GetXaxis()->SetLabelFont(22);
   hRz_C_stack_1->GetXaxis()->SetLabelSize(0.05);
   hRz_C_stack_1->GetXaxis()->SetTitleSize(0.05);
   hRz_C_stack_1->GetXaxis()->SetTitleFont(22);
   hRz_C_stack_1->GetYaxis()->SetTitle("R^{A}_{D}");
   hRz_C_stack_1->GetYaxis()->SetLabelFont(22);
   hRz_C_stack_1->GetYaxis()->SetLabelSize(0.05);
   hRz_C_stack_1->GetYaxis()->SetTitleSize(0.05);
   hRz_C_stack_1->GetYaxis()->SetTitleFont(22);
   hRz_C_stack_1->GetZaxis()->SetLabelFont(22);
   hRz_C_stack_1->GetZaxis()->SetLabelSize(0.05);
   hRz_C_stack_1->GetZaxis()->SetTitleSize(0.05);
   hRz_C_stack_1->GetZaxis()->SetTitleFont(22);
   R_z->Add(hRz_C_stack_1,"");
   Double_t xAxis27[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hRz_Fe_stack_2 = new TH1D("hRz_Fe_stack_2","Multiplicity Ratio",6, xAxis27);
   hRz_Fe_stack_2->SetBinContent(1,0.6287286);
   hRz_Fe_stack_2->SetBinContent(2,0.6199707);
   hRz_Fe_stack_2->SetBinContent(3,0.6222165);
   hRz_Fe_stack_2->SetBinContent(4,0.6223769);
   hRz_Fe_stack_2->SetBinContent(5,0.6089655);
   hRz_Fe_stack_2->SetBinContent(6,0.544181);
   hRz_Fe_stack_2->SetBinError(1,0.001738655);
   hRz_Fe_stack_2->SetBinError(2,0.00234948);
   hRz_Fe_stack_2->SetBinError(3,0.003207658);
   hRz_Fe_stack_2->SetBinError(4,0.00427514);
   hRz_Fe_stack_2->SetBinError(5,0.005414538);
   hRz_Fe_stack_2->SetBinError(6,0.004855842);
   hRz_Fe_stack_2->SetEntries(147730.4);

   ci = TColor::GetColor("#0000ff");
   hRz_Fe_stack_2->SetLineColor(ci);
   hRz_Fe_stack_2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hRz_Fe_stack_2->SetMarkerColor(ci);
   hRz_Fe_stack_2->SetMarkerStyle(8);
   hRz_Fe_stack_2->SetMarkerSize(2);
   hRz_Fe_stack_2->GetXaxis()->SetTitle("z");
   hRz_Fe_stack_2->GetXaxis()->SetLabelFont(22);
   hRz_Fe_stack_2->GetXaxis()->SetLabelSize(0.05);
   hRz_Fe_stack_2->GetXaxis()->SetTitleSize(0.05);
   hRz_Fe_stack_2->GetXaxis()->SetTitleFont(22);
   hRz_Fe_stack_2->GetYaxis()->SetTitle("R^{A}_{D}");
   hRz_Fe_stack_2->GetYaxis()->SetLabelFont(22);
   hRz_Fe_stack_2->GetYaxis()->SetLabelSize(0.05);
   hRz_Fe_stack_2->GetYaxis()->SetTitleSize(0.05);
   hRz_Fe_stack_2->GetYaxis()->SetTitleFont(22);
   hRz_Fe_stack_2->GetZaxis()->SetLabelFont(22);
   hRz_Fe_stack_2->GetZaxis()->SetLabelSize(0.05);
   hRz_Fe_stack_2->GetZaxis()->SetTitleSize(0.05);
   hRz_Fe_stack_2->GetZaxis()->SetTitleFont(22);
   R_z->Add(hRz_Fe_stack_2,"");
   Double_t xAxis28[7] = {0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hRz_Pb_stack_3 = new TH1D("hRz_Pb_stack_3","Multiplicity Ratio",6, xAxis28);
   hRz_Pb_stack_3->SetBinContent(1,0.4813648);
   hRz_Pb_stack_3->SetBinContent(2,0.4672053);
   hRz_Pb_stack_3->SetBinContent(3,0.4638856);
   hRz_Pb_stack_3->SetBinContent(4,0.4656002);
   hRz_Pb_stack_3->SetBinContent(5,0.4477557);
   hRz_Pb_stack_3->SetBinContent(6,0.3986161);
   hRz_Pb_stack_3->SetBinError(1,0.002144803);
   hRz_Pb_stack_3->SetBinError(2,0.00286791);
   hRz_Pb_stack_3->SetBinError(3,0.003879705);
   hRz_Pb_stack_3->SetBinError(4,0.005190987);
   hRz_Pb_stack_3->SetBinError(5,0.006598444);
   hRz_Pb_stack_3->SetBinError(6,0.005992614);
   hRz_Pb_stack_3->SetEntries(55278.63);
   hRz_Pb_stack_3->SetLineWidth(2);
   hRz_Pb_stack_3->SetMarkerStyle(8);
   hRz_Pb_stack_3->SetMarkerSize(2);
   hRz_Pb_stack_3->GetXaxis()->SetTitle("z");
   hRz_Pb_stack_3->GetXaxis()->SetLabelFont(22);
   hRz_Pb_stack_3->GetXaxis()->SetLabelSize(0.05);
   hRz_Pb_stack_3->GetXaxis()->SetTitleSize(0.05);
   hRz_Pb_stack_3->GetXaxis()->SetTitleFont(22);
   hRz_Pb_stack_3->GetYaxis()->SetTitle("R^{A}_{D}");
   hRz_Pb_stack_3->GetYaxis()->SetLabelFont(22);
   hRz_Pb_stack_3->GetYaxis()->SetLabelSize(0.05);
   hRz_Pb_stack_3->GetYaxis()->SetTitleSize(0.05);
   hRz_Pb_stack_3->GetYaxis()->SetTitleFont(22);
   hRz_Pb_stack_3->GetZaxis()->SetLabelFont(22);
   hRz_Pb_stack_3->GetZaxis()->SetLabelSize(0.05);
   hRz_Pb_stack_3->GetZaxis()->SetTitleSize(0.05);
   hRz_Pb_stack_3->GetZaxis()->SetTitleFont(22);
   R_z->Add(hRz_Pb_stack_3,"");
   R_z->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.01,0.9398649,0.3417647,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Multiplicity ratios Z");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
