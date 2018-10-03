void PhiPQ_N_AC_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-2707.626,240,11434.6);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis13[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hs_ac_px__13 = new TH1D("hs_ac_px__13","N hadrons + AC C",12, xAxis13);
   hs_ac_px__13->SetBinContent(1,3457.762);
   hs_ac_px__13->SetBinContent(2,3704.603);
   hs_ac_px__13->SetBinContent(3,4133.972);
   hs_ac_px__13->SetBinContent(4,3462.887);
   hs_ac_px__13->SetBinContent(5,2983.893);
   hs_ac_px__13->SetBinContent(6,6152.479);
   hs_ac_px__13->SetBinContent(7,3635.36);
   hs_ac_px__13->SetBinContent(8,2268.613);
   hs_ac_px__13->SetBinContent(9,2891.19);
   hs_ac_px__13->SetBinContent(10,3410.395);
   hs_ac_px__13->SetBinContent(11,3659.258);
   hs_ac_px__13->SetBinContent(12,2338.092);
   hs_ac_px__13->SetBinError(1,1339.248);
   hs_ac_px__13->SetBinError(2,1337.691);
   hs_ac_px__13->SetBinError(3,1099.732);
   hs_ac_px__13->SetBinError(4,1119.88);
   hs_ac_px__13->SetBinError(5,3764.2);
   hs_ac_px__13->SetBinError(6,3329.145);
   hs_ac_px__13->SetBinError(7,1151.141);
   hs_ac_px__13->SetBinError(8,959.6086);
   hs_ac_px__13->SetBinError(9,769.5178);
   hs_ac_px__13->SetBinError(10,921.0609);
   hs_ac_px__13->SetBinError(11,1036.639);
   hs_ac_px__13->SetBinError(12,706.7676);
   hs_ac_px__13->SetEntries(48.47661);
   hs_ac_px__13->SetStats(0);
   hs_ac_px__13->SetLineWidth(3);
   hs_ac_px__13->SetMarkerStyle(8);
   hs_ac_px__13->SetMarkerSize(3);
   hs_ac_px__13->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hs_ac_px__13->GetXaxis()->SetRange(1,12);
   hs_ac_px__13->GetXaxis()->SetLabelFont(22);
   hs_ac_px__13->GetXaxis()->SetLabelSize(0.05);
   hs_ac_px__13->GetXaxis()->SetTitleSize(0.05);
   hs_ac_px__13->GetXaxis()->SetTickLength(0.01);
   hs_ac_px__13->GetXaxis()->SetTitleOffset(0.85);
   hs_ac_px__13->GetXaxis()->SetTitleFont(22);
   hs_ac_px__13->GetYaxis()->SetLabelFont(22);
   hs_ac_px__13->GetYaxis()->SetLabelSize(0.05);
   hs_ac_px__13->GetYaxis()->SetTitleSize(0.05);
   hs_ac_px__13->GetYaxis()->SetTitleFont(22);
   hs_ac_px__13->GetZaxis()->SetLabelFont(22);
   hs_ac_px__13->GetZaxis()->SetLabelSize(0.05);
   hs_ac_px__13->GetZaxis()->SetTitleSize(0.05);
   hs_ac_px__13->GetZaxis()->SetTitleFont(22);
   hs_ac_px__13->Draw("pe");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.3231034,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("N hadrons + AC C");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
