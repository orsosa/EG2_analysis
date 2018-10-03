void hNh_Pt2Fe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:58:45 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-8549.59,1.75,76946.3);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis11[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hpt2l__11 = new TH1D("hpt2l__11","Pt^{2} solid data",6, xAxis11);
   hpt2l__11->SetBinContent(1,49814);
   hpt2l__11->SetBinContent(2,64885);
   hpt2l__11->SetBinContent(3,51118);
   hpt2l__11->SetBinContent(4,32289);
   hpt2l__11->SetBinContent(5,22619);
   hpt2l__11->SetBinContent(6,15644);
   hpt2l__11->SetBinError(1,223.1905);
   hpt2l__11->SetBinError(2,254.7253);
   hpt2l__11->SetBinError(3,226.0929);
   hpt2l__11->SetBinError(4,179.6914);
   hpt2l__11->SetBinError(5,150.3961);
   hpt2l__11->SetBinError(6,125.076);
   hpt2l__11->SetEntries(236369);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 236369 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3146");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2521");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hpt2l__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hpt2l__11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hpt2l__11->SetLineColor(ci);
   hpt2l__11->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hpt2l__11->SetMarkerColor(ci);
   hpt2l__11->SetMarkerStyle(36);
   hpt2l__11->SetMarkerSize(2);
   hpt2l__11->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2l__11->GetXaxis()->SetLabelFont(22);
   hpt2l__11->GetXaxis()->SetLabelSize(0.05);
   hpt2l__11->GetXaxis()->SetTitleSize(0.05);
   hpt2l__11->GetXaxis()->SetTitleFont(22);
   hpt2l__11->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2l__11->GetYaxis()->SetLabelFont(22);
   hpt2l__11->GetYaxis()->SetLabelSize(0.05);
   hpt2l__11->GetYaxis()->SetTitleSize(0.05);
   hpt2l__11->GetYaxis()->SetTitleFont(22);
   hpt2l__11->GetZaxis()->SetLabelFont(22);
   hpt2l__11->GetZaxis()->SetLabelSize(0.05);
   hpt2l__11->GetZaxis()->SetTitleSize(0.05);
   hpt2l__11->GetZaxis()->SetTitleFont(22);
   hpt2l__11->Draw("p");
   Double_t xAxis12[7] = {0, 0.1, 0.25, 0.4, 0.55, 0.75, 1.5}; 
   
   TH1D *hpt2s__12 = new TH1D("hpt2s__12","Pt^{2} solid data",6, xAxis12);
   hpt2s__12->SetBinContent(1,24699);
   hpt2s__12->SetBinContent(2,33572);
   hpt2s__12->SetBinContent(3,27160);
   hpt2s__12->SetBinContent(4,18278);
   hpt2s__12->SetBinContent(5,14042);
   hpt2s__12->SetBinContent(6,12731);
   hpt2s__12->SetBinError(1,157.1592);
   hpt2s__12->SetBinError(2,183.2266);
   hpt2s__12->SetBinError(3,164.8029);
   hpt2s__12->SetBinError(4,135.1962);
   hpt2s__12->SetBinError(5,118.4989);
   hpt2s__12->SetBinError(6,112.8317);
   hpt2s__12->SetEntries(130482);

   ci = TColor::GetColor("#0000ff");
   hpt2s__12->SetLineColor(ci);
   hpt2s__12->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hpt2s__12->SetMarkerColor(ci);
   hpt2s__12->SetMarkerStyle(8);
   hpt2s__12->SetMarkerSize(2);
   hpt2s__12->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2s__12->GetXaxis()->SetLabelFont(22);
   hpt2s__12->GetXaxis()->SetLabelSize(0.05);
   hpt2s__12->GetXaxis()->SetTitleSize(0.05);
   hpt2s__12->GetXaxis()->SetTitleFont(22);
   hpt2s__12->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2s__12->GetYaxis()->SetLabelFont(22);
   hpt2s__12->GetYaxis()->SetLabelSize(0.05);
   hpt2s__12->GetYaxis()->SetTitleSize(0.05);
   hpt2s__12->GetYaxis()->SetTitleFont(22);
   hpt2s__12->GetZaxis()->SetLabelFont(22);
   hpt2s__12->GetZaxis()->SetLabelSize(0.05);
   hpt2s__12->GetZaxis()->SetTitleSize(0.05);
   hpt2s__12->GetZaxis()->SetTitleFont(22);
   hpt2s__12->Draw("samep");
   
   TPaveText *pt = new TPaveText(0.01,0.9414865,0.2456863,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Pt^{2} solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
