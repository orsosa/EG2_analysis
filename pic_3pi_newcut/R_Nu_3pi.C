void R_Nu_3pi()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:57:48 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(1.858333,-0.1029049,4.591667,0.9261444);
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
   
   TH1F *R_nu_stack_4 = new TH1F("R_nu_stack_4","Multiplicity ratios nu",6,2.2,4.25);
   R_nu_stack_4->SetMinimum(0);
   R_nu_stack_4->SetMaximum(0.8232394);
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
   
   
   TH1D *hRnu_C_stack_1 = new TH1D("hRnu_C_stack_1","#un solid data",6,2.2,4.25);
   hRnu_C_stack_1->SetBinContent(1,0.4259259);
   hRnu_C_stack_1->SetBinContent(2,0.5084034);
   hRnu_C_stack_1->SetBinContent(3,0.5);
   hRnu_C_stack_1->SetBinContent(4,0.7345455);
   hRnu_C_stack_1->SetBinContent(5,0.7840376);
   hRnu_C_stack_1->SetBinContent(6,0.7807018);
   hRnu_C_stack_1->SetBinError(1,0.1060519);
   hRnu_C_stack_1->SetBinError(2,0.05676419);
   hRnu_C_stack_1->SetBinError(3,0.05120916);
   hRnu_C_stack_1->SetBinError(4,0.06806688);
   hRnu_C_stack_1->SetBinError(5,0.08103649);
   hRnu_C_stack_1->SetBinError(6,0.1104297);
   hRnu_C_stack_1->SetEntries(344.311);

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
   hRnu_C_stack_1->GetYaxis()->SetTitle("dN/d#nu");
   hRnu_C_stack_1->GetYaxis()->SetLabelFont(22);
   hRnu_C_stack_1->GetYaxis()->SetLabelSize(0.05);
   hRnu_C_stack_1->GetYaxis()->SetTitleSize(0.05);
   hRnu_C_stack_1->GetYaxis()->SetTitleFont(22);
   hRnu_C_stack_1->GetZaxis()->SetLabelFont(22);
   hRnu_C_stack_1->GetZaxis()->SetLabelSize(0.05);
   hRnu_C_stack_1->GetZaxis()->SetTitleSize(0.05);
   hRnu_C_stack_1->GetZaxis()->SetTitleFont(22);
   R_nu->Add(hRnu_C_stack_1,"");
   
   TH1D *hRnu_Fe_stack_2 = new TH1D("hRnu_Fe_stack_2","#un solid data",6,2.2,4.25);
   hRnu_Fe_stack_2->SetBinContent(1,0.35);
   hRnu_Fe_stack_2->SetBinContent(2,0.3820225);
   hRnu_Fe_stack_2->SetBinContent(3,0.4702259);
   hRnu_Fe_stack_2->SetBinContent(4,0.4439919);
   hRnu_Fe_stack_2->SetBinContent(5,0.4949495);
   hRnu_Fe_stack_2->SetBinContent(6,0.4147465);
   hRnu_Fe_stack_2->SetBinError(1,0.06873864);
   hRnu_Fe_stack_2->SetBinError(2,0.03851031);
   hRnu_Fe_stack_2->SetBinError(3,0.03767739);
   hRnu_Fe_stack_2->SetBinError(4,0.03613509);
   hRnu_Fe_stack_2->SetBinError(5,0.04322611);
   hRnu_Fe_stack_2->SetBinError(6,0.0519997);
   hRnu_Fe_stack_2->SetEntries(483.7026);

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
   hRnu_Fe_stack_2->GetYaxis()->SetTitle("dN/d#nu");
   hRnu_Fe_stack_2->GetYaxis()->SetLabelFont(22);
   hRnu_Fe_stack_2->GetYaxis()->SetLabelSize(0.05);
   hRnu_Fe_stack_2->GetYaxis()->SetTitleSize(0.05);
   hRnu_Fe_stack_2->GetYaxis()->SetTitleFont(22);
   hRnu_Fe_stack_2->GetZaxis()->SetLabelFont(22);
   hRnu_Fe_stack_2->GetZaxis()->SetLabelSize(0.05);
   hRnu_Fe_stack_2->GetZaxis()->SetTitleSize(0.05);
   hRnu_Fe_stack_2->GetZaxis()->SetTitleFont(22);
   R_nu->Add(hRnu_Fe_stack_2,"");
   
   TH1D *hRnu_Pb_stack_3 = new TH1D("hRnu_Pb_stack_3","#un solid data",6,2.2,4.25);
   hRnu_Pb_stack_3->SetBinContent(1,0.2);
   hRnu_Pb_stack_3->SetBinContent(2,0.2159763);
   hRnu_Pb_stack_3->SetBinContent(3,0.1648107);
   hRnu_Pb_stack_3->SetBinContent(4,0.1469298);
   hRnu_Pb_stack_3->SetBinContent(5,0.1970588);
   hRnu_Pb_stack_3->SetBinContent(6,0.1346154);
   hRnu_Pb_stack_3->SetBinError(1,0.05477226);
   hRnu_Pb_stack_3->SetBinError(2,0.02787451);
   hRnu_Pb_stack_3->SetBinError(3,0.02067746);
   hRnu_Pb_stack_3->SetBinError(4,0.01922388);
   hRnu_Pb_stack_3->SetBinError(5,0.02634003);
   hRnu_Pb_stack_3->SetBinError(6,0.02709817);
   hRnu_Pb_stack_3->SetEntries(186.9827);
   hRnu_Pb_stack_3->SetLineWidth(2);
   hRnu_Pb_stack_3->SetMarkerStyle(8);
   hRnu_Pb_stack_3->SetMarkerSize(2);
   hRnu_Pb_stack_3->GetXaxis()->SetTitle("#nu (GeV)");
   hRnu_Pb_stack_3->GetXaxis()->SetLabelFont(22);
   hRnu_Pb_stack_3->GetXaxis()->SetLabelSize(0.05);
   hRnu_Pb_stack_3->GetXaxis()->SetTitleSize(0.05);
   hRnu_Pb_stack_3->GetXaxis()->SetTitleFont(22);
   hRnu_Pb_stack_3->GetYaxis()->SetTitle("dN/d#nu");
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
