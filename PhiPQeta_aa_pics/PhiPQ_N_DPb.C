void PhiPQ_N_DPb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-146.6868,240,1320.181);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis18[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hl_px__18 = new TH1D("hl_px__18","N hadrons D_C",12, xAxis18);
   hl_px__18->SetBinContent(1,439.8799);
   hl_px__18->SetBinContent(2,974.8109);
   hl_px__18->SetBinContent(3,785.9214);
   hl_px__18->SetBinContent(4,760.0898);
   hl_px__18->SetBinContent(5,348.1292);
   hl_px__18->SetBinContent(6,525.4963);
   hl_px__18->SetBinContent(7,423.9184);
   hl_px__18->SetBinContent(8,474.2302);
   hl_px__18->SetBinContent(9,652.2609);
   hl_px__18->SetBinContent(10,884.5275);
   hl_px__18->SetBinContent(11,898.9031);
   hl_px__18->SetBinContent(12,775.5829);
   hl_px__18->SetBinError(1,83.16277);
   hl_px__18->SetBinError(2,142.8026);
   hl_px__18->SetBinError(3,100.9598);
   hl_px__18->SetBinError(4,84.80409);
   hl_px__18->SetBinError(5,63.43087);
   hl_px__18->SetBinError(6,80.55018);
   hl_px__18->SetBinError(7,90.76409);
   hl_px__18->SetBinError(8,76.78355);
   hl_px__18->SetBinError(9,80.71456);
   hl_px__18->SetBinError(10,125.4567);
   hl_px__18->SetBinError(11,123.9786);
   hl_px__18->SetBinError(12,82.96892);
   hl_px__18->SetEntries(554.2775);
   hl_px__18->SetStats(0);
   hl_px__18->SetLineWidth(3);
   hl_px__18->SetMarkerStyle(8);
   hl_px__18->SetMarkerSize(3);
   hl_px__18->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hl_px__18->GetXaxis()->SetRange(1,12);
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
