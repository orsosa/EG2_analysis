void hNh_NuC()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:36:16 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(1.858333,-13463.73,4.591667,121173.6);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hnul__7 = new TH1D("hnul__7","#nu solid data",12,2.2,4.25);
   hnul__7->SetBinContent(1,5458);
   hnul__7->SetBinContent(2,28556);
   hnul__7->SetBinContent(3,51700);
   hnul__7->SetBinContent(4,69849);
   hnul__7->SetBinContent(5,84054);
   hnul__7->SetBinContent(6,92922);
   hnul__7->SetBinContent(7,100301);
   hnul__7->SetBinContent(8,102261);
   hnul__7->SetBinContent(9,99134);
   hnul__7->SetBinContent(10,91898);
   hnul__7->SetBinContent(11,77771);
   hnul__7->SetBinContent(12,59055);
   hnul__7->SetBinError(1,73.87828);
   hnul__7->SetBinError(2,168.9852);
   hnul__7->SetBinError(3,227.3763);
   hnul__7->SetBinError(4,264.2896);
   hnul__7->SetBinError(5,289.9207);
   hnul__7->SetBinError(6,304.8311);
   hnul__7->SetBinError(7,316.7033);
   hnul__7->SetBinError(8,319.7827);
   hnul__7->SetBinError(9,314.8555);
   hnul__7->SetBinError(10,303.1468);
   hnul__7->SetBinError(11,278.8745);
   hnul__7->SetBinError(12,243.0123);
   hnul__7->SetEntries(862959);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hnul");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 862959 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.376");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4754");
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
   
   TH1D *hnus__8 = new TH1D("hnus__8","#nu solid data",12,2.2,4.25);
   hnus__8->SetBinContent(1,3301);
   hnus__8->SetBinContent(2,18128);
   hnus__8->SetBinContent(3,33229);
   hnus__8->SetBinContent(4,45108);
   hnus__8->SetBinContent(5,55891);
   hnus__8->SetBinContent(6,62728);
   hnus__8->SetBinContent(7,66812);
   hnus__8->SetBinContent(8,69691);
   hnus__8->SetBinContent(9,68619);
   hnus__8->SetBinContent(10,63756);
   hnus__8->SetBinContent(11,55133);
   hnus__8->SetBinContent(12,41576);
   hnus__8->SetBinError(1,57.45433);
   hnus__8->SetBinError(2,134.6403);
   hnus__8->SetBinError(3,182.2882);
   hnus__8->SetBinError(4,212.3864);
   hnus__8->SetBinError(5,236.4128);
   hnus__8->SetBinError(6,250.4556);
   hnus__8->SetBinError(7,258.4802);
   hnus__8->SetBinError(8,263.9905);
   hnus__8->SetBinError(9,261.9523);
   hnus__8->SetBinError(10,252.4995);
   hnus__8->SetBinError(11,234.8042);
   hnus__8->SetBinError(12,203.9019);
   hnus__8->SetEntries(583972);

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
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2168885,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("#nu solid data");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
