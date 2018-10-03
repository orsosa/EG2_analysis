void hNh_Pt2Fe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:57:32 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(-0.1666667,-91.06725,1.166667,819.6052);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hpt2l__11 = new TH1D("hpt2l__11","Pt^{2} solid data",6,0,1);
   hpt2l__11->SetBinContent(1,668);
   hpt2l__11->SetBinContent(2,627);
   hpt2l__11->SetBinContent(3,419);
   hpt2l__11->SetBinContent(4,189);
   hpt2l__11->SetBinContent(5,75);
   hpt2l__11->SetBinContent(6,48);
   hpt2l__11->SetBinContent(7,21);
   hpt2l__11->SetBinError(1,25.8457);
   hpt2l__11->SetBinError(2,25.03997);
   hpt2l__11->SetBinError(3,20.46949);
   hpt2l__11->SetBinError(4,13.74773);
   hpt2l__11->SetBinError(5,8.660254);
   hpt2l__11->SetBinError(6,6.928203);
   hpt2l__11->SetBinError(7,4.582576);
   hpt2l__11->SetEntries(2047);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2047   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2918");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2073");
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
   
   TH1D *hpt2s__12 = new TH1D("hpt2s__12","Pt^{2} solid data",6,0,1);
   hpt2s__12->SetBinContent(1,255);
   hpt2s__12->SetBinContent(2,279);
   hpt2s__12->SetBinContent(3,176);
   hpt2s__12->SetBinContent(4,91);
   hpt2s__12->SetBinContent(5,60);
   hpt2s__12->SetBinContent(6,15);
   hpt2s__12->SetBinContent(7,28);
   hpt2s__12->SetBinError(1,15.96872);
   hpt2s__12->SetBinError(2,16.70329);
   hpt2s__12->SetBinError(3,13.2665);
   hpt2s__12->SetBinError(4,9.539392);
   hpt2s__12->SetBinError(5,7.745967);
   hpt2s__12->SetBinError(6,3.872983);
   hpt2s__12->SetBinError(7,5.291503);
   hpt2s__12->SetEntries(904);

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
