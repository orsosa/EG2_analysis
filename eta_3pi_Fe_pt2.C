void eta_3pi_Fe_pt2()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:03:57 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-0.1531475,1.75,1.378327);
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
   Double_t xAxis1[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hRpt2_Fe__2 = new TH1D("hRpt2_Fe__2","Multiplicity ratio for Fe",5, xAxis1);
   hRpt2_Fe__2->SetBinContent(1,0.4437032);
   hRpt2_Fe__2->SetBinContent(2,0.4837365);
   hRpt2_Fe__2->SetBinContent(3,0.4494572);
   hRpt2_Fe__2->SetBinContent(4,0.6175879);
   hRpt2_Fe__2->SetBinContent(5,0.9633029);
   hRpt2_Fe__2->SetBinError(1,0.04557223);
   hRpt2_Fe__2->SetBinError(2,0.04819641);
   hRpt2_Fe__2->SetBinError(3,0.0565372);
   hRpt2_Fe__2->SetBinError(4,0.1137674);
   hRpt2_Fe__2->SetBinError(5,0.2035349);
   hRpt2_Fe__2->SetEntries(141.1832);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hRpt2_Fe");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 141    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6191");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3805");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hRpt2_Fe__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hRpt2_Fe__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hRpt2_Fe__2->SetLineColor(ci);
   hRpt2_Fe__2->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hRpt2_Fe__2->SetMarkerColor(ci);
   hRpt2_Fe__2->SetMarkerStyle(8);
   hRpt2_Fe__2->SetMarkerSize(2);
   hRpt2_Fe__2->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hRpt2_Fe__2->GetXaxis()->SetLabelFont(22);
   hRpt2_Fe__2->GetXaxis()->SetLabelSize(0.05);
   hRpt2_Fe__2->GetXaxis()->SetTitleSize(0.05);
   hRpt2_Fe__2->GetXaxis()->SetTitleFont(22);
   hRpt2_Fe__2->GetYaxis()->SetTitle("R^{A}_{D}");
   hRpt2_Fe__2->GetYaxis()->SetLabelFont(22);
   hRpt2_Fe__2->GetYaxis()->SetLabelSize(0.05);
   hRpt2_Fe__2->GetYaxis()->SetTitleSize(0.05);
   hRpt2_Fe__2->GetYaxis()->SetTitleFont(22);
   hRpt2_Fe__2->GetZaxis()->SetLabelFont(22);
   hRpt2_Fe__2->GetZaxis()->SetLabelSize(0.05);
   hRpt2_Fe__2->GetZaxis()->SetTitleSize(0.05);
   hRpt2_Fe__2->GetZaxis()->SetTitleFont(22);
   hRpt2_Fe__2->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.9398649,0.3976471,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Multiplicity ratio for Fe");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
