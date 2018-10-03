void R_Pt2_bkg_aa()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 19:56:58 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-0.1333498,1.75,1.200148);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *R_pt2 = new THStack();
   R_pt2->SetName("R_pt2");
   R_pt2->SetTitle("Multiplicity ratios pt2");
   Double_t xAxis29[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1F *R_pt2_stack_2 = new TH1F("R_pt2_stack_2","Multiplicity ratios pt2",6, xAxis29);
   R_pt2_stack_2->SetMinimum(0);
   R_pt2_stack_2->SetMaximum(1.066798);
   R_pt2_stack_2->SetDirectory(0);
   R_pt2_stack_2->SetStats(0);
   R_pt2_stack_2->SetLineWidth(2);
   R_pt2_stack_2->GetXaxis()->SetLabelFont(22);
   R_pt2_stack_2->GetXaxis()->SetLabelSize(0.05);
   R_pt2_stack_2->GetXaxis()->SetTitleSize(0.05);
   R_pt2_stack_2->GetXaxis()->SetTitleFont(22);
   R_pt2_stack_2->GetYaxis()->SetLabelFont(22);
   R_pt2_stack_2->GetYaxis()->SetLabelSize(0.05);
   R_pt2_stack_2->GetYaxis()->SetTitleSize(0.05);
   R_pt2_stack_2->GetYaxis()->SetTitleFont(22);
   R_pt2_stack_2->GetZaxis()->SetLabelFont(22);
   R_pt2_stack_2->GetZaxis()->SetLabelSize(0.05);
   R_pt2_stack_2->GetZaxis()->SetTitleSize(0.05);
   R_pt2_stack_2->GetZaxis()->SetTitleFont(22);
   R_pt2->SetHistogram(R_pt2_stack_2);
   
   Double_t xAxis30[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hRpt2_C_stack_1 = new TH1D("hRpt2_C_stack_1","Multiplicity Ratio",6, xAxis30);
   hRpt2_C_stack_1->SetBinContent(1,0.7409443);
   hRpt2_C_stack_1->SetBinContent(2,0.7727601);
   hRpt2_C_stack_1->SetBinContent(3,0.8413031);
   hRpt2_C_stack_1->SetBinContent(4,0.9031679);
   hRpt2_C_stack_1->SetBinContent(5,0.8986353);
   hRpt2_C_stack_1->SetBinContent(6,0.9953962);
   hRpt2_C_stack_1->SetBinError(1,0.00399021);
   hRpt2_C_stack_1->SetBinError(2,0.005108916);
   hRpt2_C_stack_1->SetBinError(3,0.009427167);
   hRpt2_C_stack_1->SetBinError(4,0.0169285);
   hRpt2_C_stack_1->SetBinError(5,0.02443803);
   hRpt2_C_stack_1->SetBinError(6,0.03620219);
   hRpt2_C_stack_1->SetEntries(11415.91);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hRpt2_C_stack_1->SetLineColor(ci);
   hRpt2_C_stack_1->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hRpt2_C_stack_1->SetMarkerColor(ci);
   hRpt2_C_stack_1->SetMarkerStyle(8);
   hRpt2_C_stack_1->SetMarkerSize(2);
   hRpt2_C_stack_1->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hRpt2_C_stack_1->GetXaxis()->SetLabelFont(22);
   hRpt2_C_stack_1->GetXaxis()->SetLabelSize(0.05);
   hRpt2_C_stack_1->GetXaxis()->SetTitleSize(0.05);
   hRpt2_C_stack_1->GetXaxis()->SetTitleFont(22);
   hRpt2_C_stack_1->GetYaxis()->SetTitle("R^{A}_{D}");
   hRpt2_C_stack_1->GetYaxis()->SetLabelFont(22);
   hRpt2_C_stack_1->GetYaxis()->SetLabelSize(0.05);
   hRpt2_C_stack_1->GetYaxis()->SetTitleSize(0.05);
   hRpt2_C_stack_1->GetYaxis()->SetTitleFont(22);
   hRpt2_C_stack_1->GetZaxis()->SetLabelFont(22);
   hRpt2_C_stack_1->GetZaxis()->SetLabelSize(0.05);
   hRpt2_C_stack_1->GetZaxis()->SetTitleSize(0.05);
   hRpt2_C_stack_1->GetZaxis()->SetTitleFont(22);
   R_pt2->Add(hRpt2_C_stack_1,"");
   Double_t xAxis31[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hRpt2_Fe_stack_2 = new TH1D("hRpt2_Fe_stack_2","Multiplicity Ratio",6, xAxis31);
   hRpt2_Fe_stack_2->SetBinContent(1,0.5033134);
   hRpt2_Fe_stack_2->SetBinContent(2,0.5584782);
   hRpt2_Fe_stack_2->SetBinContent(3,0.6360857);
   hRpt2_Fe_stack_2->SetBinContent(4,0.7446371);
   hRpt2_Fe_stack_2->SetBinContent(5,0.8778282);
   hRpt2_Fe_stack_2->SetBinContent(6,1.015998);
   hRpt2_Fe_stack_2->SetBinError(1,0.002296898);
   hRpt2_Fe_stack_2->SetBinError(2,0.003132399);
   hRpt2_Fe_stack_2->SetBinError(3,0.006203568);
   hRpt2_Fe_stack_2->SetBinError(4,0.01217773);
   hRpt2_Fe_stack_2->SetBinError(5,0.02185386);
   hRpt2_Fe_stack_2->SetBinError(6,0.03442389);
   hRpt2_Fe_stack_2->SetEntries(10085.39);

   ci = TColor::GetColor("#0000ff");
   hRpt2_Fe_stack_2->SetLineColor(ci);
   hRpt2_Fe_stack_2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hRpt2_Fe_stack_2->SetMarkerColor(ci);
   hRpt2_Fe_stack_2->SetMarkerStyle(8);
   hRpt2_Fe_stack_2->SetMarkerSize(2);
   hRpt2_Fe_stack_2->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hRpt2_Fe_stack_2->GetXaxis()->SetLabelFont(22);
   hRpt2_Fe_stack_2->GetXaxis()->SetLabelSize(0.05);
   hRpt2_Fe_stack_2->GetXaxis()->SetTitleSize(0.05);
   hRpt2_Fe_stack_2->GetXaxis()->SetTitleFont(22);
   hRpt2_Fe_stack_2->GetYaxis()->SetTitle("R^{A}_{D}");
   hRpt2_Fe_stack_2->GetYaxis()->SetLabelFont(22);
   hRpt2_Fe_stack_2->GetYaxis()->SetLabelSize(0.05);
   hRpt2_Fe_stack_2->GetYaxis()->SetTitleSize(0.05);
   hRpt2_Fe_stack_2->GetYaxis()->SetTitleFont(22);
   hRpt2_Fe_stack_2->GetZaxis()->SetLabelFont(22);
   hRpt2_Fe_stack_2->GetZaxis()->SetLabelSize(0.05);
   hRpt2_Fe_stack_2->GetZaxis()->SetTitleSize(0.05);
   hRpt2_Fe_stack_2->GetZaxis()->SetTitleFont(22);
   R_pt2->Add(hRpt2_Fe_stack_2,"");
   Double_t xAxis32[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hRpt2_Pb_stack_3 = new TH1D("hRpt2_Pb_stack_3","Multiplicity Ratio",6, xAxis32);
   hRpt2_Pb_stack_3->SetBinContent(1,0.3701585);
   hRpt2_Pb_stack_3->SetBinContent(2,0.4130555);
   hRpt2_Pb_stack_3->SetBinContent(3,0.4793923);
   hRpt2_Pb_stack_3->SetBinContent(4,0.5630244);
   hRpt2_Pb_stack_3->SetBinContent(5,0.6480504);
   hRpt2_Pb_stack_3->SetBinContent(6,0.8355007);
   hRpt2_Pb_stack_3->SetBinError(1,0.002808952);
   hRpt2_Pb_stack_3->SetBinError(2,0.003749407);
   hRpt2_Pb_stack_3->SetBinError(3,0.007194836);
   hRpt2_Pb_stack_3->SetBinError(4,0.01365047);
   hRpt2_Pb_stack_3->SetBinError(5,0.02263713);
   hRpt2_Pb_stack_3->SetBinError(6,0.03681237);
   hRpt2_Pb_stack_3->SetEntries(5146.869);
   hRpt2_Pb_stack_3->SetLineWidth(2);
   hRpt2_Pb_stack_3->SetMarkerStyle(8);
   hRpt2_Pb_stack_3->SetMarkerSize(2);
   hRpt2_Pb_stack_3->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hRpt2_Pb_stack_3->GetXaxis()->SetLabelFont(22);
   hRpt2_Pb_stack_3->GetXaxis()->SetLabelSize(0.05);
   hRpt2_Pb_stack_3->GetXaxis()->SetTitleSize(0.05);
   hRpt2_Pb_stack_3->GetXaxis()->SetTitleFont(22);
   hRpt2_Pb_stack_3->GetYaxis()->SetTitle("R^{A}_{D}");
   hRpt2_Pb_stack_3->GetYaxis()->SetLabelFont(22);
   hRpt2_Pb_stack_3->GetYaxis()->SetLabelSize(0.05);
   hRpt2_Pb_stack_3->GetYaxis()->SetTitleSize(0.05);
   hRpt2_Pb_stack_3->GetYaxis()->SetTitleFont(22);
   hRpt2_Pb_stack_3->GetZaxis()->SetLabelFont(22);
   hRpt2_Pb_stack_3->GetZaxis()->SetLabelSize(0.05);
   hRpt2_Pb_stack_3->GetZaxis()->SetTitleSize(0.05);
   hRpt2_Pb_stack_3->GetZaxis()->SetTitleFont(22);
   R_pt2->Add(hRpt2_Pb_stack_3,"");
   R_pt2->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.01,0.9398649,0.3721569,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Multiplicity ratios pt2");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
