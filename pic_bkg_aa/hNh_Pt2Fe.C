void hNh_Pt2Fe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 19:55:57 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-20138.64,1.75,181247.7);
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
   hpt2l__11->SetBinContent(1,153046);
   hpt2l__11->SetBinContent(2,94450);
   hpt2l__11->SetBinContent(3,28710);
   hpt2l__11->SetBinContent(4,9267);
   hpt2l__11->SetBinContent(5,3637);
   hpt2l__11->SetBinContent(6,1815);
   hpt2l__11->SetBinError(1,391.2109);
   hpt2l__11->SetBinError(2,307.3272);
   hpt2l__11->SetBinError(3,169.4403);
   hpt2l__11->SetBinError(4,96.26526);
   hpt2l__11->SetBinError(5,60.30755);
   hpt2l__11->SetBinError(6,42.60282);
   hpt2l__11->SetEntries(290925);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 290925 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1344");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1404");
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
   hpt2s__12->SetBinContent(1,69969);
   hpt2s__12->SetBinContent(2,47913);
   hpt2s__12->SetBinContent(3,16588);
   hpt2s__12->SetBinContent(4,6268);
   hpt2s__12->SetBinContent(5,2900);
   hpt2s__12->SetBinContent(6,1675);
   hpt2s__12->SetBinError(1,264.5165);
   hpt2s__12->SetBinError(2,218.8904);
   hpt2s__12->SetBinError(3,128.7944);
   hpt2s__12->SetBinError(4,79.1707);
   hpt2s__12->SetBinError(5,53.85165);
   hpt2s__12->SetBinError(6,40.92676);
   hpt2s__12->SetEntries(145313);

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
