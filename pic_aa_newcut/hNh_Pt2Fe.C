void hNh_Pt2Fe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:18:35 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(-0.25,-20131.67,1.75,181185);
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
   hpt2l__11->SetBinContent(1,152993);
   hpt2l__11->SetBinContent(2,60054);
   hpt2l__11->SetBinContent(3,23452);
   hpt2l__11->SetBinContent(4,16355);
   hpt2l__11->SetBinError(1,391.1432);
   hpt2l__11->SetBinError(2,245.0592);
   hpt2l__11->SetBinError(3,153.1405);
   hpt2l__11->SetBinError(4,127.8867);
   hpt2l__11->SetEntries(252854);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 252854 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1963");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2027");
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
   hpt2s__12->SetBinContent(1,66142);
   hpt2s__12->SetBinContent(2,28362);
   hpt2s__12->SetBinContent(3,12946);
   hpt2s__12->SetBinContent(4,11503);
   hpt2s__12->SetBinError(1,257.1809);
   hpt2s__12->SetBinError(2,168.4102);
   hpt2s__12->SetBinError(3,113.7805);
   hpt2s__12->SetBinError(4,107.252);
   hpt2s__12->SetEntries(118953);

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
