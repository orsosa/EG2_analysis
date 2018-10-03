void PhiPQ_N_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-32.28254,240,290.5429);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis17[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hs_px__17 = new TH1D("hs_px__17","N hadrons C",12, xAxis17);
   hs_px__17->SetBinContent(1,143.9611);
   hs_px__17->SetBinContent(2,198.0802);
   hs_px__17->SetBinContent(3,177.9335);
   hs_px__17->SetBinContent(4,175.2545);
   hs_px__17->SetBinContent(5,69.65538);
   hs_px__17->SetBinContent(6,132.189);
   hs_px__17->SetBinContent(7,138.5994);
   hs_px__17->SetBinContent(8,73.85257);
   hs_px__17->SetBinContent(9,158.8238);
   hs_px__17->SetBinContent(10,179.9905);
   hs_px__17->SetBinContent(11,158.2768);
   hs_px__17->SetBinContent(12,142.4844);
   hs_px__17->SetBinError(1,48.69532);
   hs_px__17->SetBinError(2,47.88199);
   hs_px__17->SetBinError(3,34.72289);
   hs_px__17->SetBinError(4,32.15986);
   hs_px__17->SetBinError(5,30.81024);
   hs_px__17->SetBinError(6,34.16541);
   hs_px__17->SetBinError(7,35.28029);
   hs_px__17->SetBinError(8,24.16115);
   hs_px__17->SetBinError(9,32.5127);
   hs_px__17->SetBinError(10,34.68829);
   hs_px__17->SetBinError(11,35.12025);
   hs_px__17->SetBinError(12,24.77117);
   hs_px__17->SetEntries(204.5535);
   hs_px__17->SetStats(0);
   hs_px__17->SetLineWidth(3);
   hs_px__17->SetMarkerStyle(8);
   hs_px__17->SetMarkerSize(3);
   hs_px__17->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hs_px__17->GetXaxis()->SetRange(1,12);
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
