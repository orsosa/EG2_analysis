void Nu_N_DFe()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:49:48 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(1.858333,-382.2229,4.591667,3440.005);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis12[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hl_px__12 = new TH1D("hl_px__12","N hadrons D_C",5, xAxis12);
   hl_px__12->SetBinContent(1,2050.63);
   hl_px__12->SetBinContent(2,2142.625);
   hl_px__12->SetBinContent(3,2735.522);
   hl_px__12->SetBinContent(4,1494.793);
   hl_px__12->SetBinContent(5,1887.19);
   hl_px__12->SetBinError(1,115.0795);
   hl_px__12->SetBinError(2,152.5944);
   hl_px__12->SetBinError(3,176.6515);
   hl_px__12->SetBinError(4,180.5827);
   hl_px__12->SetBinError(5,130.3631);
   hl_px__12->SetEntries(906.0248);
   hl_px__12->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hl_px__12->SetLineColor(ci);
   hl_px__12->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hl_px__12->SetMarkerColor(ci);
   hl_px__12->SetMarkerStyle(8);
   hl_px__12->SetMarkerSize(3);
   hl_px__12->GetXaxis()->SetTitle("#nu ((GeV)");
   hl_px__12->GetXaxis()->SetRange(1,5);
   hl_px__12->GetXaxis()->SetLabelFont(22);
   hl_px__12->GetXaxis()->SetLabelSize(0.05);
   hl_px__12->GetXaxis()->SetTitleSize(0.05);
   hl_px__12->GetXaxis()->SetTickLength(0.01);
   hl_px__12->GetXaxis()->SetTitleOffset(0.85);
   hl_px__12->GetXaxis()->SetTitleFont(22);
   hl_px__12->GetYaxis()->SetLabelFont(22);
   hl_px__12->GetYaxis()->SetLabelSize(0.05);
   hl_px__12->GetYaxis()->SetTitleSize(0.05);
   hl_px__12->GetYaxis()->SetTitleFont(22);
   hl_px__12->GetZaxis()->SetLabelFont(22);
   hl_px__12->GetZaxis()->SetLabelSize(0.05);
   hl_px__12->GetZaxis()->SetTitleSize(0.05);
   hl_px__12->GetZaxis()->SetTitleFont(22);
   hl_px__12->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.9409228,0.2784326,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons D_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
