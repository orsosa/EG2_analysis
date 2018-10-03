void Nu_AC_Pb()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:49:48 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(1.858333,-0.01049081,4.591667,0.09441729);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis15[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hac_s_px__15 = new TH1D("hac_s_px__15","Acceptance of events from solid target",5, xAxis15);
   hac_s_px__15->SetBinContent(1,0.0169974);
   hac_s_px__15->SetBinContent(2,0.04043432);
   hac_s_px__15->SetBinContent(3,0.04785154);
   hac_s_px__15->SetBinContent(4,0.07166103);
   hac_s_px__15->SetBinContent(5,0.04586106);
   hac_s_px__15->SetBinError(1,0.003091401);
   hac_s_px__15->SetBinError(2,0.004818388);
   hac_s_px__15->SetBinError(3,0.005403774);
   hac_s_px__15->SetBinError(4,0.008268945);
   hac_s_px__15->SetBinError(5,0.008768875);
   hac_s_px__15->SetEntries(239.5363);
   hac_s_px__15->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_s_px__15->SetLineColor(ci);
   hac_s_px__15->SetLineWidth(3);
   hac_s_px__15->SetMarkerStyle(8);
   hac_s_px__15->SetMarkerSize(0);
   hac_s_px__15->GetXaxis()->SetTitle("#nu ((GeV)");
   hac_s_px__15->GetXaxis()->SetRange(1,5);
   hac_s_px__15->GetXaxis()->SetLabelFont(22);
   hac_s_px__15->GetXaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetXaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetXaxis()->SetTickLength(0.01);
   hac_s_px__15->GetXaxis()->SetTitleOffset(0.85);
   hac_s_px__15->GetXaxis()->SetTitleFont(22);
   hac_s_px__15->GetYaxis()->SetLabelFont(22);
   hac_s_px__15->GetYaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetYaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetYaxis()->SetTitleFont(22);
   hac_s_px__15->GetZaxis()->SetLabelFont(22);
   hac_s_px__15->GetZaxis()->SetLabelSize(0.05);
   hac_s_px__15->GetZaxis()->SetTitleSize(0.05);
   hac_s_px__15->GetZaxis()->SetTitleFont(22);
   hac_s_px__15->Draw("histoe");
   
   TPaveText *pt = new TPaveText(0.01,0.9396352,0.6655799,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Acceptance of events from solid target");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
