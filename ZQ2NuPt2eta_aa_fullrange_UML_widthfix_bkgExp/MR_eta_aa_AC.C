void MR_eta_aa_AC()
{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Feb 16 17:54:34 2018) by ROOT version 6.12/04
   TCanvas *c1 = new TCanvas("c1", "c1",0,64,1366,704);
   c1->Range(0.3,-0.2076009,1.1,1.868408);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   THStack * hs= new THStack();
   hs->SetName("hs");
   hs->SetTitle("hs");
   Double_t xAxis1[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_1 = new TH1F("_stack_1","",6, xAxis1);
   _stack_1->SetMinimum(0);
   _stack_1->SetMaximum(1.660807);
   _stack_1->SetDirectory(0);
   _stack_1->SetStats(0);
   _stack_1->SetLineWidth(2);
   _stack_1->GetXaxis()->SetTitle("Z");
   _stack_1->GetXaxis()->SetLabelFont(22);
   _stack_1->GetXaxis()->SetLabelSize(0.03);
   _stack_1->GetXaxis()->SetTitleSize(0.035);
   _stack_1->GetXaxis()->SetTitleFont(22);
   _stack_1->GetYaxis()->SetTitle("Multiplicity ratio");
   _stack_1->GetYaxis()->SetLabelFont(22);
   _stack_1->GetYaxis()->SetLabelSize(0.03);
   _stack_1->GetYaxis()->SetTitleSize(0.035);
   _stack_1->GetYaxis()->SetTitleOffset(0);
   _stack_1->GetYaxis()->SetTitleFont(22);
   _stack_1->GetZaxis()->SetLabelFont(22);
   _stack_1->GetZaxis()->SetLabelSize(0.03);
   _stack_1->GetZaxis()->SetTitleSize(0.035);
   _stack_1->GetZaxis()->SetTitleFont(22);
   hs->SetHistogram(_stack_1);
   
   Double_t xAxis2[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMR_Fe_stack_1 = new TH1F("hMR_Fe_stack_1","hMR_Fe",6, xAxis2);
   hMR_Fe_stack_1->SetBinContent(1,1.040035);
   hMR_Fe_stack_1->SetBinContent(2,1.151543);
   hMR_Fe_stack_1->SetBinContent(3,0.8242561);
   hMR_Fe_stack_1->SetBinContent(4,0.7987307);
   hMR_Fe_stack_1->SetBinContent(5,0.8889728);
   hMR_Fe_stack_1->SetBinContent(6,0.6816233);
   hMR_Fe_stack_1->SetBinError(1,0.001483561);
   hMR_Fe_stack_1->SetBinError(2,0.001690727);
   hMR_Fe_stack_1->SetBinError(3,0.001666348);
   hMR_Fe_stack_1->SetBinError(4,0.001915957);
   hMR_Fe_stack_1->SetBinError(5,0.001829176);
   hMR_Fe_stack_1->SetBinError(6,0.001667408);
   hMR_Fe_stack_1->SetEntries(6);
   hMR_Fe_stack_1->SetDirectory(0);
   hMR_Fe_stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hMR_Fe_stack_1->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe_stack_1->SetMarkerColor(ci);
   hMR_Fe_stack_1->SetMarkerStyle(8);
   hMR_Fe_stack_1->GetXaxis()->SetTitle("Z");
   hMR_Fe_stack_1->GetXaxis()->SetLabelFont(42);
   hMR_Fe_stack_1->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe_stack_1->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe_stack_1->GetXaxis()->SetTitleFont(42);
   hMR_Fe_stack_1->GetYaxis()->SetTitle("R(Z)");
   hMR_Fe_stack_1->GetYaxis()->SetLabelFont(42);
   hMR_Fe_stack_1->GetYaxis()->SetLabelSize(0.035);
   hMR_Fe_stack_1->GetYaxis()->SetTitleSize(0.035);
   hMR_Fe_stack_1->GetYaxis()->SetTitleOffset(1.1);
   hMR_Fe_stack_1->GetYaxis()->SetTitleFont(42);
   hMR_Fe_stack_1->GetZaxis()->SetLabelFont(42);
   hMR_Fe_stack_1->GetZaxis()->SetLabelSize(0.035);
   hMR_Fe_stack_1->GetZaxis()->SetTitleSize(0.035);
   hMR_Fe_stack_1->GetZaxis()->SetTitleFont(42);
   hs->Add(hMR_Fe_stack_1,"");
   Double_t xAxis3[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMR_C_stack_2 = new TH1F("hMR_C_stack_2","hMR_C",6, xAxis3);
   hMR_C_stack_2->SetBinContent(1,1.306186);
   hMR_C_stack_2->SetBinContent(2,1.581721);
   hMR_C_stack_2->SetBinContent(3,1.389695);
   hMR_C_stack_2->SetBinContent(4,1.444917);
   hMR_C_stack_2->SetBinContent(5,1.228025);
   hMR_C_stack_2->SetBinContent(6,0.9317995);
   hMR_C_stack_2->SetBinError(1,0.002458724);
   hMR_C_stack_2->SetBinError(2,0.003091207);
   hMR_C_stack_2->SetBinError(3,0.003745143);
   hMR_C_stack_2->SetBinError(4,0.004693898);
   hMR_C_stack_2->SetBinError(5,0.003416118);
   hMR_C_stack_2->SetBinError(6,0.002730144);
   hMR_C_stack_2->SetEntries(6);
   hMR_C_stack_2->SetDirectory(0);
   hMR_C_stack_2->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hMR_C_stack_2->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hMR_C_stack_2->SetMarkerColor(ci);
   hMR_C_stack_2->SetMarkerStyle(8);
   hMR_C_stack_2->GetXaxis()->SetTitle("Z");
   hMR_C_stack_2->GetXaxis()->SetLabelFont(42);
   hMR_C_stack_2->GetXaxis()->SetLabelSize(0.035);
   hMR_C_stack_2->GetXaxis()->SetTitleSize(0.035);
   hMR_C_stack_2->GetXaxis()->SetTitleFont(42);
   hMR_C_stack_2->GetYaxis()->SetTitle("R(Z)");
   hMR_C_stack_2->GetYaxis()->SetLabelFont(42);
   hMR_C_stack_2->GetYaxis()->SetLabelSize(0.035);
   hMR_C_stack_2->GetYaxis()->SetTitleSize(0.035);
   hMR_C_stack_2->GetYaxis()->SetTitleOffset(1.1);
   hMR_C_stack_2->GetYaxis()->SetTitleFont(42);
   hMR_C_stack_2->GetZaxis()->SetLabelFont(42);
   hMR_C_stack_2->GetZaxis()->SetLabelSize(0.035);
   hMR_C_stack_2->GetZaxis()->SetTitleSize(0.035);
   hMR_C_stack_2->GetZaxis()->SetTitleFont(42); 
   hs->Add(hMR_C_stack_2,"");
   Double_t xAxis4[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMR_Pb_stack_3 = new TH1F("hMR_Pb_stack_3","hMR_Pb",6, xAxis4);
   hMR_Pb_stack_3->SetBinContent(1,0.7017927);
   hMR_Pb_stack_3->SetBinContent(2,0.9820273);
   hMR_Pb_stack_3->SetBinContent(3,0.6731657);
   hMR_Pb_stack_3->SetBinContent(4,0.7448519);
   hMR_Pb_stack_3->SetBinContent(5,0.695083);
   hMR_Pb_stack_3->SetBinContent(6,0.490926);
   hMR_Pb_stack_3->SetBinError(1,0.0007029531);
   hMR_Pb_stack_3->SetBinError(2,0.000880952);
   hMR_Pb_stack_3->SetBinError(3,0.0009463658);
   hMR_Pb_stack_3->SetBinError(4,0.001139509);
   hMR_Pb_stack_3->SetBinError(5,0.0009647466);
   hMR_Pb_stack_3->SetBinError(6,0.0007705151);
   hMR_Pb_stack_3->SetEntries(6);
   hMR_Pb_stack_3->SetDirectory(0);
   hMR_Pb_stack_3->SetStats(0);
   hMR_Pb_stack_3->SetMarkerStyle(8);
   hMR_Pb_stack_3->GetXaxis()->SetTitle("Z");
   hMR_Pb_stack_3->GetXaxis()->SetLabelFont(42);
   hMR_Pb_stack_3->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb_stack_3->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb_stack_3->GetXaxis()->SetTitleFont(42);
   hMR_Pb_stack_3->GetYaxis()->SetTitle("R(Z)");
   hMR_Pb_stack_3->GetYaxis()->SetLabelFont(42);
   hMR_Pb_stack_3->GetYaxis()->SetLabelSize(0.035);
   hMR_Pb_stack_3->GetYaxis()->SetTitleSize(0.035);
   hMR_Pb_stack_3->GetYaxis()->SetTitleOffset(1.1);
   hMR_Pb_stack_3->GetYaxis()->SetTitleFont(42);
   hMR_Pb_stack_3->GetZaxis()->SetLabelFont(42);
   hMR_Pb_stack_3->GetZaxis()->SetLabelSize(0.035);
   hMR_Pb_stack_3->GetZaxis()->SetTitleSize(0.035);
   hMR_Pb_stack_3->GetZaxis()->SetTitleFont(42);
   hs->Add(hMR_Pb_stack_3,"");
   hs->Draw("nostack");
   
   hs = new THStack();
   hs->SetName("hs");
   hs->SetTitle("hs");
   Double_t xAxis5[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_2 = new TH1F("_stack_2","",6, xAxis5);
   _stack_2->SetMinimum(0);
   _stack_2->SetMaximum(1.087434);
   _stack_2->SetDirectory(0);
   _stack_2->SetStats(0);
   _stack_2->SetLineWidth(2);
   _stack_2->GetXaxis()->SetLabelFont(22);
   _stack_2->GetXaxis()->SetLabelSize(0.03);
   _stack_2->GetXaxis()->SetTitleSize(0.035);
   _stack_2->GetXaxis()->SetTitleFont(22);
   _stack_2->GetYaxis()->SetLabelFont(22);
   _stack_2->GetYaxis()->SetLabelSize(0.03);
   _stack_2->GetYaxis()->SetTitleSize(0.035);
   _stack_2->GetYaxis()->SetTitleOffset(0);
   _stack_2->GetYaxis()->SetTitleFont(22);
   _stack_2->GetZaxis()->SetLabelFont(22);
   _stack_2->GetZaxis()->SetLabelSize(0.03);
   _stack_2->GetZaxis()->SetTitleSize(0.035);
   _stack_2->GetZaxis()->SetTitleFont(22);
   hs->SetHistogram(_stack_2);
   
   Double_t xAxis6[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMR_Fe_stack_2 = new TH1F("hMR_Fe_stack_2","hMR_Fe",6, xAxis6);
   hMR_Fe_stack_2->SetBinContent(1,0.6671259);
   hMR_Fe_stack_2->SetBinContent(2,0.6023644);
   hMR_Fe_stack_2->SetBinContent(3,0.574796);
   hMR_Fe_stack_2->SetBinContent(4,0.5100362);
   hMR_Fe_stack_2->SetBinContent(5,0.5563959);
   hMR_Fe_stack_2->SetBinContent(6,0.5719067);
   hMR_Fe_stack_2->SetBinError(1,0.02111752);
   hMR_Fe_stack_2->SetBinError(2,0.02674526);
   hMR_Fe_stack_2->SetBinError(3,0.03118857);
   hMR_Fe_stack_2->SetBinError(4,0.02952882);
   hMR_Fe_stack_2->SetBinError(5,0.03098205);
   hMR_Fe_stack_2->SetBinError(6,0.04752119);
   hMR_Fe_stack_2->SetEntries(6);
   hMR_Fe_stack_2->SetDirectory(0);
   hMR_Fe_stack_2->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe_stack_2->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hMR_Fe_stack_2->SetMarkerColor(ci);
   hMR_Fe_stack_2->SetMarkerStyle(25);
   hMR_Fe_stack_2->GetXaxis()->SetTitle("Z");
   hMR_Fe_stack_2->GetXaxis()->SetLabelFont(42);
   hMR_Fe_stack_2->GetXaxis()->SetLabelSize(0.035);
   hMR_Fe_stack_2->GetXaxis()->SetTitleSize(0.035);
   hMR_Fe_stack_2->GetXaxis()->SetTitleFont(42);
   hMR_Fe_stack_2->GetYaxis()->SetTitle("R(Z)");
   hMR_Fe_stack_2->GetYaxis()->SetLabelFont(42);
   hMR_Fe_stack_2->GetYaxis()->SetLabelSize(0.035);
   hMR_Fe_stack_2->GetYaxis()->SetTitleSize(0.035);
   hMR_Fe_stack_2->GetYaxis()->SetTitleOffset(1.1);
   hMR_Fe_stack_2->GetYaxis()->SetTitleFont(42);
   hMR_Fe_stack_2->GetZaxis()->SetLabelFont(42);
   hMR_Fe_stack_2->GetZaxis()->SetLabelSize(0.035);
   hMR_Fe_stack_2->GetZaxis()->SetTitleSize(0.035);
   hMR_Fe_stack_2->GetZaxis()->SetTitleFont(42);
   hs->Add(hMR_Fe_stack_2,"");
   Double_t xAxis7[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMR_C_stack_3 = new TH1F("hMR_C_stack_3","hMR_C",6, xAxis7);
   hMR_C_stack_3->SetBinContent(1,0.8378474);
   hMR_C_stack_3->SetBinContent(2,0.8273878);
   hMR_C_stack_3->SetBinContent(3,0.9691054);
   hMR_C_stack_3->SetBinContent(4,0.9226638);
   hMR_C_stack_3->SetBinContent(5,0.7686043);
   hMR_C_stack_3->SetBinContent(6,0.7818137);
   hMR_C_stack_3->SetBinError(1,0.03478984);
   hMR_C_stack_3->SetBinError(2,0.04761075);
   hMR_C_stack_3->SetBinError(3,0.06654577);
   hMR_C_stack_3->SetBinError(4,0.06684358);
   hMR_C_stack_3->SetBinError(5,0.05683512);
   hMR_C_stack_3->SetBinError(6,0.07718372);
   hMR_C_stack_3->SetEntries(6);
   hMR_C_stack_3->SetDirectory(0);
   hMR_C_stack_3->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hMR_C_stack_3->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hMR_C_stack_3->SetMarkerColor(ci);
   hMR_C_stack_3->SetMarkerStyle(25);
   hMR_C_stack_3->GetXaxis()->SetTitle("Z");
   hMR_C_stack_3->GetXaxis()->SetLabelFont(42);
   hMR_C_stack_3->GetXaxis()->SetLabelSize(0.035);
   hMR_C_stack_3->GetXaxis()->SetTitleSize(0.035);
   hMR_C_stack_3->GetXaxis()->SetTitleFont(42);
   hMR_C_stack_3->GetYaxis()->SetTitle("R(Z)");
   hMR_C_stack_3->GetYaxis()->SetLabelFont(42);
   hMR_C_stack_3->GetYaxis()->SetLabelSize(0.035);
   hMR_C_stack_3->GetYaxis()->SetTitleSize(0.035);
   hMR_C_stack_3->GetYaxis()->SetTitleOffset(1.1);
   hMR_C_stack_3->GetYaxis()->SetTitleFont(42);
   hMR_C_stack_3->GetZaxis()->SetLabelFont(42);
   hMR_C_stack_3->GetZaxis()->SetLabelSize(0.035);
   hMR_C_stack_3->GetZaxis()->SetTitleSize(0.035);
   hMR_C_stack_3->GetZaxis()->SetTitleFont(42);
   hs->Add(hMR_C_stack_3,"");
   Double_t xAxis8[7] = {0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMR_Pb_stack_4 = new TH1F("hMR_Pb_stack_4","hMR_Pb",6, xAxis8);
   hMR_Pb_stack_4->SetBinContent(1,0.4501619);
   hMR_Pb_stack_4->SetBinContent(2,0.513692);
   hMR_Pb_stack_4->SetBinContent(3,0.4694329);
   hMR_Pb_stack_4->SetBinContent(4,0.4756314);
   hMR_Pb_stack_4->SetBinContent(5,0.4350431);
   hMR_Pb_stack_4->SetBinContent(6,0.4119048);
   hMR_Pb_stack_4->SetBinError(1,0.01137596);
   hMR_Pb_stack_4->SetBinError(2,0.01580279);
   hMR_Pb_stack_4->SetBinError(3,0.01905885);
   hMR_Pb_stack_4->SetBinError(4,0.01868844);
   hMR_Pb_stack_4->SetBinError(5,0.01811583);
   hMR_Pb_stack_4->SetBinError(6,0.02282073);
   hMR_Pb_stack_4->SetEntries(6);
   hMR_Pb_stack_4->SetDirectory(0);
   hMR_Pb_stack_4->SetStats(0);
   hMR_Pb_stack_4->SetMarkerStyle(25);
   hMR_Pb_stack_4->GetXaxis()->SetTitle("Z");
   hMR_Pb_stack_4->GetXaxis()->SetLabelFont(42);
   hMR_Pb_stack_4->GetXaxis()->SetLabelSize(0.035);
   hMR_Pb_stack_4->GetXaxis()->SetTitleSize(0.035);
   hMR_Pb_stack_4->GetXaxis()->SetTitleFont(42);
   hMR_Pb_stack_4->GetYaxis()->SetTitle("R(Z)");
   hMR_Pb_stack_4->GetYaxis()->SetLabelFont(42);
   hMR_Pb_stack_4->GetYaxis()->SetLabelSize(0.035);
   hMR_Pb_stack_4->GetYaxis()->SetTitleSize(0.035);
   hMR_Pb_stack_4->GetYaxis()->SetTitleOffset(1.1);
   hMR_Pb_stack_4->GetYaxis()->SetTitleFont(42);
   hMR_Pb_stack_4->GetZaxis()->SetLabelFont(42);
   hMR_Pb_stack_4->GetZaxis()->SetLabelSize(0.035);
   hMR_Pb_stack_4->GetZaxis()->SetTitleSize(0.035);
   hMR_Pb_stack_4->GetZaxis()->SetTitleFont(42);
   hs->Add(hMR_Pb_stack_4,"");
   hs->Draw("nostacksame");
   
   TLegend *leg = new TLegend(0.8167155,0.6224189,0.9860704,0.9174041,NULL,"brNDC");
   leg->SetTextFont(22);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hMR_Fe_stack_2","hMR_Fe","lp");

   /*  ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   */
   entry=leg->AddEntry("hMR_C_stack_3","hMR_C","lp");
   /*
   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   */
   entry=leg->AddEntry("hMR_Pb_stack_4","hMR_Pb","lp");
   /*
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   */  
   entry=leg->AddEntry("hMR_Fe_stack_1","hMR_Fe + AC","lp");
   /*
   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   */
   entry=leg->AddEntry("hMR_C_stack_2","hMR_C + AC","lp");
   /*
   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   */
   entry=leg->AddEntry("hMR_Pb_stack_3","hMR_Pb + AC","lp");
   /*
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(1);
   entry->SetTextFont(22);
   */
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
