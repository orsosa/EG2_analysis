void Z_N_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:05:40 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4166667,-101.9992,1.083333,917.9926);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis17[6] = {0.5, 0.6, 0.7, 0.8, 0.9, 1}; 
   
   TH1D *hs_px__17 = new TH1D("hs_px__17","N hadrons C",5, xAxis17);
   hs_px__17->SetBinContent(1,691.576);
   hs_px__17->SetBinContent(2,437.2288);
   hs_px__17->SetBinContent(3,269.4644);
   hs_px__17->SetBinContent(4,207.3689);
   hs_px__17->SetBinContent(5,109.7096);
   hs_px__17->SetBinError(1,85.56058);
   hs_px__17->SetBinError(2,60.30501);
   hs_px__17->SetBinError(3,39.41996);
   hs_px__17->SetBinError(4,35.79835);
   hs_px__17->SetBinError(5,18.45274);
   hs_px__17->SetEntries(208.191);
   hs_px__17->SetStats(0);
   hs_px__17->SetLineWidth(3);
   hs_px__17->SetMarkerStyle(8);
   hs_px__17->SetMarkerSize(3);
   hs_px__17->GetXaxis()->SetTitle("z");
   hs_px__17->GetXaxis()->SetRange(1,5);
   hs_px__17->GetXaxis()->SetLabelFont(22);
   hs_px__17->GetXaxis()->SetLabelSize(0.05);
   hs_px__17->GetXaxis()->SetTitleSize(0.05);
   hs_px__17->GetXaxis()->SetTickLength(0.01);
   hs_px__17->GetXaxis()->SetTitleOffset(0.85);
   hs_px__17->GetXaxis()->SetTitleFont(22);
   hs_px__17->GetYaxis()->SetLabelFont(22);
   hs_px__17->GetYaxis()->SetLabelSize(0.05);
   hs_px__17->GetYaxis()->SetTitleSize(0.05);
   hs_px__17->GetYaxis()->SetTitleFont(22);
   hs_px__17->GetZaxis()->SetLabelFont(22);
   hs_px__17->GetZaxis()->SetLabelSize(0.05);
   hs_px__17->GetZaxis()->SetTitleSize(0.05);
   hs_px__17->GetZaxis()->SetTitleFont(22);
   hs_px__17->Draw("pe");
   
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
