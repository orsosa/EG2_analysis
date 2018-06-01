{
//=========Macro generated from canvas: c/c
//=========  (Tue Jun  6 18:02:53 2017) by ROOT version5.34/34
   TCanvas *c = new TCanvas("c", "c",1,1,1024,744);
   c->Range(0.0750757,-586066.2,0.6134188,5274595);
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
   gre->SetName("gFeFe");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(8);
   gre->SetPoint(0,0.1484861,2253391);
   gre->SetPointError(0,3.080273e-10,1501.13);
   gre->SetPoint(1,0.1765141,3896732);
   gre->SetPointError(1,3.337277e-10,1974.014);
   gre->SetPoint(2,0.2067512,4167401);
   gre->SetPointError(2,3.353981e-10,2041.421);
   gre->SetPoint(3,0.2372808,3953700);
   gre->SetPointError(3,3.35789e-10,1988.391);
   gre->SetPoint(4,0.2677449,3483407);
   gre->SetPointError(4,3.350158e-10,1866.389);
   gre->SetPoint(5,0.2982173,2756155);
   gre->SetPointError(5,3.351216e-10,1660.167);
   gre->SetPoint(6,0.3288111,2051873);
   gre->SetPointError(6,3.350179e-10,1432.436);
   gre->SetPoint(7,0.3593929,1447418);
   gre->SetPointError(7,3.348173e-10,1203.087);
   gre->SetPoint(8,0.3899964,979354);
   gre->SetPointError(8,3.339978e-10,989.6232);
   gre->SetPoint(9,0.420521,624913);
   gre->SetPointError(9,3.336868e-10,790.5144);
   gre->SetPoint(10,0.4512275,379730);
   gre->SetPointError(10,3.330422e-10,616.2224);
   gre->SetPoint(11,0.4814692,210629);
   gre->SetPointError(11,3.309553e-10,458.9434);
   gre->SetPoint(12,0.5114877,94070);
   gre->SetPointError(12,3.268851e-10,306.7083);
   gre->SetPoint(13,0.5400084,27089);
   gre->SetPointError(13,2.911612e-10,164.5874);
   
   TH1F *Graph_gFeFe3 = new TH1F("Graph_gFeFe3","Graph",100,0.1093339,0.5791606);
   Graph_gFeFe3->SetMinimum(0);
   Graph_gFeFe3->SetMaximum(4583694);
   Graph_gFeFe3->SetDirectory(0);
   Graph_gFeFe3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_gFeFe3->SetLineColor(ci);
   Graph_gFeFe3->GetXaxis()->SetLabelFont(42);
   Graph_gFeFe3->GetXaxis()->SetLabelSize(0.035);
   Graph_gFeFe3->GetXaxis()->SetTitleSize(0.035);
   Graph_gFeFe3->GetXaxis()->SetTitleFont(42);
   Graph_gFeFe3->GetYaxis()->SetLabelFont(42);
   Graph_gFeFe3->GetYaxis()->SetLabelSize(0.035);
   Graph_gFeFe3->GetYaxis()->SetTitleSize(0.035);
   Graph_gFeFe3->GetYaxis()->SetTitleFont(42);
   Graph_gFeFe3->GetZaxis()->SetLabelFont(42);
   Graph_gFeFe3->GetZaxis()->SetLabelSize(0.035);
   Graph_gFeFe3->GetZaxis()->SetTitleSize(0.035);
   Graph_gFeFe3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gFeFe3);
   
   multigraph->Add(gre,"");
   
   gre = new TGraphErrors(14);
   gre->SetName("gFeD");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(8);
   gre->SetPoint(0,0.1485508,2335313);
   gre->SetPointError(0,2.808955e-10,1528.173);
   gre->SetPoint(1,0.176571,4098093);
   gre->SetPointError(1,3.054316e-10,2024.375);
   gre->SetPoint(2,0.206776,4464435);
   gre->SetPointError(2,3.06734e-10,2112.921);
   gre->SetPoint(3,0.2373301,4295397);
   gre->SetPointError(3,3.071159e-10,2072.534);
   gre->SetPoint(4,0.2677663,3848193);
   gre->SetPointError(4,3.063981e-10,1961.681);
   gre->SetPoint(5,0.2982554,3073519);
   gre->SetPointError(5,3.065358e-10,1753.145);
   gre->SetPoint(6,0.3288461,2316525);
   gre->SetPointError(6,3.063624e-10,1522.013);
   gre->SetPoint(7,0.3594347,1652029);
   gre->SetPointError(7,3.061078e-10,1285.313);
   gre->SetPoint(8,0.3900442,1134336);
   gre->SetPointError(8,3.056253e-10,1065.052);
   gre->SetPoint(9,0.4205881,731486);
   gre->SetPointError(9,3.049962e-10,855.2695);
   gre->SetPoint(10,0.4512604,453014);
   gre->SetPointError(10,3.047621e-10,673.0631);
   gre->SetPoint(11,0.4814722,251712);
   gre->SetPointError(11,3.026949e-10,501.7091);
   gre->SetPoint(12,0.5115603,113263);
   gre->SetPointError(12,2.991109e-10,336.5457);
   gre->SetPoint(13,0.5395051,31334);
   gre->SetPointError(13,2.574245e-10,177.0141);
   
   TH1F *Graph_gFeD4 = new TH1F("Graph_gFeD4","Graph",100,0.1094554,0.5786006);
   Graph_gFeD4->SetMinimum(0);
   Graph_gFeD4->SetMaximum(4910087);
   Graph_gFeD4->SetDirectory(0);
   Graph_gFeD4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_gFeD4->SetLineColor(ci);
   Graph_gFeD4->GetXaxis()->SetLabelFont(42);
   Graph_gFeD4->GetXaxis()->SetLabelSize(0.035);
   Graph_gFeD4->GetXaxis()->SetTitleSize(0.035);
   Graph_gFeD4->GetXaxis()->SetTitleFont(42);
   Graph_gFeD4->GetYaxis()->SetLabelFont(42);
   Graph_gFeD4->GetYaxis()->SetLabelSize(0.035);
   Graph_gFeD4->GetYaxis()->SetTitleSize(0.035);
   Graph_gFeD4->GetYaxis()->SetTitleFont(42);
   Graph_gFeD4->GetZaxis()->SetLabelFont(42);
   Graph_gFeD4->GetZaxis()->SetLabelSize(0.035);
   Graph_gFeD4->GetZaxis()->SetTitleSize(0.035);
   Graph_gFeD4->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_gFeD4);
   
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
