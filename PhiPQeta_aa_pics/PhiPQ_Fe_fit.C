void PhiPQ_Fe_fit()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 18 00:01:56 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",150,64,920,690);
   gStyle->SetOptFit(1);
   c->Range(-240,-9758.46,240,38679.14);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis2[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hs_ac_px__2 = new TH1D("hs_ac_px__2","N hadrons + AC C",12, xAxis2);
   hs_ac_px__2->SetBinContent(1,11427.81);
   hs_ac_px__2->SetBinContent(2,10162.79);
   hs_ac_px__2->SetBinContent(3,13196.39);
   hs_ac_px__2->SetBinContent(4,7927.084);
   hs_ac_px__2->SetBinContent(5,14585.83);
   hs_ac_px__2->SetBinContent(6,10827.74);
   hs_ac_px__2->SetBinContent(7,6940.189);
   hs_ac_px__2->SetBinContent(8,8900.729);
   hs_ac_px__2->SetBinContent(9,8272.291);
   hs_ac_px__2->SetBinContent(10,11107.5);
   hs_ac_px__2->SetBinContent(11,15165.29);
   hs_ac_px__2->SetBinContent(12,7712.715);
   hs_ac_px__2->SetBinError(1,2737.478);
   hs_ac_px__2->SetBinError(2,2960.033);
   hs_ac_px__2->SetBinError(3,2938.597);
   hs_ac_px__2->SetBinError(4,11084.41);
   hs_ac_px__2->SetBinError(5,17404.3);
   hs_ac_px__2->SetBinError(6,6171.664);
   hs_ac_px__2->SetBinError(7,2084.081);
   hs_ac_px__2->SetBinError(8,2785.171);
   hs_ac_px__2->SetBinError(9,1896.116);
   hs_ac_px__2->SetBinError(10,2854.684);
   hs_ac_px__2->SetBinError(11,3033.993);
   hs_ac_px__2->SetBinError(12,2226.026);
   hs_ac_px__2->SetEntries(30.24738);
   
   TF1 *fFe2 = new TF1("fFe","[0] + [1]*TMath::Cos(x/180*3.1416)+[2]*TMath::Cos(2*x/180*3.1416)",-180,180, TF1::EAddToList::kNo);
   fFe2->SetFillColor(19);
   fFe2->SetFillStyle(0);
   fFe2->SetLineWidth(3);
   fFe2->SetChisquare(5.713621);
   fFe2->SetNDF(9);
   fFe2->GetXaxis()->SetLabelFont(22);
   fFe2->GetXaxis()->SetLabelSize(0.05);
   fFe2->GetXaxis()->SetTitleSize(0.05);
   fFe2->GetXaxis()->SetTitleFont(22);
   fFe2->GetYaxis()->SetLabelFont(22);
   fFe2->GetYaxis()->SetLabelSize(0.05);
   fFe2->GetYaxis()->SetTitleSize(0.05);
   fFe2->GetYaxis()->SetTitleFont(22);
   fFe2->SetParameter(0,9562.345);
   fFe2->SetParError(0,831.1087);
   fFe2->SetParLimits(0,0,0);
   fFe2->SetParameter(1,-1698.02);
   fFe2->SetParError(1,1156.61);
   fFe2->SetParLimits(1,0,0);
   fFe2->SetParameter(2,-1120.312);
   fFe2->SetParError(2,1098.75);
   fFe2->SetParLimits(2,0,0);
   fFe2->SetParent(hs_ac_px__2);
   hs_ac_px__2->GetListOfFunctions()->Add(fFe2);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.635,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hs_ac_px");
   ptstats_LaTex->SetTextSize(0.0414);
   ptstats_LaTex = ptstats->AddText("Entries = 30     ");
   ptstats_LaTex = ptstats->AddText("Mean  = -3.527");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    105");
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 5.714 / 9");
   ptstats_LaTex = ptstats->AddText("p0       =  9562 #pm 831.1 ");
   ptstats_LaTex = ptstats->AddText("p1       = -1698 #pm 1156.6 ");
   ptstats_LaTex = ptstats->AddText("p2       = -1120 #pm 1098.8 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hs_ac_px__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hs_ac_px__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hs_ac_px__2->SetLineColor(ci);
   hs_ac_px__2->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hs_ac_px__2->SetMarkerColor(ci);
   hs_ac_px__2->SetMarkerStyle(8);
   hs_ac_px__2->SetMarkerSize(3);
   hs_ac_px__2->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hs_ac_px__2->GetXaxis()->SetRange(1,12);
   hs_ac_px__2->GetXaxis()->SetLabelFont(22);
   hs_ac_px__2->GetXaxis()->SetLabelSize(0.05);
   hs_ac_px__2->GetXaxis()->SetTitleSize(0.05);
   hs_ac_px__2->GetXaxis()->SetTickLength(0.01);
   hs_ac_px__2->GetXaxis()->SetTitleOffset(0.85);
   hs_ac_px__2->GetXaxis()->SetTitleFont(22);
   hs_ac_px__2->GetYaxis()->SetLabelFont(22);
   hs_ac_px__2->GetYaxis()->SetLabelSize(0.05);
   hs_ac_px__2->GetYaxis()->SetTitleSize(0.05);
   hs_ac_px__2->GetYaxis()->SetTitleFont(22);
   hs_ac_px__2->GetZaxis()->SetLabelFont(22);
   hs_ac_px__2->GetZaxis()->SetLabelSize(0.05);
   hs_ac_px__2->GetZaxis()->SetTitleSize(0.05);
   hs_ac_px__2->GetZaxis()->SetTitleFont(22);
   hs_ac_px__2->Draw("");
   
   TPaveText *pt = new TPaveText(0.01,0.945,0.3175817,0.995,"blNDC");
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
