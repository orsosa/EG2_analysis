void hNh_NuFe()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 22:57:32 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,1024,744);
   c1->Range(1.858333,-67.35206,4.591667,606.1685);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hnul__15 = new TH1D("hnul__15","#un solid data",6,2.2,4.25);
   hnul__15->SetBinContent(1,100);
   hnul__15->SetBinContent(2,356);
   hnul__15->SetBinContent(3,487);
   hnul__15->SetBinContent(4,491);
   hnul__15->SetBinContent(5,396);
   hnul__15->SetBinContent(6,217);
   hnul__15->SetBinError(1,10);
   hnul__15->SetBinError(2,18.86796);
   hnul__15->SetBinError(3,22.06808);
   hnul__15->SetBinError(4,22.15852);
   hnul__15->SetBinError(5,19.89975);
   hnul__15->SetBinError(6,14.73092);
   hnul__15->SetEntries(2047);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hnul");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2047   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  3.285");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4585");
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
   
   TH1D *hnus__16 = new TH1D("hnus__16","#un solid data",6,2.2,4.25);
   hnus__16->SetBinContent(1,35);
   hnus__16->SetBinContent(2,136);
   hnus__16->SetBinContent(3,229);
   hnus__16->SetBinContent(4,218);
   hnus__16->SetBinContent(5,196);
   hnus__16->SetBinContent(6,90);
   hnus__16->SetBinError(1,5.91608);
   hnus__16->SetBinError(2,11.6619);
   hnus__16->SetBinError(3,15.13275);
   hnus__16->SetBinError(4,14.76482);
   hnus__16->SetBinError(5,14);
   hnus__16->SetBinError(6,9.486833);
   hnus__16->SetEntries(904);

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
