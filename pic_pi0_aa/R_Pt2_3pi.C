void R_Pt2_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:11:01 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-0.1433358,1.75,1.290022);
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
   R_pt2_stack_2->SetMaximum(1.146686);
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
   hRpt2_C_stack_1->SetBinContent(1,0.7980895);
   hRpt2_C_stack_1->SetBinContent(2,0.8262011);
   hRpt2_C_stack_1->SetBinContent(3,0.8508083);
   hRpt2_C_stack_1->SetBinContent(4,0.8845573);
   hRpt2_C_stack_1->SetBinContent(5,0.9224613);
   hRpt2_C_stack_1->SetBinContent(6,1.092082);
   hRpt2_C_stack_1->SetBinError(1,0.003441158);
   hRpt2_C_stack_1->SetBinError(2,0.003268886);
   hRpt2_C_stack_1->SetBinError(3,0.00442189);
   hRpt2_C_stack_1->SetBinError(4,0.006567931);
   hRpt2_C_stack_1->SetBinError(5,0.009147988);
   hRpt2_C_stack_1->SetBinError(6,0.01370454);
   hRpt2_C_stack_1->SetEntries(80965.93);

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
   hRpt2_Fe_stack_2->SetBinContent(1,0.5682195);
   hRpt2_Fe_stack_2->SetBinContent(2,0.5958399);
   hRpt2_Fe_stack_2->SetBinContent(3,0.6320298);
   hRpt2_Fe_stack_2->SetBinContent(4,0.6932793);
   hRpt2_Fe_stack_2->SetBinContent(5,0.7667491);
   hRpt2_Fe_stack_2->SetBinContent(6,0.978779);
   hRpt2_Fe_stack_2->SetBinError(1,0.002002535);
   hRpt2_Fe_stack_2->SetBinError(2,0.001914834);
   hRpt2_Fe_stack_2->SetBinError(3,0.00268325);
   hRpt2_Fe_stack_2->SetBinError(4,0.004237873);
   hRpt2_Fe_stack_2->SetBinError(5,0.006251024);
   hRpt2_Fe_stack_2->SetBinError(6,0.01031861);
   hRpt2_Fe_stack_2->SetEntries(100537.3);

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
   hRpt2_Pb_stack_3->SetBinContent(1,0.4226275);
   hRpt2_Pb_stack_3->SetBinContent(2,0.4483624);
   hRpt2_Pb_stack_3->SetBinContent(3,0.4789712);
   hRpt2_Pb_stack_3->SetBinContent(4,0.5273615);
   hRpt2_Pb_stack_3->SetBinContent(5,0.588665);
   hRpt2_Pb_stack_3->SetBinContent(6,0.7559897);
   hRpt2_Pb_stack_3->SetBinError(1,0.002470883);
   hRpt2_Pb_stack_3->SetBinError(2,0.002366654);
   hRpt2_Pb_stack_3->SetBinError(3,0.003274863);
   hRpt2_Pb_stack_3->SetBinError(4,0.005054671);
   hRpt2_Pb_stack_3->SetBinError(5,0.007367611);
   hRpt2_Pb_stack_3->SetBinError(6,0.01161275);
   hRpt2_Pb_stack_3->SetEntries(43780.4);
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
