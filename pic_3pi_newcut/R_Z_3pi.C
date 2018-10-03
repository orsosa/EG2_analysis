void R_Z_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:57:48 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(0.4166667,-0.119714,1.083333,1.077426);
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
   
   TH1F *R_z_stack_1 = new TH1F("R_z_stack_1","Multiplicity ratios Z",6,0.5,1);
   R_z_stack_1->SetMinimum(0);
   R_z_stack_1->SetMaximum(0.9577122);
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
   
   
   TH1D *hRz_C_stack_1 = new TH1D("hRz_C_stack_1","z solid data",6,0.5,1);
   hRz_C_stack_1->SetBinContent(1,0.9121069);
   hRz_C_stack_1->SetBinContent(2,0.6553877);
   hRz_C_stack_1->SetBinContent(3,0.667839);
   hRz_C_stack_1->SetBinContent(4,0.4717141);
   hRz_C_stack_1->SetBinContent(5,0.6994095);
   hRz_C_stack_1->SetBinContent(6,0.6761869);
   hRz_C_stack_1->SetBinError(1,0.06125141);
   hRz_C_stack_1->SetBinError(2,0.05864239);
   hRz_C_stack_1->SetBinError(3,0.08779975);
   hRz_C_stack_1->SetBinError(4,0.09997256);
   hRz_C_stack_1->SetBinError(5,0.1555016);
   hRz_C_stack_1->SetBinError(6,0.2817446);
   hRz_C_stack_1->SetEntries(129.7577);

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
   hRz_C_stack_1->GetYaxis()->SetTitle("dN/dz");
   hRz_C_stack_1->GetYaxis()->SetLabelFont(22);
   hRz_C_stack_1->GetYaxis()->SetLabelSize(0.05);
   hRz_C_stack_1->GetYaxis()->SetTitleSize(0.05);
   hRz_C_stack_1->GetYaxis()->SetTitleFont(22);
   hRz_C_stack_1->GetZaxis()->SetLabelFont(22);
   hRz_C_stack_1->GetZaxis()->SetLabelSize(0.05);
   hRz_C_stack_1->GetZaxis()->SetTitleSize(0.05);
   hRz_C_stack_1->GetZaxis()->SetTitleFont(22);
   R_z->Add(hRz_C_stack_1,"");
   
   TH1D *hRz_Fe_stack_2 = new TH1D("hRz_Fe_stack_2","z solid data",6,0.5,1);
   hRz_Fe_stack_2->SetBinContent(1,0.5545887);
   hRz_Fe_stack_2->SetBinContent(2,0.4468075);
   hRz_Fe_stack_2->SetBinContent(3,0.4084049);
   hRz_Fe_stack_2->SetBinContent(4,0.3759231);
   hRz_Fe_stack_2->SetBinContent(5,0.519004);
   hRz_Fe_stack_2->SetBinContent(6,0.3829279);
   hRz_Fe_stack_2->SetBinError(1,0.03136968);
   hRz_Fe_stack_2->SetBinError(2,0.03555605);
   hRz_Fe_stack_2->SetBinError(3,0.04459187);
   hRz_Fe_stack_2->SetBinError(4,0.05818277);
   hRz_Fe_stack_2->SetBinError(5,0.1095931);
   hRz_Fe_stack_2->SetBinError(6,0.157177);
   hRz_Fe_stack_2->SetEntries(162.9217);

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
   hRz_Fe_stack_2->GetYaxis()->SetTitle("dN/dz");
   hRz_Fe_stack_2->GetYaxis()->SetLabelFont(22);
   hRz_Fe_stack_2->GetYaxis()->SetLabelSize(0.05);
   hRz_Fe_stack_2->GetYaxis()->SetTitleSize(0.05);
   hRz_Fe_stack_2->GetYaxis()->SetTitleFont(22);
   hRz_Fe_stack_2->GetZaxis()->SetLabelFont(22);
   hRz_Fe_stack_2->GetZaxis()->SetLabelSize(0.05);
   hRz_Fe_stack_2->GetZaxis()->SetTitleSize(0.05);
   hRz_Fe_stack_2->GetZaxis()->SetTitleFont(22);
   R_z->Add(hRz_Fe_stack_2,"");
   
   TH1D *hRz_Pb_stack_3 = new TH1D("hRz_Pb_stack_3","z solid data",6,0.5,1);
   hRz_Pb_stack_3->SetBinContent(1,0.4153239);
   hRz_Pb_stack_3->SetBinContent(2,0.411738);
   hRz_Pb_stack_3->SetBinContent(3,0.4068295);
   hRz_Pb_stack_3->SetBinContent(4,0.3185341);
   hRz_Pb_stack_3->SetBinContent(5,0.611962);
   hRz_Pb_stack_3->SetBinContent(6,0.4079747);
   hRz_Pb_stack_3->SetBinError(1,0.03652414);
   hRz_Pb_stack_3->SetBinError(2,0.04896849);
   hRz_Pb_stack_3->SetBinError(3,0.06291659);
   hRz_Pb_stack_3->SetBinError(4,0.07404071);
   hRz_Pb_stack_3->SetBinError(5,0.1772663);
   hRz_Pb_stack_3->SetBinError(6,0.1975553);
   hRz_Pb_stack_3->SetEntries(79.12866);
   hRz_Pb_stack_3->SetLineWidth(2);
   hRz_Pb_stack_3->SetMarkerStyle(8);
   hRz_Pb_stack_3->SetMarkerSize(2);
   hRz_Pb_stack_3->GetXaxis()->SetTitle("z");
   hRz_Pb_stack_3->GetXaxis()->SetLabelFont(22);
   hRz_Pb_stack_3->GetXaxis()->SetLabelSize(0.05);
   hRz_Pb_stack_3->GetXaxis()->SetTitleSize(0.05);
   hRz_Pb_stack_3->GetXaxis()->SetTitleFont(22);
   hRz_Pb_stack_3->GetYaxis()->SetTitle("dN/dz");
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
