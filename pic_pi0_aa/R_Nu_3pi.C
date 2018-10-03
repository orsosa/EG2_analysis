void R_Nu_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:11:01 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(1.858333,-0.1132641,4.591667,1.019377);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack *R_nu = new THStack();
   R_nu->SetName("R_nu");
   R_nu->SetTitle("Multiplicity ratios nu");
   Double_t xAxis37[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1F *R_nu_stack_4 = new TH1F("R_nu_stack_4","Multiplicity ratios nu",5, xAxis37);
   R_nu_stack_4->SetMinimum(0);
   R_nu_stack_4->SetMaximum(0.9061129);
   R_nu_stack_4->SetDirectory(0);
   R_nu_stack_4->SetStats(0);
   R_nu_stack_4->SetLineWidth(2);
   R_nu_stack_4->GetXaxis()->SetLabelFont(22);
   R_nu_stack_4->GetXaxis()->SetLabelSize(0.05);
   R_nu_stack_4->GetXaxis()->SetTitleSize(0.05);
   R_nu_stack_4->GetXaxis()->SetTitleFont(22);
   R_nu_stack_4->GetYaxis()->SetLabelFont(22);
   R_nu_stack_4->GetYaxis()->SetLabelSize(0.05);
   R_nu_stack_4->GetYaxis()->SetTitleSize(0.05);
   R_nu_stack_4->GetYaxis()->SetTitleFont(22);
   R_nu_stack_4->GetZaxis()->SetLabelFont(22);
   R_nu_stack_4->GetZaxis()->SetLabelSize(0.05);
   R_nu_stack_4->GetZaxis()->SetTitleSize(0.05);
   R_nu_stack_4->GetZaxis()->SetTitleFont(22);
   R_nu->SetHistogram(R_nu_stack_4);
   
   Double_t xAxis38[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hRnu_C_stack_1 = new TH1D("hRnu_C_stack_1","Multiplicity Ratio",5, xAxis38);
   hRnu_C_stack_1->SetBinContent(1,0.8258418);
   hRnu_C_stack_1->SetBinContent(2,0.8255781);
   hRnu_C_stack_1->SetBinContent(3,0.8329315);
   hRnu_C_stack_1->SetBinContent(4,0.8411285);
   hRnu_C_stack_1->SetBinContent(5,0.8629647);
   hRnu_C_stack_1->SetBinError(1,0.004968977);
   hRnu_C_stack_1->SetBinError(2,0.004311154);
   hRnu_C_stack_1->SetBinError(3,0.004039321);
   hRnu_C_stack_1->SetBinError(4,0.004642644);
   hRnu_C_stack_1->SetBinError(5,0.004881161);
   hRnu_C_stack_1->SetEntries(167120.2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hRnu_C_stack_1->SetLineColor(ci);
   hRnu_C_stack_1->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hRnu_C_stack_1->SetMarkerColor(ci);
   hRnu_C_stack_1->SetMarkerStyle(8);
   hRnu_C_stack_1->SetMarkerSize(2);
   hRnu_C_stack_1->GetXaxis()->SetTitle("#nu (GeV)");
   hRnu_C_stack_1->GetXaxis()->SetLabelFont(22);
   hRnu_C_stack_1->GetXaxis()->SetLabelSize(0.05);
   hRnu_C_stack_1->GetXaxis()->SetTitleSize(0.05);
   hRnu_C_stack_1->GetXaxis()->SetTitleFont(22);
   hRnu_C_stack_1->GetYaxis()->SetTitle("R^{A}_{D}");
   hRnu_C_stack_1->GetYaxis()->SetLabelFont(22);
   hRnu_C_stack_1->GetYaxis()->SetLabelSize(0.05);
   hRnu_C_stack_1->GetYaxis()->SetTitleSize(0.05);
   hRnu_C_stack_1->GetYaxis()->SetTitleFont(22);
   hRnu_C_stack_1->GetZaxis()->SetLabelFont(22);
   hRnu_C_stack_1->GetZaxis()->SetLabelSize(0.05);
   hRnu_C_stack_1->GetZaxis()->SetTitleSize(0.05);
   hRnu_C_stack_1->GetZaxis()->SetTitleFont(22);
   R_nu->Add(hRnu_C_stack_1,"");
   Double_t xAxis39[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hRnu_Fe_stack_2 = new TH1D("hRnu_Fe_stack_2","Multiplicity Ratio",5, xAxis39);
   hRnu_Fe_stack_2->SetBinContent(1,0.6036643);
   hRnu_Fe_stack_2->SetBinContent(2,0.5978234);
   hRnu_Fe_stack_2->SetBinContent(3,0.6209032);
   hRnu_Fe_stack_2->SetBinContent(4,0.6231083);
   hRnu_Fe_stack_2->SetBinContent(5,0.64212);
   hRnu_Fe_stack_2->SetBinError(1,0.003089585);
   hRnu_Fe_stack_2->SetBinError(2,0.002596427);
   hRnu_Fe_stack_2->SetBinError(3,0.002473863);
   hRnu_Fe_stack_2->SetBinError(4,0.002808836);
   hRnu_Fe_stack_2->SetBinError(5,0.003002473);
   hRnu_Fe_stack_2->SetEntries(242509.8);

   ci = TColor::GetColor("#0000ff");
   hRnu_Fe_stack_2->SetLineColor(ci);
   hRnu_Fe_stack_2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hRnu_Fe_stack_2->SetMarkerColor(ci);
   hRnu_Fe_stack_2->SetMarkerStyle(8);
   hRnu_Fe_stack_2->SetMarkerSize(2);
   hRnu_Fe_stack_2->GetXaxis()->SetTitle("#nu (GeV)");
   hRnu_Fe_stack_2->GetXaxis()->SetLabelFont(22);
   hRnu_Fe_stack_2->GetXaxis()->SetLabelSize(0.05);
   hRnu_Fe_stack_2->GetXaxis()->SetTitleSize(0.05);
   hRnu_Fe_stack_2->GetXaxis()->SetTitleFont(22);
   hRnu_Fe_stack_2->GetYaxis()->SetTitle("R^{A}_{D}");
   hRnu_Fe_stack_2->GetYaxis()->SetLabelFont(22);
   hRnu_Fe_stack_2->GetYaxis()->SetLabelSize(0.05);
   hRnu_Fe_stack_2->GetYaxis()->SetTitleSize(0.05);
   hRnu_Fe_stack_2->GetYaxis()->SetTitleFont(22);
   hRnu_Fe_stack_2->GetZaxis()->SetLabelFont(22);
   hRnu_Fe_stack_2->GetZaxis()->SetLabelSize(0.05);
   hRnu_Fe_stack_2->GetZaxis()->SetTitleSize(0.05);
   hRnu_Fe_stack_2->GetZaxis()->SetTitleFont(22);
   R_nu->Add(hRnu_Fe_stack_2,"");
   Double_t xAxis40[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hRnu_Pb_stack_3 = new TH1D("hRnu_Pb_stack_3","Multiplicity Ratio",5, xAxis40);
   hRnu_Pb_stack_3->SetBinContent(1,0.4389623);
   hRnu_Pb_stack_3->SetBinContent(2,0.4506785);
   hRnu_Pb_stack_3->SetBinContent(3,0.4678897);
   hRnu_Pb_stack_3->SetBinContent(4,0.4777116);
   hRnu_Pb_stack_3->SetBinContent(5,0.4984624);
   hRnu_Pb_stack_3->SetBinError(1,0.003465105);
   hRnu_Pb_stack_3->SetBinError(2,0.003058986);
   hRnu_Pb_stack_3->SetBinError(3,0.00294925);
   hRnu_Pb_stack_3->SetBinError(4,0.003410051);
   hRnu_Pb_stack_3->SetBinError(5,0.003591764);
   hRnu_Pb_stack_3->SetEntries(99762.09);
   hRnu_Pb_stack_3->SetLineWidth(2);
   hRnu_Pb_stack_3->SetMarkerStyle(8);
   hRnu_Pb_stack_3->SetMarkerSize(2);
   hRnu_Pb_stack_3->GetXaxis()->SetTitle("#nu (GeV)");
   hRnu_Pb_stack_3->GetXaxis()->SetLabelFont(22);
   hRnu_Pb_stack_3->GetXaxis()->SetLabelSize(0.05);
   hRnu_Pb_stack_3->GetXaxis()->SetTitleSize(0.05);
   hRnu_Pb_stack_3->GetXaxis()->SetTitleFont(22);
   hRnu_Pb_stack_3->GetYaxis()->SetTitle("R^{A}_{D}");
   hRnu_Pb_stack_3->GetYaxis()->SetLabelFont(22);
   hRnu_Pb_stack_3->GetYaxis()->SetLabelSize(0.05);
   hRnu_Pb_stack_3->GetYaxis()->SetTitleSize(0.05);
   hRnu_Pb_stack_3->GetYaxis()->SetTitleFont(22);
   hRnu_Pb_stack_3->GetZaxis()->SetLabelFont(22);
   hRnu_Pb_stack_3->GetZaxis()->SetLabelSize(0.05);
   hRnu_Pb_stack_3->GetZaxis()->SetTitleSize(0.05);
   hRnu_Pb_stack_3->GetZaxis()->SetTitleFont(22);
   R_nu->Add(hRnu_Pb_stack_3,"");
   R_nu->Draw("nostack");
   
   TPaveText *pt = new TPaveText(0.01,0.9398649,0.3623529,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Multiplicity ratios nu");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
