void R_Pt2_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:10:09 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4166667,-0.1277242,1.083333,1.149518);
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
   Double_t xAxis29[6] = {0, 0.18, 0.36, 0.54, 1.5, 4.591495e-41}; 
   
   TH1F *R_pt2_stack_2 = new TH1F("R_pt2_stack_2","Multiplicity ratios pt2",5, xAxis29);
   R_pt2_stack_2->SetMinimum(0);
   R_pt2_stack_2->SetMaximum(0);
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
   
   Double_t xAxis30[6] = {0, 0.18, 0.36, 0.54, 1.5, 4.591495e-41}; 
   
   TH1D *hRpt2_C_stack_1 = new TH1D("hRpt2_C_stack_1","Pt^{2} solid data",5, xAxis30);
   hRpt2_C_stack_1->SetBinContent(6,0.8556956);
   hRpt2_C_stack_1->SetBinError(6,0.06153686);

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
   hRpt2_C_stack_1->GetYaxis()->SetTitle("dN/dPt^{2}");
   hRpt2_C_stack_1->GetYaxis()->SetLabelFont(22);
   hRpt2_C_stack_1->GetYaxis()->SetLabelSize(0.05);
   hRpt2_C_stack_1->GetYaxis()->SetTitleSize(0.05);
   hRpt2_C_stack_1->GetYaxis()->SetTitleFont(22);
   hRpt2_C_stack_1->GetZaxis()->SetLabelFont(22);
   hRpt2_C_stack_1->GetZaxis()->SetLabelSize(0.05);
   hRpt2_C_stack_1->GetZaxis()->SetTitleSize(0.05);
   hRpt2_C_stack_1->GetZaxis()->SetTitleFont(22);
   R_pt2->Add(hRpt2_C_stack_1,"");
   Double_t xAxis31[6] = {0, 0.18, 0.36, 0.54, 1.5, 4.591495e-41}; 
   
   TH1D *hRpt2_Fe_stack_2 = new TH1D("hRpt2_Fe_stack_2","Pt^{2} solid data",5, xAxis31);
   hRpt2_Fe_stack_2->SetBinContent(6,0.5014719);
   hRpt2_Fe_stack_2->SetBinError(6,0.03067456);

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
   hRpt2_Fe_stack_2->GetYaxis()->SetTitle("dN/dPt^{2}");
   hRpt2_Fe_stack_2->GetYaxis()->SetLabelFont(22);
   hRpt2_Fe_stack_2->GetYaxis()->SetLabelSize(0.05);
   hRpt2_Fe_stack_2->GetYaxis()->SetTitleSize(0.05);
   hRpt2_Fe_stack_2->GetYaxis()->SetTitleFont(22);
   hRpt2_Fe_stack_2->GetZaxis()->SetLabelFont(22);
   hRpt2_Fe_stack_2->GetZaxis()->SetLabelSize(0.05);
   hRpt2_Fe_stack_2->GetZaxis()->SetTitleSize(0.05);
   hRpt2_Fe_stack_2->GetZaxis()->SetTitleFont(22);
   R_pt2->Add(hRpt2_Fe_stack_2,"");
   Double_t xAxis32[6] = {0, 0.18, 0.36, 0.54, 1.5, 4.591495e-41}; 
   
   TH1D *hRpt2_Pb_stack_3 = new TH1D("hRpt2_Pb_stack_3","Pt^{2} solid data",5, xAxis32);
   hRpt2_Pb_stack_3->SetBinContent(6,0.4420473);
   hRpt2_Pb_stack_3->SetBinError(6,0.03893267);
   hRpt2_Pb_stack_3->SetLineWidth(2);
   hRpt2_Pb_stack_3->SetMarkerStyle(8);
   hRpt2_Pb_stack_3->SetMarkerSize(2);
   hRpt2_Pb_stack_3->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hRpt2_Pb_stack_3->GetXaxis()->SetLabelFont(22);
   hRpt2_Pb_stack_3->GetXaxis()->SetLabelSize(0.05);
   hRpt2_Pb_stack_3->GetXaxis()->SetTitleSize(0.05);
   hRpt2_Pb_stack_3->GetXaxis()->SetTitleFont(22);
   hRpt2_Pb_stack_3->GetYaxis()->SetTitle("dN/dPt^{2}");
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
