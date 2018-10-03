void R_Z_aa()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:19:39 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(0.4166667,-0.09936258,1.083333,0.8942632);
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
   Double_t xAxis25[5] = {0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1F *R_z_stack_1 = new TH1F("R_z_stack_1","Multiplicity ratios Z",4, xAxis25);
   R_z_stack_1->SetMinimum(0);
   R_z_stack_1->SetMaximum(0.7949006);
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
   
   Double_t xAxis26[5] = {0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hRz_C_stack_1 = new TH1D("hRz_C_stack_1","Multiplicity Ratio",4, xAxis26);
   hRz_C_stack_1->SetBinContent(1,0.7570482);
   hRz_C_stack_1->SetBinContent(2,0.7405053);
   hRz_C_stack_1->SetBinContent(3,0.7262898);
   hRz_C_stack_1->SetBinContent(4,0.7316338);
   hRz_C_stack_1->SetBinError(1,0.004433559);
   hRz_C_stack_1->SetBinError(2,0.005612806);
   hRz_C_stack_1->SetBinError(3,0.007451992);
   hRz_C_stack_1->SetBinError(4,0.008776858);
   hRz_C_stack_1->SetEntries(47542.92);

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
   Double_t xAxis27[5] = {0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hRz_Fe_stack_2 = new TH1D("hRz_Fe_stack_2","Multiplicity Ratio",4, xAxis27);
   hRz_Fe_stack_2->SetBinContent(1,0.5245222);
   hRz_Fe_stack_2->SetBinContent(2,0.5101113);
   hRz_Fe_stack_2->SetBinContent(3,0.5090411);
   hRz_Fe_stack_2->SetBinContent(4,0.5212644);
   hRz_Fe_stack_2->SetBinError(1,0.002667656);
   hRz_Fe_stack_2->SetBinError(2,0.003422663);
   hRz_Fe_stack_2->SetBinError(3,0.004696193);
   hRz_Fe_stack_2->SetBinError(4,0.005731917);
   hRz_Fe_stack_2->SetEntries(57824.34);

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
   Double_t xAxis28[5] = {0.5, 0.6, 0.7, 0.8, 1}; 
   
   TH1D *hRz_Pb_stack_3 = new TH1D("hRz_Pb_stack_3","Multiplicity Ratio",4, xAxis28);
   hRz_Pb_stack_3->SetBinContent(1,0.3939086);
   hRz_Pb_stack_3->SetBinContent(2,0.38199);
   hRz_Pb_stack_3->SetBinContent(3,0.3794651);
   hRz_Pb_stack_3->SetBinContent(4,0.392262);
   hRz_Pb_stack_3->SetBinError(1,0.003248155);
   hRz_Pb_stack_3->SetBinError(2,0.004123507);
   hRz_Pb_stack_3->SetBinError(3,0.005549697);
   hRz_Pb_stack_3->SetBinError(4,0.00660315);
   hRz_Pb_stack_3->SetEntries(23492.28);
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
   
   TPaveText *pt = new TPaveText(0.01,0.9400135,0.3411546,0.995,"blNDC");
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
