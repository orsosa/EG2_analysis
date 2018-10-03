void eta_3pi_Fe_z()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jun 20 06:03:57 2018) by ROOT version 6.12/06
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,1024,768);
   c1->Range(0.4166667,-0.07797135,1.083333,0.7017421);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.125);
   c1->SetRightMargin(0.125);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *hRz_Fe__1 = new TH1D("hRz_Fe__1","Multiplicity ratio for Fe",5,0.5,1);
   hRz_Fe__1->SetBinContent(1,0.5504588);
   hRz_Fe__1->SetBinContent(2,0.4507112);
   hRz_Fe__1->SetBinContent(3,0.4623854);
   hRz_Fe__1->SetBinContent(4,0.4261617);
   hRz_Fe__1->SetBinContent(5,0.3853212);
   hRz_Fe__1->SetBinError(1,0.04360854);
   hRz_Fe__1->SetBinError(2,0.04844344);
   hRz_Fe__1->SetBinError(3,0.06941895);
   hRz_Fe__1->SetBinError(4,0.1024524);
   hRz_Fe__1->SetBinError(5,0.1692157);
   hRz_Fe__1->SetEntries(107.3864);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.835,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hRz_Fe");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 107    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.7344");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.1416");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hRz_Fe__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hRz_Fe__1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hRz_Fe__1->SetLineColor(ci);
   hRz_Fe__1->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hRz_Fe__1->SetMarkerColor(ci);
   hRz_Fe__1->SetMarkerStyle(8);
   hRz_Fe__1->SetMarkerSize(2);
   hRz_Fe__1->GetXaxis()->SetTitle("z");
   hRz_Fe__1->GetXaxis()->SetLabelFont(22);
   hRz_Fe__1->GetXaxis()->SetLabelSize(0.05);
   hRz_Fe__1->GetXaxis()->SetTitleSize(0.05);
   hRz_Fe__1->GetXaxis()->SetTitleFont(22);
   hRz_Fe__1->GetYaxis()->SetTitle("R^{A}_{D}");
   hRz_Fe__1->GetYaxis()->SetLabelFont(22);
   hRz_Fe__1->GetYaxis()->SetLabelSize(0.05);
   hRz_Fe__1->GetYaxis()->SetTitleSize(0.05);
   hRz_Fe__1->GetYaxis()->SetTitleFont(22);
   hRz_Fe__1->GetZaxis()->SetLabelFont(22);
   hRz_Fe__1->GetZaxis()->SetLabelSize(0.05);
   hRz_Fe__1->GetZaxis()->SetTitleSize(0.05);
   hRz_Fe__1->GetZaxis()->SetTitleFont(22);
   hRz_Fe__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.9398649,0.3976471,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Multiplicity ratio for Fe");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
