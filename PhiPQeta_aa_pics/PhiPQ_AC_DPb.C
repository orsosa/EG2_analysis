void PhiPQ_AC_DPb()
{
//=========Macro generated from canvas: c/c
//=========  (Sun Jun 17 22:46:43 2018) by ROOT version 6.12/06
   TCanvas *c = new TCanvas("c", "c",1,1,1280,936);
   gStyle->SetOptStat(0);
   c->Range(-240,-0.01242484,240,0.1118236);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetTickx(1);
   c->SetTicky(1);
   c->SetLeftMargin(0.125);
   c->SetRightMargin(0.125);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   Double_t xAxis16[13] = {-180, -150, -120, -90, -60, -30, 0, 30, 60, 90, 120, 150, 180}; 
   
   TH1D *hac_l_px__16 = new TH1D("hac_l_px__16","Acceptance of events from liquid target",12, xAxis16);
   hac_l_px__16->SetBinContent(1,0.08190863);
   hac_l_px__16->SetBinContent(2,0.06618118);
   hac_l_px__16->SetBinContent(3,0.05785859);
   hac_l_px__16->SetBinContent(4,0.05255988);
   hac_l_px__16->SetBinContent(5,0.05134305);
   hac_l_px__16->SetBinContent(6,0.02951914);
   hac_l_px__16->SetBinContent(7,0.02774721);
   hac_l_px__16->SetBinContent(8,0.03882942);
   hac_l_px__16->SetBinContent(9,0.06871683);
   hac_l_px__16->SetBinContent(10,0.0555983);
   hac_l_px__16->SetBinContent(11,0.05621331);
   hac_l_px__16->SetBinContent(12,0.0782839);
   hac_l_px__16->SetBinError(1,0.01275684);
   hac_l_px__16->SetBinError(2,0.01008909);
   hac_l_px__16->SetBinError(3,0.0103217);
   hac_l_px__16->SetBinError(4,0.01206689);
   hac_l_px__16->SetBinError(5,0.01067759);
   hac_l_px__16->SetBinError(6,0.01092807);
   hac_l_px__16->SetBinError(7,0.01314054);
   hac_l_px__16->SetBinError(8,0.008795574);
   hac_l_px__16->SetBinError(9,0.01233605);
   hac_l_px__16->SetBinError(10,0.01026112);
   hac_l_px__16->SetBinError(11,0.006620964);
   hac_l_px__16->SetBinError(12,0.01234308);
   hac_l_px__16->SetEntries(303.9652);
   hac_l_px__16->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   hac_l_px__16->SetLineColor(ci);
   hac_l_px__16->SetLineWidth(3);
   hac_l_px__16->SetMarkerStyle(8);
   hac_l_px__16->SetMarkerSize(0);
   hac_l_px__16->GetXaxis()->SetTitle("#phi_{pq} (deg)");
   hac_l_px__16->GetXaxis()->SetRange(1,12);
   hac_l_px__16->GetXaxis()->SetLabelFont(22);
   hac_l_px__16->GetXaxis()->SetLabelSize(0.05);
   hac_l_px__16->GetXaxis()->SetTitleSize(0.05);
   hac_l_px__16->GetXaxis()->SetTickLength(0.01);
   hac_l_px__16->GetXaxis()->SetTitleOffset(0.85);
   hac_l_px__16->GetXaxis()->SetTitleFont(22);
   hac_l_px__16->GetYaxis()->SetLabelFont(22);
   hac_l_px__16->GetYaxis()->SetLabelSize(0.05);
   hac_l_px__16->GetYaxis()->SetTitleSize(0.05);
   hac_l_px__16->GetYaxis()->SetTitleFont(22);
   hac_l_px__16->GetZaxis()->SetLabelFont(22);
   hac_l_px__16->GetZaxis()->SetLabelSize(0.05);
   hac_l_px__16->GetZaxis()->SetTitleSize(0.05);
   hac_l_px__16->GetZaxis()->SetTitleFont(22);
   hac_l_px__16->Draw("histoe");
   
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
