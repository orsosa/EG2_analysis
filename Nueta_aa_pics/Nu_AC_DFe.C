void Nu_AC_DFe()
{
//=========Macro generated from canvas: c/c
//=========  (Wed Jun 20 01:49:48 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(1.858333,-0.01293301,4.591667,0.1163971);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis10[6] = {2.2, 2.86, 3.22, 3.58, 3.87, 4.25}; 
   
   TH1D *hac_l_px__10 = new TH1D("hac_l_px__10","Acceptance of events from liquid target",5, xAxis10);
   hac_l_px__10->SetBinContent(1,0.0175006);
   hac_l_px__10->SetBinContent(2,0.03846506);
   hac_l_px__10->SetBinContent(3,0.04796089);
   hac_l_px__10->SetBinContent(4,0.08770251);
   hac_l_px__10->SetBinContent(5,0.05491186);
   hac_l_px__10->SetBinError(1,0.004099165);
   hac_l_px__10->SetBinError(2,0.004014117);
   hac_l_px__10->SetBinError(3,0.004959096);
   hac_l_px__10->SetBinError(4,0.01083472);
   hac_l_px__10->SetBinError(5,0.009209809);
   hac_l_px__10->SetEntries(234.03);
   hac_l_px__10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_l_px__10->SetLineColor(ci);
   hac_l_px__10->SetLineWidth(3);
   hac_l_px__10->SetMarkerStyle(8);
   hac_l_px__10->SetMarkerSize(0);
   hac_l_px__10->GetXaxis()->SetTitle("#nu ((GeV)");
   hac_l_px__10->GetXaxis()->SetRange(1,5);
   hac_l_px__10->GetXaxis()->SetLabelFont(22);
   hac_l_px__10->GetXaxis()->SetLabelSize(0.05);
   hac_l_px__10->GetXaxis()->SetTitleSize(0.05);
   hac_l_px__10->GetXaxis()->SetTickLength(0.01);
   hac_l_px__10->GetXaxis()->SetTitleOffset(0.85);
   hac_l_px__10->GetXaxis()->SetTitleFont(22);
   hac_l_px__10->GetYaxis()->SetLabelFont(22);
   hac_l_px__10->GetYaxis()->SetLabelSize(0.05);
   hac_l_px__10->GetYaxis()->SetTitleSize(0.05);
   hac_l_px__10->GetYaxis()->SetTitleFont(22);
   hac_l_px__10->GetZaxis()->SetLabelFont(22);
   hac_l_px__10->GetZaxis()->SetLabelSize(0.05);
   hac_l_px__10->GetZaxis()->SetTitleSize(0.05);
   hac_l_px__10->GetZaxis()->SetTitleFont(22);
   hac_l_px__10->Draw("histoe");
   
   TPaveText *pt = new TPaveText(0.01,0.9396352,0.6773354,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetTextFont(22);
   TText *pt_LaTex = pt->AddText("Acceptance of events from liquid target");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
