void hNh_Q2Fe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:37:40 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(0.4833333,-45794.99,4.616667,412154.9);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hq2l__13 = new TH1D("hq2l__13","Q^{2} solid data",12,1,4.1);
   hq2l__13->SetBinContent(1,348324);
   hq2l__13->SetBinContent(2,338155);
   hq2l__13->SetBinContent(3,253368);
   hq2l__13->SetBinContent(4,176649);
   hq2l__13->SetBinContent(5,118589);
   hq2l__13->SetBinContent(6,75428);
   hq2l__13->SetBinContent(7,50911);
   hq2l__13->SetBinContent(8,30553);
   hq2l__13->SetBinContent(9,16535);
   hq2l__13->SetBinContent(10,8341);
   hq2l__13->SetBinContent(11,3378);
   hq2l__13->SetBinContent(12,361);
   hq2l__13->SetBinError(1,590.1898);
   hq2l__13->SetBinError(2,581.511);
   hq2l__13->SetBinError(3,503.3567);
   hq2l__13->SetBinError(4,420.2963);
   hq2l__13->SetBinError(5,344.3675);
   hq2l__13->SetBinError(6,274.6416);
   hq2l__13->SetBinError(7,225.6347);
   hq2l__13->SetBinError(8,174.7942);
   hq2l__13->SetBinError(9,128.5885);
   hq2l__13->SetBinError(10,91.32908);
   hq2l__13->SetBinError(11,58.12056);
   hq2l__13->SetBinError(12,19);
   hq2l__13->SetEntries(1420592);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hq2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1420592");
   ptstats_LaTex = ptstats->AddText("Mean  =  1.669");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.5252");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hq2l__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hq2l__13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hq2l__13->SetLineColor(ci);
   hq2l__13->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hq2l__13->SetMarkerColor(ci);
   hq2l__13->SetMarkerStyle(36);
   hq2l__13->SetMarkerSize(2);
   hq2l__13->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hq2l__13->GetXaxis()->SetLabelFont(22);
   hq2l__13->GetXaxis()->SetLabelSize(0.05);
   hq2l__13->GetXaxis()->SetTitleSize(0.05);
   hq2l__13->GetXaxis()->SetTitleFont(22);
   hq2l__13->GetYaxis()->SetTitle("dN/dQ^{2}");
   hq2l__13->GetYaxis()->SetLabelFont(22);
   hq2l__13->GetYaxis()->SetLabelSize(0.05);
   hq2l__13->GetYaxis()->SetTitleSize(0.05);
   hq2l__13->GetYaxis()->SetTitleFont(22);
   hq2l__13->GetZaxis()->SetLabelFont(22);
   hq2l__13->GetZaxis()->SetLabelSize(0.05);
   hq2l__13->GetZaxis()->SetTitleSize(0.05);
   hq2l__13->GetZaxis()->SetTitleFont(22);
   hq2l__13->Draw("p");
   
   TH1D *hq2s__14 = new TH1D("hq2s__14","Q^{2} solid data",12,1,4.1);
   hq2s__14->SetBinContent(1,187991);
   hq2s__14->SetBinContent(2,183896);
   hq2s__14->SetBinContent(3,135979);
   hq2s__14->SetBinContent(4,94292);
   hq2s__14->SetBinContent(5,62783);
   hq2s__14->SetBinContent(6,40328);
   hq2s__14->SetBinContent(7,26884);
   hq2s__14->SetBinContent(8,16316);
   hq2s__14->SetBinContent(9,8794);
   hq2s__14->SetBinContent(10,4440);
   hq2s__14->SetBinContent(11,1855);
   hq2s__14->SetBinContent(12,279);
   hq2s__14->SetBinError(1,433.5793);
   hq2s__14->SetBinError(2,428.831);
   hq2s__14->SetBinError(3,368.7533);
   hq2s__14->SetBinError(4,307.07);
   hq2s__14->SetBinError(5,250.5654);
   hq2s__14->SetBinError(6,200.8183);
   hq2s__14->SetBinError(7,163.9634);
   hq2s__14->SetBinError(8,127.7341);
   hq2s__14->SetBinError(9,93.77633);
   hq2s__14->SetBinError(10,66.63332);
   hq2s__14->SetBinError(11,43.06971);
   hq2s__14->SetBinError(12,16.70329);
   hq2s__14->SetEntries(763837);

   ci = TColor::GetColor("#0000ff");
   hq2s__14->SetLineColor(ci);
   hq2s__14->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hq2s__14->SetMarkerColor(ci);
   hq2s__14->SetMarkerStyle(8);
   hq2s__14->SetMarkerSize(2);
   hq2s__14->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hq2s__14->GetXaxis()->SetLabelFont(22);
   hq2s__14->GetXaxis()->SetLabelSize(0.05);
   hq2s__14->GetXaxis()->SetTitleSize(0.05);
   hq2s__14->GetXaxis()->SetTitleFont(22);
   hq2s__14->GetYaxis()->SetTitle("dN/dQ^{2}");
   hq2s__14->GetYaxis()->SetLabelFont(22);
   hq2s__14->GetYaxis()->SetLabelSize(0.05);
   hq2s__14->GetYaxis()->SetTitleSize(0.05);
   hq2s__14->GetYaxis()->SetTitleFont(22);
   hq2s__14->GetZaxis()->SetLabelFont(22);
   hq2s__14->GetZaxis()->SetLabelSize(0.05);
   hq2s__14->GetZaxis()->SetTitleSize(0.05);
   hq2s__14->GetZaxis()->SetTitleFont(22);
   hq2s__14->Draw("samep");
   
   TPaveText *pt = new TPaveText(0.01,0.9400135,0.2364579,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Q^{2} solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
