{
//=========Macro generated from canvas: c/c
//=========  (Fri Oct 13 01:54:06 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",0,66,1280,734);
   c->SetHighLightColor(2);
   c->Range(0.4375,-0.1875,1.0625,1.6875);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   THStack * = new THStack();
   ->SetName("");
   ->SetTitle("Multiplicity Ratio (#eta #rightarrow #pi^{+}#pi^{-}#pi^{0})");
   ->SetMaximum(1.5);
   Double_t xAxis1[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *_stack_1 = new TH1F("_stack_1","Multiplicity Ratio (#eta #rightarrow #pi^{+}#pi^{-}#pi^{0})",5, xAxis1);
   _stack_1->SetMinimum(0);
   _stack_1->SetMaximum(1.5);
   _stack_1->SetDirectory(0);
   _stack_1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _stack_1->SetLineColor(ci);
   _stack_1->GetXaxis()->SetTitle("Z");
   _stack_1->GetXaxis()->SetLabelFont(42);
   _stack_1->GetXaxis()->SetLabelSize(0.035);
   _stack_1->GetXaxis()->SetTitleSize(0.035);
   _stack_1->GetXaxis()->SetTitleFont(42);
   _stack_1->GetYaxis()->SetTitle("R");
   _stack_1->GetYaxis()->SetRange(1,1);
   _stack_1->GetYaxis()->SetLabelFont(42);
   _stack_1->GetYaxis()->SetLabelSize(0.035);
   _stack_1->GetYaxis()->SetTitleSize(0.035);
   _stack_1->GetYaxis()->SetTitleFont(42);
   _stack_1->GetZaxis()->SetLabelFont(42);
   _stack_1->GetZaxis()->SetLabelSize(0.035);
   _stack_1->GetZaxis()->SetTitleSize(0.035);
   _stack_1->GetZaxis()->SetTitleFont(42);
   ->SetHistogram(_stack_1);
   
   Double_t xAxis2[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMRatioProj__1 = new TH1F("hMRatioProj__1","Multiplicity Ratio (Z)",5, xAxis2);
   hMRatioProj__1->SetBinContent(1,1.295026);
   hMRatioProj__1->SetBinContent(2,0.9829433);
   hMRatioProj__1->SetBinContent(3,0.8694235);
   hMRatioProj__1->SetBinContent(4,0.8146514);
   hMRatioProj__1->SetBinContent(5,0.7692718);
   hMRatioProj__1->SetBinError(1,0.1876654);
   hMRatioProj__1->SetBinError(2,0.09588687);
   hMRatioProj__1->SetBinError(3,0.04282816);
   hMRatioProj__1->SetBinError(4,0.04011957);
   hMRatioProj__1->SetBinError(5,0.06655349);
   hMRatioProj__1->SetEntries(5);
   hMRatioProj__1->SetDirectory(0);
   hMRatioProj__1->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   hMRatioProj__1->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   hMRatioProj__1->SetMarkerColor(ci);
   hMRatioProj__1->SetMarkerStyle(20);
   hMRatioProj__1->SetMarkerSize(2);
   hMRatioProj__1->GetXaxis()->SetTitle("Z");
   hMRatioProj__1->GetXaxis()->SetLabelFont(42);
   hMRatioProj__1->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj__1->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj__1->GetXaxis()->SetTitleFont(42);
   hMRatioProj__1->GetYaxis()->SetTitle("R(Z)");
   hMRatioProj__1->GetYaxis()->SetLabelFont(42);
   hMRatioProj__1->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj__1->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj__1->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj__1->GetYaxis()->SetTitleFont(42);
   hMRatioProj__1->GetZaxis()->SetLabelFont(42);
   hMRatioProj__1->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj__1->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj__1->GetZaxis()->SetTitleFont(42);
   ->Add(hMRatioProj,"");
   Double_t xAxis3[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMRatioProj__2 = new TH1F("hMRatioProj__2","Multiplicity Ratio (Z)",5, xAxis3);
   hMRatioProj__2->SetBinContent(1,0.8198993);
   hMRatioProj__2->SetBinContent(2,0.6851665);
   hMRatioProj__2->SetBinContent(3,0.7078294);
   hMRatioProj__2->SetBinContent(4,0.5927842);
   hMRatioProj__2->SetBinContent(5,0.5089219);
   hMRatioProj__2->SetBinError(1,0.1600969);
   hMRatioProj__2->SetBinError(2,0.06266277);
   hMRatioProj__2->SetBinError(3,0.02373466);
   hMRatioProj__2->SetBinError(4,0.02553093);
   hMRatioProj__2->SetBinError(5,0.02862713);
   hMRatioProj__2->SetEntries(5);
   hMRatioProj__2->SetDirectory(0);
   hMRatioProj__2->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hMRatioProj__2->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   hMRatioProj__2->SetMarkerColor(ci);
   hMRatioProj__2->SetMarkerStyle(8);
   hMRatioProj__2->SetMarkerSize(2);
   hMRatioProj__2->GetXaxis()->SetTitle("Z");
   hMRatioProj__2->GetXaxis()->SetLabelFont(42);
   hMRatioProj__2->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetXaxis()->SetTitleFont(42);
   hMRatioProj__2->GetYaxis()->SetTitle("R(Z)");
   hMRatioProj__2->GetYaxis()->SetLabelFont(42);
   hMRatioProj__2->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj__2->GetYaxis()->SetTitleFont(42);
   hMRatioProj__2->GetZaxis()->SetLabelFont(42);
   hMRatioProj__2->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj__2->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj__2->GetZaxis()->SetTitleFont(42);
   ->Add(hMRatioProj,"");
   Double_t xAxis4[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1F *hMRatioProj = new TH1F("hMRatioProj","Multiplicity Ratio (Z)",5, xAxis4);
   hMRatioProj->SetBinContent(1,0.3765382);
   hMRatioProj->SetBinContent(2,0.4273491);
   hMRatioProj->SetBinContent(3,0.4378216);
   hMRatioProj->SetBinContent(4,0.3219559);
   hMRatioProj->SetBinContent(5,0.25719);
   hMRatioProj->SetBinError(1,0.07968583);
   hMRatioProj->SetBinError(2,0.02993937);
   hMRatioProj->SetBinError(3,0.01534634);
   hMRatioProj->SetBinError(4,0.02209697);
   hMRatioProj->SetBinError(5,0.03587369);
   hMRatioProj->SetEntries(5);
   hMRatioProj->SetStats(0);
   hMRatioProj->SetMarkerStyle(8);
   hMRatioProj->SetMarkerSize(2);
   hMRatioProj->GetXaxis()->SetTitle("Z");
   hMRatioProj->GetXaxis()->SetLabelFont(42);
   hMRatioProj->GetXaxis()->SetLabelSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleSize(0.035);
   hMRatioProj->GetXaxis()->SetTitleFont(42);
   hMRatioProj->GetYaxis()->SetTitle("R(Z)");
   hMRatioProj->GetYaxis()->SetLabelFont(42);
   hMRatioProj->GetYaxis()->SetLabelSize(0.035);
   hMRatioProj->GetYaxis()->SetTitleSize(0.035);
   hMRatioProj->GetYaxis()->SetTitleOffset(1.1);
   hMRatioProj->GetYaxis()->SetTitleFont(42);
   hMRatioProj->GetZaxis()->SetLabelFont(42);
   hMRatioProj->GetZaxis()->SetLabelSize(0.035);
   hMRatioProj->GetZaxis()->SetTitleSize(0.035);
   hMRatioProj->GetZaxis()->SetTitleFont(42);
   ->Add(hMRatioProj,"");
   ->Draw("nostack");
   
   TLegend *leg = new TLegend(0.6760563,0.6822034,0.7699531,0.8714689,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hMRatioProj","C","lp");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hMRatioProj","Fe","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("hMRatioProj","Pb","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(8);
   entry->SetMarkerSize(2);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.2998592,0.9339831,0.7126604,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Multiplicity Ratio (#eta #rightarrow #pi^{+}#pi^{-}#pi^{0})");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
