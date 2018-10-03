void hNh_NuC()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:57:10 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(1.858333,-39.75714,4.591667,357.8143);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hnul__7 = new TH1D("hnul__7","#un solid data",6,2.2,4.25);
   hnul__7->SetBinContent(1,54);
   hnul__7->SetBinContent(2,238);
   hnul__7->SetBinContent(3,286);
   hnul__7->SetBinContent(4,275);
   hnul__7->SetBinContent(5,213);
   hnul__7->SetBinContent(6,114);
   hnul__7->SetBinError(1,7.348469);
   hnul__7->SetBinError(2,15.42725);
   hnul__7->SetBinError(3,16.91153);
   hnul__7->SetBinError(4,16.58312);
   hnul__7->SetBinError(5,14.59452);
   hnul__7->SetBinError(6,10.67708);
   hnul__7->SetEntries(1180);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hnul");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1180   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.256");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.462");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hnul__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hnul__7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hnul__7->SetLineColor(ci);
   hnul__7->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hnul__7->SetMarkerColor(ci);
   hnul__7->SetMarkerStyle(36);
   hnul__7->SetMarkerSize(2);
   hnul__7->GetXaxis()->SetTitle("#nu (GeV)");
   hnul__7->GetXaxis()->SetLabelFont(22);
   hnul__7->GetXaxis()->SetLabelSize(0.05);
   hnul__7->GetXaxis()->SetTitleSize(0.05);
   hnul__7->GetXaxis()->SetTitleFont(22);
   hnul__7->GetYaxis()->SetTitle("dN/d#nu");
   hnul__7->GetYaxis()->SetLabelFont(22);
   hnul__7->GetYaxis()->SetLabelSize(0.05);
   hnul__7->GetYaxis()->SetTitleSize(0.05);
   hnul__7->GetYaxis()->SetTitleFont(22);
   hnul__7->GetZaxis()->SetLabelFont(22);
   hnul__7->GetZaxis()->SetLabelSize(0.05);
   hnul__7->GetZaxis()->SetTitleSize(0.05);
   hnul__7->GetZaxis()->SetTitleFont(22);
   hnul__7->Draw("p");
   
   TH1D *hnus__8 = new TH1D("hnus__8","#un solid data",6,2.2,4.25);
   hnus__8->SetBinContent(1,23);
   hnus__8->SetBinContent(2,121);
   hnus__8->SetBinContent(3,143);
   hnus__8->SetBinContent(4,202);
   hnus__8->SetBinContent(5,167);
   hnus__8->SetBinContent(6,89);
   hnus__8->SetBinError(1,4.795832);
   hnus__8->SetBinError(2,11);
   hnus__8->SetBinError(3,11.95826);
   hnus__8->SetBinError(4,14.21267);
   hnus__8->SetBinError(5,12.92285);
   hnus__8->SetBinError(6,9.433981);
   hnus__8->SetEntries(745);

   ci = TColor::GetColor("#ff0000");
   hnus__8->SetLineColor(ci);
   hnus__8->SetLineWidth(2);

   ci = TColor::GetColor("#ff0000");
   hnus__8->SetMarkerColor(ci);
   hnus__8->SetMarkerStyle(8);
   hnus__8->SetMarkerSize(2);
   hnus__8->GetXaxis()->SetTitle("#nu (GeV)");
   hnus__8->GetXaxis()->SetLabelFont(22);
   hnus__8->GetXaxis()->SetLabelSize(0.05);
   hnus__8->GetXaxis()->SetTitleSize(0.05);
   hnus__8->GetXaxis()->SetTitleFont(22);
   hnus__8->GetYaxis()->SetTitle("dN/d#nu");
   hnus__8->GetYaxis()->SetLabelFont(22);
   hnus__8->GetYaxis()->SetLabelSize(0.05);
   hnus__8->GetYaxis()->SetTitleSize(0.05);
   hnus__8->GetYaxis()->SetTitleFont(22);
   hnus__8->GetZaxis()->SetLabelFont(22);
   hnus__8->GetZaxis()->SetLabelSize(0.05);
   hnus__8->GetZaxis()->SetTitleSize(0.05);
   hnus__8->GetZaxis()->SetTitleFont(22);
   hnus__8->Draw("samep");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2603922,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("#un solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
