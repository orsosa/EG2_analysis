void R_Pt2_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:57:48 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.1666667,-0.205796,1.166667,1.852164);
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
   
   TH1F *R_pt2_stack_2 = new TH1F("R_pt2_stack_2","Multiplicity ratios pt2",6,0,1);
   R_pt2_stack_2->SetMinimum(0);
   R_pt2_stack_2->SetMaximum(1.646368);
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
   
   
   TH1D *hRpt2_C_stack_1 = new TH1D("hRpt2_C_stack_1","Pt^{2} solid data",6,0,1);
   hRpt2_C_stack_1->SetBinContent(1,0.5122292);
   hRpt2_C_stack_1->SetBinContent(2,0.7192681);
   hRpt2_C_stack_1->SetBinContent(3,0.8851902);
   hRpt2_C_stack_1->SetBinContent(4,1.20211);
   hRpt2_C_stack_1->SetBinContent(5,1.227687);
   hRpt2_C_stack_1->SetBinContent(6,1.56797);
   hRpt2_C_stack_1->SetBinContent(7,0.8784651);
   hRpt2_C_stack_1->SetBinError(1,0.04650692);
   hRpt2_C_stack_1->SetBinError(2,0.06187258);
   hRpt2_C_stack_1->SetBinError(3,0.09164303);
   hRpt2_C_stack_1->SetBinError(4,0.172613);
   hRpt2_C_stack_1->SetBinError(5,0.25193);
   hRpt2_C_stack_1->SetBinError(6,0.4345613);
   hRpt2_C_stack_1->SetBinError(7,0.2651351);
   hRpt2_C_stack_1->SetEntries(126.0942);

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
   
   TH1D *hRpt2_Fe_stack_2 = new TH1D("hRpt2_Fe_stack_2","Pt^{2} solid data",6,0,1);
   hRpt2_Fe_stack_2->SetBinContent(1,0.4202605);
   hRpt2_Fe_stack_2->SetBinContent(2,0.489882);
   hRpt2_Fe_stack_2->SetBinContent(3,0.462438);
   hRpt2_Fe_stack_2->SetBinContent(4,0.5300715);
   hRpt2_Fe_stack_2->SetBinContent(5,0.8807341);
   hRpt2_Fe_stack_2->SetBinContent(6,0.3440368);
   hRpt2_Fe_stack_2->SetBinContent(7,1.46789);
   hRpt2_Fe_stack_2->SetBinError(1,0.03093578);
   hRpt2_Fe_stack_2->SetBinError(2,0.03525492);
   hRpt2_Fe_stack_2->SetBinError(3,0.04153829);
   hRpt2_Fe_stack_2->SetBinError(4,0.0676335);
   hRpt2_Fe_stack_2->SetBinError(5,0.1525476);
   hRpt2_Fe_stack_2->SetBinError(6,0.1017674);
   hRpt2_Fe_stack_2->SetBinError(7,0.4237434);
   hRpt2_Fe_stack_2->SetEntries(232.1733);

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
   
   TH1D *hRpt2_Pb_stack_3 = new TH1D("hRpt2_Pb_stack_3","Pt^{2} solid data",6,0,1);
   hRpt2_Pb_stack_3->SetBinContent(1,0.3296273);
   hRpt2_Pb_stack_3->SetBinContent(2,0.3981315);
   hRpt2_Pb_stack_3->SetBinContent(3,0.4058399);
   hRpt2_Pb_stack_3->SetBinContent(4,0.5592962);
   hRpt2_Pb_stack_3->SetBinContent(5,0.5755751);
   hRpt2_Pb_stack_3->SetBinContent(6,0.5521257);
   hRpt2_Pb_stack_3->SetBinContent(7,1.135802);
   hRpt2_Pb_stack_3->SetBinError(1,0.03838869);
   hRpt2_Pb_stack_3->SetBinError(2,0.04179672);
   hRpt2_Pb_stack_3->SetBinError(3,0.05718763);
   hRpt2_Pb_stack_3->SetBinError(4,0.09958242);
   hRpt2_Pb_stack_3->SetBinError(5,0.1512669);
   hRpt2_Pb_stack_3->SetBinError(6,0.231755);
   hRpt2_Pb_stack_3->SetBinError(7,0.3988804);
   hRpt2_Pb_stack_3->SetEntries(85.54599);
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
