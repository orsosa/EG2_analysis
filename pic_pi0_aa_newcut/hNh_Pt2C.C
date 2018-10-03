void hNh_Pt2C()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:36:16 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(-0.25,-51326.74,1.75,461940.6);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hpt2l__3 = new TH1D("hpt2l__3","Pt^{2} solid data",12,0,1.5);
   hpt2l__3->SetBinContent(1,390436);
   hpt2l__3->SetBinContent(2,226385);
   hpt2l__3->SetBinContent(3,119482);
   hpt2l__3->SetBinContent(4,61042);
   hpt2l__3->SetBinContent(5,30954);
   hpt2l__3->SetBinContent(6,15962);
   hpt2l__3->SetBinContent(7,8283);
   hpt2l__3->SetBinContent(8,4726);
   hpt2l__3->SetBinContent(9,2621);
   hpt2l__3->SetBinContent(10,1545);
   hpt2l__3->SetBinContent(11,914);
   hpt2l__3->SetBinContent(12,609);
   hpt2l__3->SetBinError(1,624.8488);
   hpt2l__3->SetBinError(2,475.7993);
   hpt2l__3->SetBinError(3,345.6617);
   hpt2l__3->SetBinError(4,247.0668);
   hpt2l__3->SetBinError(5,175.9375);
   hpt2l__3->SetBinError(6,126.3408);
   hpt2l__3->SetBinError(7,91.01099);
   hpt2l__3->SetBinError(8,68.74591);
   hpt2l__3->SetBinError(9,51.1957);
   hpt2l__3->SetBinError(10,39.30649);
   hpt2l__3->SetBinError(11,30.23243);
   hpt2l__3->SetBinError(12,24.67793);
   hpt2l__3->SetEntries(862959);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hpt2l");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 862959 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.1991");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1937");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hpt2l__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hpt2l__3);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hpt2l__3->SetLineColor(ci);
   hpt2l__3->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hpt2l__3->SetMarkerColor(ci);
   hpt2l__3->SetMarkerStyle(36);
   hpt2l__3->SetMarkerSize(2);
   hpt2l__3->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2l__3->GetXaxis()->SetLabelFont(22);
   hpt2l__3->GetXaxis()->SetLabelSize(0.05);
   hpt2l__3->GetXaxis()->SetTitleSize(0.05);
   hpt2l__3->GetXaxis()->SetTitleFont(22);
   hpt2l__3->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2l__3->GetYaxis()->SetLabelFont(22);
   hpt2l__3->GetYaxis()->SetLabelSize(0.05);
   hpt2l__3->GetYaxis()->SetTitleSize(0.05);
   hpt2l__3->GetYaxis()->SetTitleFont(22);
   hpt2l__3->GetZaxis()->SetLabelFont(22);
   hpt2l__3->GetZaxis()->SetLabelSize(0.05);
   hpt2l__3->GetZaxis()->SetTitleSize(0.05);
   hpt2l__3->GetZaxis()->SetTitleFont(22);
   hpt2l__3->Draw("p");
   
   TH1D *hpt2s__4 = new TH1D("hpt2s__4","Pt^{2} solid data",12,0,1.5);
   hpt2s__4->SetBinContent(1,250667);
   hpt2s__4->SetBinContent(2,151915);
   hpt2s__4->SetBinContent(3,84457);
   hpt2s__4->SetBinContent(4,44639);
   hpt2s__4->SetBinContent(5,23192);
   hpt2s__4->SetBinContent(6,12445);
   hpt2s__4->SetBinContent(7,6977);
   hpt2s__4->SetBinContent(8,4077);
   hpt2s__4->SetBinContent(9,2482);
   hpt2s__4->SetBinContent(10,1517);
   hpt2s__4->SetBinContent(11,950);
   hpt2s__4->SetBinContent(12,654);
   hpt2s__4->SetBinError(1,500.6666);
   hpt2s__4->SetBinError(2,389.7627);
   hpt2s__4->SetBinError(3,290.6149);
   hpt2s__4->SetBinError(4,211.2794);
   hpt2s__4->SetBinError(5,152.2892);
   hpt2s__4->SetBinError(6,111.5572);
   hpt2s__4->SetBinError(7,83.52844);
   hpt2s__4->SetBinError(8,63.85139);
   hpt2s__4->SetBinError(9,49.81967);
   hpt2s__4->SetBinError(10,38.94868);
   hpt2s__4->SetBinError(11,30.82207);
   hpt2s__4->SetBinError(12,25.57342);
   hpt2s__4->SetEntries(583972);

   ci = TColor::GetColor("#ff0000");
   hpt2s__4->SetLineColor(ci);
   hpt2s__4->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hpt2s__4->SetMarkerColor(ci);
   hpt2s__4->SetMarkerStyle(8);
   hpt2s__4->SetMarkerSize(2);
   hpt2s__4->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hpt2s__4->GetXaxis()->SetLabelFont(22);
   hpt2s__4->GetXaxis()->SetLabelSize(0.05);
   hpt2s__4->GetXaxis()->SetTitleSize(0.05);
   hpt2s__4->GetXaxis()->SetTitleFont(22);
   hpt2s__4->GetYaxis()->SetTitle("dN/dPt^{2}");
   hpt2s__4->GetYaxis()->SetLabelFont(22);
   hpt2s__4->GetYaxis()->SetLabelSize(0.05);
   hpt2s__4->GetYaxis()->SetTitleSize(0.05);
   hpt2s__4->GetYaxis()->SetTitleFont(22);
   hpt2s__4->GetZaxis()->SetLabelFont(22);
   hpt2s__4->GetZaxis()->SetLabelSize(0.05);
   hpt2s__4->GetZaxis()->SetTitleSize(0.05);
   hpt2s__4->GetZaxis()->SetTitleFont(22);
   hpt2s__4->Draw("samep");
   
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
