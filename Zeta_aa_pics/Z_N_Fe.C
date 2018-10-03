void Z_N_Fe()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-272.0866,1.083333,2448.779);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis11[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hs_px__11 = new TH1D("hs_px__11","N hadrons C",5, xAxis11);
   hs_px__11->SetBinContent(1,1911.129);
   hs_px__11->SetBinContent(2,1534.929);
   hs_px__11->SetBinContent(3,928.4492);
   hs_px__11->SetBinContent(4,581.1535);
   hs_px__11->SetBinContent(5,366.8859);
   hs_px__11->SetBinError(1,161.9119);
   hs_px__11->SetBinError(2,120.4727);
   hs_px__11->SetBinError(3,132.0994);
   hs_px__11->SetBinError(4,41.39915);
   hs_px__11->SetBinError(5,27.88779);
   hs_px__11->SetEntries(466.9364);
   hs_px__11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hs_px__11->SetLineColor(ci);
   hs_px__11->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hs_px__11->SetMarkerColor(ci);
   hs_px__11->SetMarkerStyle(8);
   hs_px__11->SetMarkerSize(3);
   hs_px__11->GetXaxis()->SetTitle("z");
   hs_px__11->GetXaxis()->SetRange(1,5);
   hs_px__11->GetXaxis()->SetLabelFont(22);
   hs_px__11->GetXaxis()->SetLabelSize(0.05);
   hs_px__11->GetXaxis()->SetTitleSize(0.05);
   hs_px__11->GetXaxis()->SetTickLength(0.01);
   hs_px__11->GetXaxis()->SetTitleOffset(0.85);
   hs_px__11->GetXaxis()->SetTitleFont(22);
   hs_px__11->GetYaxis()->SetLabelFont(22);
   hs_px__11->GetYaxis()->SetLabelSize(0.05);
   hs_px__11->GetYaxis()->SetTitleSize(0.05);
   hs_px__11->GetYaxis()->SetTitleFont(22);
   hs_px__11->GetZaxis()->SetLabelFont(22);
   hs_px__11->GetZaxis()->SetLabelSize(0.05);
   hs_px__11->GetZaxis()->SetTitleSize(0.05);
   hs_px__11->GetZaxis()->SetTitleFont(22);
   hs_px__11->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.2337618,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
