void Pt2_N_DFe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-726.0227,1.75,6534.204);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis12[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hl_px__12 = new TH1D("hl_px__12","N hadrons D_C",5, xAxis12);
   hl_px__12->SetBinContent(1,5208.693);
   hl_px__12->SetBinContent(2,3143.493);
   hl_px__12->SetBinContent(3,1370.926);
   hl_px__12->SetBinContent(4,489.8951);
   hl_px__12->SetBinContent(5,336.9089);
   hl_px__12->SetBinError(1,322.9075);
   hl_px__12->SetBinError(2,1371.359);
   hl_px__12->SetBinError(3,94.05793);
   hl_px__12->SetBinError(4,60.38853);
   hl_px__12->SetBinError(5,56.97405);
   hl_px__12->SetEntries(55.6327);
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
   hl_px__12->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
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
