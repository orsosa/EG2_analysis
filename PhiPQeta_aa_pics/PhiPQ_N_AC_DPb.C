void PhiPQ_N_AC_DPb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-3272.69,240,29454.21);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis14[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hl_ac_px__14 = new TH1D("hl_ac_px__14","N hadrons + AC D_C",12, xAxis14);
   hl_ac_px__14->SetBinContent(1,5370.373);
   hl_ac_px__14->SetBinContent(2,14729.43);
   hl_ac_px__14->SetBinContent(3,13583.49);
   hl_ac_px__14->SetBinContent(4,14461.41);
   hl_ac_px__14->SetBinContent(5,6780.455);
   hl_ac_px__14->SetBinContent(6,17801.88);
   hl_ac_px__14->SetBinContent(7,15277.87);
   hl_ac_px__14->SetBinContent(8,12213.17);
   hl_ac_px__14->SetBinContent(9,9492.011);
   hl_ac_px__14->SetBinContent(10,15909.25);
   hl_ac_px__14->SetBinContent(11,15990.93);
   hl_ac_px__14->SetBinContent(12,9907.311);
   hl_ac_px__14->SetBinError(1,1315.46);
   hl_ac_px__14->SetBinError(2,3114.151);
   hl_ac_px__14->SetBinError(3,2986.112);
   hl_ac_px__14->SetBinError(4,3691.393);
   hl_ac_px__14->SetBinError(5,1874.748);
   hl_ac_px__14->SetBinError(6,7132.899);
   hl_ac_px__14->SetBinError(7,7940.387);
   hl_ac_px__14->SetBinError(8,3400.573);
   hl_ac_px__14->SetBinError(9,2069.618);
   hl_ac_px__14->SetBinError(10,3703.093);
   hl_ac_px__14->SetBinError(11,2900.285);
   hl_ac_px__14->SetBinError(12,1887.7);
   hl_ac_px__14->SetEntries(118.9823);
   hl_ac_px__14->SetStats(0);
   hl_ac_px__14->SetLineWidth(3);
   hl_ac_px__14->SetMarkerStyle(8);
   hl_ac_px__14->SetMarkerSize(3);
   hl_ac_px__14->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hl_ac_px__14->GetXaxis()->SetRange(1,12);
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
