void R_Z_bkg_aa()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 19:56:58 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.1833333,-0.1030023,1.116667,0.9270203);
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
   R_z_stack_1->SetMaximum(0.824018);
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
   hRz_C_stack_1->SetBinContent(1,0.7847791);
   hRz_C_stack_1->SetBinContent(2,0.7706979);
   hRz_C_stack_1->SetBinContent(3,0.7482486);
   hRz_C_stack_1->SetBinContent(4,0.7334474);
   hRz_C_stack_1->SetBinContent(5,0.740147);
   hRz_C_stack_1->SetBinContent(6,0.7041681);
   hRz_C_stack_1->SetBinError(1,0.003953347);
   hRz_C_stack_1->SetBinError(2,0.005681343);
   hRz_C_stack_1->SetBinError(3,0.008507302);
   hRz_C_stack_1->SetBinError(4,0.01335964);
   hRz_C_stack_1->SetBinError(5,0.02151006);
   hRz_C_stack_1->SetBinError(6,0.02893774);
   hRz_C_stack_1->SetEntries(12561.47);

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
   hRz_Fe_stack_2->SetBinContent(1,0.5648742);
   hRz_Fe_stack_2->SetBinContent(2,0.5389692);
   hRz_Fe_stack_2->SetBinContent(3,0.5245966);
   hRz_Fe_stack_2->SetBinContent(4,0.5194346);
   hRz_Fe_stack_2->SetBinContent(5,0.4770236);
   hRz_Fe_stack_2->SetBinContent(6,0.4470047);
   hRz_Fe_stack_2->SetBinError(1,0.002374899);
   hRz_Fe_stack_2->SetBinError(2,0.003430089);
   hRz_Fe_stack_2->SetBinError(3,0.005283872);
   hRz_Fe_stack_2->SetBinError(4,0.008445931);
   hRz_Fe_stack_2->SetBinError(5,0.01292611);
   hRz_Fe_stack_2->SetBinError(6,0.01805326);
   hRz_Fe_stack_2->SetEntries(15478.36);

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
   hRz_Pb_stack_3->SetBinContent(1,0.4182171);
   hRz_Pb_stack_3->SetBinContent(2,0.4080056);
   hRz_Pb_stack_3->SetBinContent(3,0.3991927);
   hRz_Pb_stack_3->SetBinContent(4,0.3777615);
   hRz_Pb_stack_3->SetBinContent(5,0.3627103);
   hRz_Pb_stack_3->SetBinContent(6,0.3535282);
   hRz_Pb_stack_3->SetBinError(1,0.002876882);
   hRz_Pb_stack_3->SetBinError(2,0.004144956);
   hRz_Pb_stack_3->SetBinError(3,0.006353936);
   hRz_Pb_stack_3->SetBinError(4,0.009732712);
   hRz_Pb_stack_3->SetBinError(5,0.01578409);
   hRz_Pb_stack_3->SetBinError(6,0.0209919);
   hRz_Pb_stack_3->SetEntries(6326.422);
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
