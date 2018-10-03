void Pt2_N_DPb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-543.5747,1.75,4892.172);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis18[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hl_px__18 = new TH1D("hl_px__18","N hadrons D_C",5, xAxis18);
   hl_px__18->SetBinContent(1,3761.936);
   hl_px__18->SetBinContent(2,2276.869);
   hl_px__18->SetBinContent(3,1257.92);
   hl_px__18->SetBinContent(4,539.8639);
   hl_px__18->SetBinContent(5,223.2078);
   hl_px__18->SetBinError(1,379.5849);
   hl_px__18->SetBinError(2,229.4227);
   hl_px__18->SetBinError(3,92.51812);
   hl_px__18->SetBinError(4,72.77935);
   hl_px__18->SetBinError(5,64.09699);
   hl_px__18->SetEntries(302.5852);
   hl_px__18->SetStats(0);
   hl_px__18->SetLineWidth(3);
   hl_px__18->SetMarkerStyle(8);
   hl_px__18->SetMarkerSize(3);
   hl_px__18->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hl_px__18->GetXaxis()->SetRange(1,5);
   hl_px__18->GetXaxis()->SetLabelFont(22);
   hl_px__18->GetXaxis()->SetLabelSize(0.05);
   hl_px__18->GetXaxis()->SetTitleSize(0.05);
   hl_px__18->GetXaxis()->SetTickLength(0.01);
   hl_px__18->GetXaxis()->SetTitleOffset(0.85);
   hl_px__18->GetXaxis()->SetTitleFont(22);
   hl_px__18->GetYaxis()->SetLabelFont(22);
   hl_px__18->GetYaxis()->SetLabelSize(0.05);
   hl_px__18->GetYaxis()->SetTitleSize(0.05);
   hl_px__18->GetYaxis()->SetTitleFont(22);
   hl_px__18->GetZaxis()->SetLabelFont(22);
   hl_px__18->GetZaxis()->SetLabelSize(0.05);
   hl_px__18->GetZaxis()->SetTitleSize(0.05);
   hl_px__18->GetZaxis()->SetTitleFont(22);
   hl_px__18->Draw("pe");
   
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
