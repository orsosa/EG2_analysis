void hNh_Pt2Fe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 07:08:14 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.25,-13144.42,1.75,118299.8);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   Double_t xAxis11[5] = {0, 0.18, 0.36, 0.54, 1.5}; 
   
   TH1D *hpt2l__11 = new TH1D("hpt2l__11","Pt^{2} solid data",4, xAxis11);
   hpt2l__11->SetBinContent(1,99832);
   hpt2l__11->SetBinContent(2,41984);
   hpt2l__11->SetBinContent(3,16742);
   hpt2l__11->SetBinContent(4,10881);
   hpt2l__11->SetBinError(1,315.962);
   hpt2l__11->SetBinError(2,204.9);
   hpt2l__11->SetBinError(3,129.3909);
   hpt2l__11->SetBinError(4,104.312);
   hpt2l__11->SetEntries(169439);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 169439 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2002");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2002");
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
   Double_t xAxis12[5] = {0, 0.18, 0.36, 0.54, 1.5}; 
   
   TH1D *hpt2s__12 = new TH1D("hpt2s__12","Pt^{2} solid data",4, xAxis12);
   hpt2s__12->SetBinContent(1,43298);
   hpt2s__12->SetBinContent(2,19819);
   hpt2s__12->SetBinContent(3,9137);
   hpt2s__12->SetBinContent(4,7900);
   hpt2s__12->SetBinError(1,208.0817);
   hpt2s__12->SetBinError(2,140.78);
   hpt2s__12->SetBinError(3,95.58766);
   hpt2s__12->SetBinError(4,88.88194);
   hpt2s__12->SetEntries(80154);

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
