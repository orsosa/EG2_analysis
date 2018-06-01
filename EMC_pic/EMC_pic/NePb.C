{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun  6 18:02:53 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1024,744);
   c->Range(0.07494739,-468802.7,0.6136375,4219224);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridx();
   c->SetGridy();
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   TGraphErrors *gre = new TGraphErrors(14);
   gre->SetName("gPbPb");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(8);
   gre->SetPoint(0,0.1484051,848834);
   gre->SetPointError(0,8.344326e-10,921.3219);
   gre->SetPoint(1,0.1765197,1462846);
   gre->SetPointError(1,9.017875e-10,1209.482);
   gre->SetPoint(2,0.206733,1557770);
   gre->SetPointError(2,9.054536e-10,1248.107);
   gre->SetPoint(3,0.2372736,1474677);
   gre->SetPointError(3,9.06014e-10,1214.363);
   gre->SetPoint(4,0.2677317,1293300);
   gre->SetPointError(4,9.051274e-10,1137.233);
   gre->SetPoint(5,0.2981907,1017237);
   gre->SetPointError(5,9.050942e-10,1008.582);
   gre->SetPoint(6,0.3287894,750113);
   gre->SetPointError(6,9.03719e-10,866.0906);
   gre->SetPoint(7,0.3593703,526519);
   gre->SetPointError(7,9.037349e-10,725.6163);
   gre->SetPoint(8,0.3900027,350031);
   gre->SetPointError(8,9.020052e-10,591.6342);
   gre->SetPoint(9,0.420492,221796);
   gre->SetPointError(9,9.012679e-10,470.9522);
   gre->SetPoint(10,0.4512259,132043);
   gre->SetPointError(10,8.986904e-10,363.3772);
   gre->SetPoint(11,0.4813986,72794);
   gre->SetPointError(11,8.918058e-10,269.8036);
   gre->SetPoint(12,0.5115151,32098);
   gre->SetPointError(12,8.846024e-10,179.1591);
   gre->SetPoint(13,0.5401797,9524);
   gre->SetPointError(13,7.880262e-10,97.59098);
   
   TH1F *Graph_gPbPb5 = new TH1F("Graph_gPbPb5","Graph",100,0.1092277,0.5793572);
   Graph_gPbPb5->SetMinimum(0);
   Graph_gPbPb5->SetMaximum(1713977);
   Graph_gPbPb5->SetDirectory(0);
   Graph_gPbPb5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gPbPb5->SetLineColor(ci);
   Graph_gPbPb5->GetXaxis()->SetLabelFont(42);
   Graph_gPbPb5->GetXaxis()->SetLabelSize(0.035);
   Graph_gPbPb5->GetXaxis()->SetTitleSize(0.035);
   Graph_gPbPb5->GetXaxis()->SetTitleFont(42);
   Graph_gPbPb5->GetYaxis()->SetLabelFont(42);
   Graph_gPbPb5->GetYaxis()->SetLabelSize(0.035);
   Graph_gPbPb5->GetYaxis()->SetTitleSize(0.035);
   Graph_gPbPb5->GetYaxis()->SetTitleFont(42);
   Graph_gPbPb5->GetZaxis()->SetLabelFont(42);
   Graph_gPbPb5->GetZaxis()->SetLabelSize(0.035);
   Graph_gPbPb5->GetZaxis()->SetTitleSize(0.035);
   Graph_gPbPb5->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gPbPb5);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(14);
   gre->SetName("gPbD");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   gre->SetPoint(0,0.148443,1901829);
   gre->SetPointError(0,3.533359e-10,1379.068);
   gre->SetPoint(1,0.1765609,3285650);
   gre->SetPointError(1,3.826222e-10,1812.636);
   gre->SetPoint(2,0.2067781,3570389);
   gre->SetPointError(2,3.841755e-10,1889.547);
   gre->SetPoint(3,0.2373338,3435450);
   gre->SetPointError(3,3.846444e-10,1853.497);
   gre->SetPoint(4,0.2677641,3072365);
   gre->SetPointError(4,3.837604e-10,1752.816);
   gre->SetPoint(5,0.2982547,2451735);
   gre->SetPointError(5,3.841032e-10,1565.802);
   gre->SetPoint(6,0.3288368,1838679);
   gre->SetPointError(6,3.836496e-10,1355.979);
   gre->SetPoint(7,0.3594368,1307773);
   gre->SetPointError(7,3.835509e-10,1143.579);
   gre->SetPoint(8,0.3900357,892100);
   gre->SetPointError(8,3.828963e-10,944.5105);
   gre->SetPoint(9,0.4205424,572834);
   gre->SetPointError(9,3.821687e-10,756.858);
   gre->SetPoint(10,0.451238,351881);
   gre->SetPointError(10,3.814052e-10,593.1956);
   gre->SetPoint(11,0.4814549,195577);
   gre->SetPointError(11,3.784062e-10,442.2409);
   gre->SetPoint(12,0.5115942,87879);
   gre->SetPointError(12,3.75135e-10,296.4439);
   gre->SetPoint(13,0.5395372,24809);
   gre->SetPointError(13,3.217901e-10,157.5087);
   
   TH1F *Graph_gPbD6 = new TH1F("Graph_gPbD6","Graph",100,0.1093336,0.5786466);
   Graph_gPbD6->SetMinimum(0);
   Graph_gPbD6->SetMaximum(3927041);
   Graph_gPbD6->SetDirectory(0);
   Graph_gPbD6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gPbD6->SetLineColor(ci);
   Graph_gPbD6->GetXaxis()->SetLabelFont(42);
   Graph_gPbD6->GetXaxis()->SetLabelSize(0.035);
   Graph_gPbD6->GetXaxis()->SetTitleSize(0.035);
   Graph_gPbD6->GetXaxis()->SetTitleFont(42);
   Graph_gPbD6->GetYaxis()->SetLabelFont(42);
   Graph_gPbD6->GetYaxis()->SetLabelSize(0.035);
   Graph_gPbD6->GetYaxis()->SetTitleSize(0.035);
   Graph_gPbD6->GetYaxis()->SetTitleFont(42);
   Graph_gPbD6->GetZaxis()->SetLabelFont(42);
   Graph_gPbD6->GetZaxis()->SetLabelSize(0.035);
   Graph_gPbD6->GetZaxis()->SetTitleSize(0.035);
   Graph_gPbD6->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gPbD6);
   
   multigraph->Add(gre,"");
   multigraph->Draw("ap");
   multigraph->GetXaxis()->SetNdivisions(520);
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.02);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
