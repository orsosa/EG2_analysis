void Q2_N_DPb()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:51:20 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(0.4833333,-334.9297,4.616667,3014.367);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis18[6] = {1, 1.33, 1.66, 2, 2.5, 4.1}; 
   
   TH1D *hl_px__18 = new TH1D("hl_px__18","N hadrons D_C",5, xAxis18);
   hl_px__18->SetBinContent(1,2386.934);
   hl_px__18->SetBinContent(2,2155.55);
   hl_px__18->SetBinContent(3,1259.173);
   hl_px__18->SetBinContent(4,1017.014);
   hl_px__18->SetBinContent(5,643.1018);
   hl_px__18->SetBinError(1,164.911);
   hl_px__18->SetBinError(2,148.6889);
   hl_px__18->SetBinError(3,983.8959);
   hl_px__18->SetBinError(4,157.9275);
   hl_px__18->SetBinError(5,104.1448);
   hl_px__18->SetEntries(52.86849);
   hl_px__18->SetStats(0);
   hl_px__18->SetLineWidth(3);
   hl_px__18->SetMarkerStyle(8);
   hl_px__18->SetMarkerSize(3);
   hl_px__18->GetXaxis()->SetTitle("Q^{2} ((GeV^{2})");
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
