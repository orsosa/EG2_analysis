void PhiPQ_DC_fit()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 18 00:01:57 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",150,64,920,690);
   gStyle->SetOptFit(1);
   c->Range(-240,-2125.711,240,19131.4);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis4[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hl_ac_px__4 = new TH1D("hl_ac_px__4","N hadrons + AC D_C",12, xAxis4);
   hl_ac_px__4->SetBinContent(1,6346.025);
   hl_ac_px__4->SetBinContent(2,8749.49);
   hl_ac_px__4->SetBinContent(3,8303.279);
   hl_ac_px__4->SetBinContent(4,8060.466);
   hl_ac_px__4->SetBinContent(5,8361.278);
   hl_ac_px__4->SetBinContent(6,9029.634);
   hl_ac_px__4->SetBinContent(7,10605.66);
   hl_ac_px__4->SetBinContent(8,9170.704);
   hl_ac_px__4->SetBinContent(9,5775.872);
   hl_ac_px__4->SetBinContent(10,7680.007);
   hl_ac_px__4->SetBinContent(11,10091.39);
   hl_ac_px__4->SetBinContent(12,5336.449);
   hl_ac_px__4->SetBinError(1,1360.007);
   hl_ac_px__4->SetBinError(2,1708.582);
   hl_ac_px__4->SetBinError(3,2048.559);
   hl_ac_px__4->SetBinError(4,2268.784);
   hl_ac_px__4->SetBinError(5,2134.353);
   hl_ac_px__4->SetBinError(6,4041.064);
   hl_ac_px__4->SetBinError(7,5590.23);
   hl_ac_px__4->SetBinError(8,2481.942);
   hl_ac_px__4->SetBinError(9,1761.141);
   hl_ac_px__4->SetBinError(10,1941.426);
   hl_ac_px__4->SetBinError(11,2389.163);
   hl_ac_px__4->SetBinError(12,1232.942);
   hl_ac_px__4->SetEntries(109.9115);
   
   TF1 *fDC6 = new TF1("fDC","[0] + [1]*TMath::Cos(x/180*3.1416)+[2]*TMath::Cos(2*x/180*3.1416)",-180,180, TF1::EAddToList::kNo);
   fDC6->SetFillColor(19);
   fDC6->SetFillStyle(0);
   fDC6->SetLineWidth(3);
   fDC6->SetChisquare(5.862099);
   fDC6->SetNDF(9);
   fDC6->GetXaxis()->SetLabelFont(22);
   fDC6->GetXaxis()->SetLabelSize(0.05);
   fDC6->GetXaxis()->SetTitleSize(0.05);
   fDC6->GetXaxis()->SetTitleFont(22);
   fDC6->GetYaxis()->SetLabelFont(22);
   fDC6->GetYaxis()->SetLabelSize(0.05);
   fDC6->GetYaxis()->SetTitleSize(0.05);
   fDC6->GetYaxis()->SetTitleFont(22);
   fDC6->SetParameter(0,7609.989);
   fDC6->SetParError(0,658.2935);
   fDC6->SetParLimits(0,0,0);
   fDC6->SetParameter(1,846.8346);
   fDC6->SetParError(1,1059.624);
   fDC6->SetParLimits(1,0,0);
   fDC6->SetParameter(2,-384.1571);
   fDC6->SetParError(2,923.5351);
   fDC6->SetParLimits(2,0,0);
   fDC6->SetParent(hl_ac_px__4);
   hl_ac_px__4->GetListOfFunctions()->Add(fDC6);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.635,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hl_ac_px");
   ptstats_LaTex->SetTextSize(0.0414);
   ptstats_LaTex = ptstats->AddText("Entries = 110    ");
   ptstats_LaTex = ptstats->AddText("Mean  = -1.663");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  98.97");
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 5.862 / 9");
   ptstats_LaTex = ptstats->AddText("p0       =  7610 #pm 658.3 ");
   ptstats_LaTex = ptstats->AddText("p1       = 846.8 #pm 1059.6 ");
   ptstats_LaTex = ptstats->AddText("p2       = -384.2 #pm 923.5 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hl_ac_px__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hl_ac_px__4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   hl_ac_px__4->SetLineColor(ci);
   hl_ac_px__4->SetLineWidth(3);

   ci = TColor::GetColor("#ff0000");
   hl_ac_px__4->SetMarkerColor(ci);
   hl_ac_px__4->SetMarkerStyle(8);
   hl_ac_px__4->SetMarkerSize(3);
   hl_ac_px__4->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hl_ac_px__4->GetXaxis()->SetLabelFont(22);
   hl_ac_px__4->GetXaxis()->SetLabelSize(0.05);
   hl_ac_px__4->GetXaxis()->SetTitleSize(0.05);
   hl_ac_px__4->GetXaxis()->SetTickLength(0.01);
   hl_ac_px__4->GetXaxis()->SetTitleOffset(0.85);
   hl_ac_px__4->GetXaxis()->SetTitleFont(22);
   hl_ac_px__4->GetYaxis()->SetLabelFont(22);
   hl_ac_px__4->GetYaxis()->SetLabelSize(0.05);
   hl_ac_px__4->GetYaxis()->SetTitleSize(0.05);
   hl_ac_px__4->GetYaxis()->SetTitleFont(22);
   hl_ac_px__4->GetZaxis()->SetLabelFont(22);
   hl_ac_px__4->GetZaxis()->SetLabelSize(0.05);
   hl_ac_px__4->GetZaxis()->SetTitleSize(0.05);
   hl_ac_px__4->GetZaxis()->SetTitleFont(22);
   hl_ac_px__4->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.9407831,0.3600654,0.995,"blNDC");
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
