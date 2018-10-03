void hNh_Pt2Fe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:37:40 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(-0.25,-87525.66,1.75,787730.9);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hpt2l__11 = new TH1D("hpt2l__11","Pt^{2} solid data",12,0,1.5);
   hpt2l__11->SetBinContent(1,666046);
   hpt2l__11->SetBinContent(2,376645);
   hpt2l__11->SetBinContent(3,192515);
   hpt2l__11->SetBinContent(4,93987);
   hpt2l__11->SetBinContent(5,45184);
   hpt2l__11->SetBinContent(6,22492);
   hpt2l__11->SetBinContent(7,11339);
   hpt2l__11->SetBinContent(8,5754);
   hpt2l__11->SetBinContent(9,3180);
   hpt2l__11->SetBinContent(10,1824);
   hpt2l__11->SetBinContent(11,1016);
   hpt2l__11->SetBinContent(12,610);
   hpt2l__11->SetBinError(1,816.1164);
   hpt2l__11->SetBinError(2,613.7141);
   hpt2l__11->SetBinError(3,438.7653);
   hpt2l__11->SetBinError(4,306.573);
   hpt2l__11->SetBinError(5,212.5653);
   hpt2l__11->SetBinError(6,149.9733);
   hpt2l__11->SetBinError(7,106.4847);
   hpt2l__11->SetBinError(8,75.85513);
   hpt2l__11->SetBinError(9,56.39149);
   hpt2l__11->SetBinError(10,42.70831);
   hpt2l__11->SetBinError(11,31.87475);
   hpt2l__11->SetBinError(12,24.69818);
   hpt2l__11->SetEntries(1420592);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1420592");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1885");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1817");
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
   
   TH1D *hpt2s__12 = new TH1D("hpt2s__12","Pt^{2} solid data",12,0,1.5);
   hpt2s__12->SetBinContent(1,324184);
   hpt2s__12->SetBinContent(2,200929);
   hpt2s__12->SetBinContent(3,111433);
   hpt2s__12->SetBinContent(4,58478);
   hpt2s__12->SetBinContent(5,30865);
   hpt2s__12->SetBinContent(6,16649);
   hpt2s__12->SetBinContent(7,9091);
   hpt2s__12->SetBinContent(8,5328);
   hpt2s__12->SetBinContent(9,3121);
   hpt2s__12->SetBinContent(10,1761);
   hpt2s__12->SetBinContent(11,1233);
   hpt2s__12->SetBinContent(12,765);
   hpt2s__12->SetBinError(1,569.3716);
   hpt2s__12->SetBinError(2,448.251);
   hpt2s__12->SetBinError(3,333.8158);
   hpt2s__12->SetBinError(4,241.8222);
   hpt2s__12->SetBinError(5,175.6844);
   hpt2s__12->SetBinError(6,129.031);
   hpt2s__12->SetBinError(7,95.34674);
   hpt2s__12->SetBinError(8,72.99315);
   hpt2s__12->SetBinError(9,55.86591);
   hpt2s__12->SetBinError(10,41.96427);
   hpt2s__12->SetBinError(11,35.1141);
   hpt2s__12->SetBinError(12,27.65863);
   hpt2s__12->SetEntries(763837);

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
   
   TPaveText *pt = new TPaveText(0.01,0.9416307,0.2452642,0.995,"blNDC");
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
