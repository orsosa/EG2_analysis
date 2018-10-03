void Pt2_N_AC_DPb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 20:56:22 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-0.25,-18197.49,1.75,163777.4);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis14[6] = {0, 0.18, 0.36, 0.54, 0.72, 1.5}; 
   
   TH1D *hl_ac_px__14 = new TH1D("hl_ac_px__14","N hadrons + AC D_C",5, xAxis14);
   hl_ac_px__14->SetBinContent(1,117051.7);
   hl_ac_px__14->SetBinContent(2,58028.95);
   hl_ac_px__14->SetBinContent(3,24272.06);
   hl_ac_px__14->SetBinContent(4,11862.4);
   hl_ac_px__14->SetBinContent(5,4254.399);
   hl_ac_px__14->SetBinError(1,21595.84);
   hl_ac_px__14->SetBinError(2,8864.159);
   hl_ac_px__14->SetBinError(3,3504.212);
   hl_ac_px__14->SetBinError(4,2154.738);
   hl_ac_px__14->SetBinError(5,1250.818);
   hl_ac_px__14->SetEntries(82.39928);
   hl_ac_px__14->SetStats(0);
   hl_ac_px__14->SetLineWidth(3);
   hl_ac_px__14->SetMarkerStyle(8);
   hl_ac_px__14->SetMarkerSize(3);
   hl_ac_px__14->GetXaxis()->SetTitle("Pt^{2} (GeV^{2})");
   hl_ac_px__14->GetXaxis()->SetRange(1,5);
   hl_ac_px__14->GetXaxis()->SetLabelFont(22);
   hl_ac_px__14->GetXaxis()->SetLabelSize(0.05);
   hl_ac_px__14->GetXaxis()->SetTitleSize(0.05);
   hl_ac_px__14->GetXaxis()->SetTickLength(0.01);
   hl_ac_px__14->GetXaxis()->SetTitleOffset(0.85);
   hl_ac_px__14->GetXaxis()->SetTitleFont(22);
   hl_ac_px__14->GetYaxis()->SetLabelFont(22);
   hl_ac_px__14->GetYaxis()->SetLabelSize(0.05);
   hl_ac_px__14->GetYaxis()->SetTitleSize(0.05);
   hl_ac_px__14->GetYaxis()->SetTitleFont(22);
   hl_ac_px__14->GetZaxis()->SetLabelFont(22);
   hl_ac_px__14->GetZaxis()->SetLabelSize(0.05);
   hl_ac_px__14->GetZaxis()->SetTitleSize(0.05);
   hl_ac_px__14->GetZaxis()->SetTitleFont(22);
   hl_ac_px__14->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.9409228,0.3669906,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons + AC D_C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
