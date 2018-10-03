void hNh_NuFe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:37:40 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",10,64,1024,704);
   c1->Range(1.858333,-22467.67,4.591667,202209);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hnul__15 = new TH1D("hnul__15","#nu solid data",12,2.2,4.25);
   hnul__15->SetBinContent(1,8290);
   hnul__15->SetBinContent(2,44944);
   hnul__15->SetBinContent(3,83510);
   hnul__15->SetBinContent(4,114666);
   hnul__15->SetBinContent(5,139257);
   hnul__15->SetBinContent(6,156349);
   hnul__15->SetBinContent(7,166125);
   hnul__15->SetBinContent(8,170769);
   hnul__15->SetBinContent(9,166868);
   hnul__15->SetBinContent(10,152115);
   hnul__15->SetBinContent(11,126008);
   hnul__15->SetBinContent(12,91691);
   hnul__15->SetBinError(1,91.04944);
   hnul__15->SetBinError(2,212);
   hnul__15->SetBinError(3,288.981);
   hnul__15->SetBinError(4,338.6237);
   hnul__15->SetBinError(5,373.1715);
   hnul__15->SetBinError(6,395.4099);
   hnul__15->SetBinError(7,407.5843);
   hnul__15->SetBinError(8,413.2421);
   hnul__15->SetBinError(9,408.4948);
   hnul__15->SetBinError(10,390.0192);
   hnul__15->SetBinError(11,354.9761);
   hnul__15->SetBinError(12,302.8052);
   hnul__15->SetEntries(1420592);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hnul");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1420592");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.376");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4702");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hnul__15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hnul__15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hnul__15->SetLineColor(ci);
   hnul__15->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hnul__15->SetMarkerColor(ci);
   hnul__15->SetMarkerStyle(36);
   hnul__15->SetMarkerSize(2);
   hnul__15->GetXaxis()->SetTitle("#nu (GeV)");
   hnul__15->GetXaxis()->SetLabelFont(22);
   hnul__15->GetXaxis()->SetLabelSize(0.05);
   hnul__15->GetXaxis()->SetTitleSize(0.05);
   hnul__15->GetXaxis()->SetTitleFont(22);
   hnul__15->GetYaxis()->SetTitle("dN/d#nu");
   hnul__15->GetYaxis()->SetLabelFont(22);
   hnul__15->GetYaxis()->SetLabelSize(0.05);
   hnul__15->GetYaxis()->SetTitleSize(0.05);
   hnul__15->GetYaxis()->SetTitleFont(22);
   hnul__15->GetZaxis()->SetLabelFont(22);
   hnul__15->GetZaxis()->SetLabelSize(0.05);
   hnul__15->GetZaxis()->SetTitleSize(0.05);
   hnul__15->GetZaxis()->SetTitleFont(22);
   hnul__15->Draw("p");
   
   TH1D *hnus__16 = new TH1D("hnus__16","#nu solid data",12,2.2,4.25);
   hnus__16->SetBinContent(1,3982);
   hnus__16->SetBinContent(2,21912);
   hnus__16->SetBinContent(3,41805);
   hnus__16->SetBinContent(4,57517);
   hnus__16->SetBinContent(5,71606);
   hnus__16->SetBinContent(6,80965);
   hnus__16->SetBinContent(7,88935);
   hnus__16->SetBinContent(8,92213);
   hnus__16->SetBinContent(9,92397);
   hnus__16->SetBinContent(10,85108);
   hnus__16->SetBinContent(11,73053);
   hnus__16->SetBinContent(12,54344);
   hnus__16->SetBinError(1,63.10309);
   hnus__16->SetBinError(2,148.027);
   hnus__16->SetBinError(3,204.4627);
   hnus__16->SetBinError(4,239.827);
   hnus__16->SetBinError(5,267.593);
   hnus__16->SetBinError(6,284.5435);
   hnus__16->SetBinError(7,298.2197);
   hnus__16->SetBinError(8,303.6659);
   hnus__16->SetBinError(9,303.9687);
   hnus__16->SetBinError(10,291.7328);
   hnus__16->SetBinError(11,270.2832);
   hnus__16->SetBinError(12,233.118);
   hnus__16->SetEntries(763837);

   ci = TColor::GetColor("#0000ff");
   hnus__16->SetLineColor(ci);
   hnus__16->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hnus__16->SetMarkerColor(ci);
   hnus__16->SetMarkerStyle(8);
   hnus__16->SetMarkerSize(2);
   hnus__16->GetXaxis()->SetTitle("#nu (GeV)");
   hnus__16->GetXaxis()->SetLabelFont(22);
   hnus__16->GetXaxis()->SetLabelSize(0.05);
   hnus__16->GetXaxis()->SetTitleSize(0.05);
   hnus__16->GetXaxis()->SetTitleFont(22);
   hnus__16->GetYaxis()->SetTitle("dN/d#nu");
   hnus__16->GetYaxis()->SetLabelFont(22);
   hnus__16->GetYaxis()->SetLabelSize(0.05);
   hnus__16->GetYaxis()->SetTitleSize(0.05);
   hnus__16->GetYaxis()->SetTitleFont(22);
   hnus__16->GetZaxis()->SetLabelFont(22);
   hnus__16->GetZaxis()->SetLabelSize(0.05);
   hnus__16->GetZaxis()->SetTitleSize(0.05);
   hnus__16->GetZaxis()->SetTitleFont(22);
   hnus__16->Draw("samep");
   
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
