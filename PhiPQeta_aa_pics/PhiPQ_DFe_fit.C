void PhiPQ_DFe_fit()
{
//=========Macro generated from canvas: c/c
//=========  (Mon Jun 18 00:01:57 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",150,64,920,690);
   gStyle->SetOptFit(1);
   c->Range(-240,-4277.268,240,38495.41);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis5[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hl_ac_px__5 = new TH1D("hl_ac_px__5","N hadrons + AC D_C",12, xAxis5);
   hl_ac_px__5->SetBinContent(1,9892.569);
   hl_ac_px__5->SetBinContent(2,16584.94);
   hl_ac_px__5->SetBinContent(3,16758.59);
   hl_ac_px__5->SetBinContent(4,14096.74);
   hl_ac_px__5->SetBinContent(5,12051.57);
   hl_ac_px__5->SetBinContent(6,21387.15);
   hl_ac_px__5->SetBinContent(7,21809.46);
   hl_ac_px__5->SetBinContent(8,16053.05);
   hl_ac_px__5->SetBinContent(9,10956.33);
   hl_ac_px__5->SetBinContent(10,18637.85);
   hl_ac_px__5->SetBinContent(11,24805.85);
   hl_ac_px__5->SetBinContent(12,11146.06);
   hl_ac_px__5->SetBinError(1,1878.668);
   hl_ac_px__5->SetBinError(2,2881.668);
   hl_ac_px__5->SetBinError(3,3738.274);
   hl_ac_px__5->SetBinError(4,3635.73);
   hl_ac_px__5->SetBinError(5,2890.744);
   hl_ac_px__5->SetBinError(6,8413.729);
   hl_ac_px__5->SetBinError(7,10779.25);
   hl_ac_px__5->SetBinError(8,4440.841);
   hl_ac_px__5->SetBinError(9,2734.904);
   hl_ac_px__5->SetBinError(10,4083.808);
   hl_ac_px__5->SetBinError(11,3951.273);
   hl_ac_px__5->SetBinError(12,2090.624);
   hl_ac_px__5->SetEntries(126.4334);
   
   TF1 *fDFe8 = new TF1("fDFe","[0] + [1]*TMath::Cos(x/180*3.1416)+[2]*TMath::Cos(2*x/180*3.1416)",-180,180, TF1::EAddToList::kNo);
   fDFe8->SetFillColor(19);
   fDFe8->SetFillStyle(0);
   fDFe8->SetLineWidth(3);
   fDFe8->SetChisquare(16.40962);
   fDFe8->SetNDF(9);
   fDFe8->GetXaxis()->SetLabelFont(22);
   fDFe8->GetXaxis()->SetLabelSize(0.05);
   fDFe8->GetXaxis()->SetTitleSize(0.05);
   fDFe8->GetXaxis()->SetTitleFont(22);
   fDFe8->GetYaxis()->SetLabelFont(22);
   fDFe8->GetYaxis()->SetLabelSize(0.05);
   fDFe8->GetYaxis()->SetTitleSize(0.05);
   fDFe8->GetYaxis()->SetTitleFont(22);
   fDFe8->SetParameter(0,13577.43);
   fDFe8->SetParError(0,1059.022);
   fDFe8->SetParLimits(0,0,0);
   fDFe8->SetParameter(1,-532.5009);
   fDFe8->SetParError(1,1776.78);
   fDFe8->SetParLimits(1,0,0);
   fDFe8->SetParameter(2,-2507.271);
   fDFe8->SetParError(2,1617.684);
   fDFe8->SetParLimits(2,0,0);
   fDFe8->SetParent(hl_ac_px__5);
   hl_ac_px__5->GetListOfFunctions()->Add(fDFe8);
   
   TPaveStats *ptstats = new TPaveStats(0.62,0.635,0.98,0.995,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(2);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(22);
   TText *ptstats_LaTex = ptstats->AddText("hl_ac_px");
   ptstats_LaTex->SetTextSize(0.0414);
   ptstats_LaTex = ptstats->AddText("Entries = 126    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  7.544");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  99.28");
   ptstats_LaTex = ptstats->AddText("#chi^{2} / ndf = 16.41 / 9");
   ptstats_LaTex = ptstats->AddText("p0       = 1.358e+04 #pm 1.059e+03 ");
   ptstats_LaTex = ptstats->AddText("p1       = -532.5 #pm 1776.8 ");
   ptstats_LaTex = ptstats->AddText("p2       = -2507 #pm 1617.7 ");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   hl_ac_px__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hl_ac_px__5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hl_ac_px__5->SetLineColor(ci);
   hl_ac_px__5->SetLineWidth(3);

   ci = TColor::GetColor("#0000ff");
   hl_ac_px__5->SetMarkerColor(ci);
   hl_ac_px__5->SetMarkerStyle(8);
   hl_ac_px__5->SetMarkerSize(3);
   hl_ac_px__5->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hl_ac_px__5->GetXaxis()->SetRange(1,12);
   hl_ac_px__5->GetXaxis()->SetLabelFont(22);
   hl_ac_px__5->GetXaxis()->SetLabelSize(0.05);
   hl_ac_px__5->GetXaxis()->SetTitleSize(0.05);
   hl_ac_px__5->GetXaxis()->SetTickLength(0.01);
   hl_ac_px__5->GetXaxis()->SetTitleOffset(0.85);
   hl_ac_px__5->GetXaxis()->SetTitleFont(22);
   hl_ac_px__5->GetYaxis()->SetLabelFont(22);
   hl_ac_px__5->GetYaxis()->SetLabelSize(0.05);
   hl_ac_px__5->GetYaxis()->SetTitleSize(0.05);
   hl_ac_px__5->GetYaxis()->SetTitleFont(22);
   hl_ac_px__5->GetZaxis()->SetLabelFont(22);
   hl_ac_px__5->GetZaxis()->SetLabelSize(0.05);
   hl_ac_px__5->GetZaxis()->SetTitleSize(0.05);
   hl_ac_px__5->GetZaxis()->SetTitleFont(22);
   hl_ac_px__5->Draw("");
   
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
