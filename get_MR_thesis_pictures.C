const int NT=3;
//set_format();
int get_MR_thesis_pictures(TString fname="",TString xtitle="Var",TString outpf="out")
{
  gStyle->SetPaintTextFormat("4.02g");
  gStyle->SetOptStat(0);
  TCanvas *c = new TCanvas("c","c",1280,960);
  if (fname.IsNull()) {cout<<"file name must be given\n";exit(1);}


  TFile fin(fname,"read");
  TFile fout(outpf+"_pics.root","recreate");
  std::cout<<"okkkk!!!!\n";
  TString ST[NT]={"C","Fe","Pb"};
  Color_t col[NT]={kRed,kBlue,kBlack};

  TH2F *hs,*hl,*hac_s,*hac_l,*hs_ac,*hl_ac;
  for (int k=0;k<NT;k++)
  {
    hs_ac=(TH2F *)fin.Get("hMR_"+ST[k]+"2D_ST");
    hl_ac=(TH2F *)fin.Get("hMR_"+ST[k]+"2D_LT");
    hac_s=(TH2F *)fin.Get("hMR_"+ST[k]+"2D_STacc");
    hac_l=(TH2F *)fin.Get("hMR_"+ST[k]+"2D_LTacc");
    hs=(TH2F *)fin.Get("hMR_"+ST[k]+"_noacc_2D_ST");
    hl=(TH2F *)fin.Get("hMR_"+ST[k]+"_noacc_2D_LT");
        
    hs_ac->SetTitle("N hadrons + AC "+ST[k]);
    hs_ac->GetXaxis()->SetTitle(xtitle);
    hs_ac->GetYaxis()->SetTitle("Nby");
    hs_ac->GetXaxis()->SetLabelFont(22);
    hs_ac->GetYaxis()->SetLabelFont(22);
    hs_ac->GetXaxis()->SetTitleFont(22);
    hs_ac->GetYaxis()->SetTitleFont(22);
    hs_ac->GetXaxis()->SetTickLength(0.01);
    hs_ac->GetYaxis()->SetTickLength(0.01);
    hs_ac->GetXaxis()->SetLabelSize(0.05);
    hs_ac->GetYaxis()->SetLabelSize(0.05);
    hs_ac->GetXaxis()->SetTitleSize(0.05);
    hs_ac->GetXaxis()->SetTitleOffset(0.85);
    hs_ac->GetYaxis()->SetTitleSize(0.05);
      
    hl_ac->SetTitle("N hadrons + AC D_"+ST[k]);
    hl_ac->GetXaxis()->SetTitle(xtitle);
    hl_ac->GetYaxis()->SetTitle("Nby");
    hl_ac->GetXaxis()->SetLabelFont(22);
    hl_ac->GetYaxis()->SetLabelFont(22);
    hl_ac->GetXaxis()->SetTitleFont(22);
    hl_ac->GetYaxis()->SetTitleFont(22);
    hl_ac->GetXaxis()->SetTickLength(0.01);
    hl_ac->GetYaxis()->SetTickLength(0.01);
    hl_ac->GetXaxis()->SetLabelSize(0.05);
    hl_ac->GetYaxis()->SetLabelSize(0.05);
    hl_ac->GetXaxis()->SetTitleSize(0.05);
    hl_ac->GetXaxis()->SetTitleOffset(0.85);
    hl_ac->GetYaxis()->SetTitleSize(0.05);

    
    hac_s->SetTitle("Acceptance of events from solid target");
    hac_s->GetXaxis()->SetTitle(xtitle);
    hac_s->GetYaxis()->SetTitle("Nby");
    hac_s->GetXaxis()->SetLabelFont(22);
    hac_s->GetYaxis()->SetLabelFont(22);
    hac_s->GetXaxis()->SetTitleFont(22);
    hac_s->GetYaxis()->SetTitleFont(22);
    hac_s->GetXaxis()->SetTickLength(0.01);
    hac_s->GetYaxis()->SetTickLength(0.01);
    hac_s->GetXaxis()->SetLabelSize(0.05);
    hac_s->GetYaxis()->SetLabelSize(0.05);
    hac_s->GetXaxis()->SetTitleSize(0.05);
    hac_s->GetXaxis()->SetTitleOffset(0.85);
    hac_s->GetYaxis()->SetTitleSize(0.05);

    
    hac_l->SetTitle("Acceptance of events from liquid target");
    hac_l->GetXaxis()->SetTitle(xtitle);
    hac_l->GetYaxis()->SetTitle("Nby");
    hac_l->GetXaxis()->SetLabelFont(22);
    hac_l->GetYaxis()->SetLabelFont(22);
    hac_l->GetXaxis()->SetTitleFont(22);
    hac_l->GetYaxis()->SetTitleFont(22);
    hac_l->GetXaxis()->SetTickLength(0.01);
    hac_l->GetYaxis()->SetTickLength(0.01);
    hac_l->GetXaxis()->SetLabelSize(0.05);
    hac_l->GetYaxis()->SetLabelSize(0.05);
    hac_l->GetXaxis()->SetTitleSize(0.05);
    hac_l->GetXaxis()->SetTitleOffset(0.85);
    hac_l->GetYaxis()->SetTitleSize(0.05);

    
    hs->SetTitle("N hadrons "+ST[k]);
    hs->GetXaxis()->SetTitle(xtitle);
    hs->GetYaxis()->SetTitle("Nby");
    hs->GetXaxis()->SetLabelFont(22);
    hs->GetYaxis()->SetLabelFont(22);
    hs->GetXaxis()->SetTitleFont(22);
    hs->GetYaxis()->SetTitleFont(22);
    hs->GetXaxis()->SetTickLength(0.01);
    hs->GetYaxis()->SetTickLength(0.01);
    hs->GetXaxis()->SetLabelSize(0.05);
    hs->GetYaxis()->SetLabelSize(0.05);
    hs->GetXaxis()->SetTitleSize(0.05);
    hs->GetXaxis()->SetTitleOffset(0.85);
    hs->GetYaxis()->SetTitleSize(0.05);

    
    hl->SetTitle("N hadrons D_"+ST[k]);
    hl->GetXaxis()->SetTitle(xtitle);
    hl->GetYaxis()->SetTitle("Nby");
    hl->GetXaxis()->SetLabelFont(22);
    hl->GetYaxis()->SetLabelFont(22);
    hl->GetXaxis()->SetTitleFont(22);
    hl->GetYaxis()->SetTitleFont(22);
    hl->GetXaxis()->SetTickLength(0.01);
    hl->GetYaxis()->SetTickLength(0.01);
    hl->GetXaxis()->SetLabelSize(0.05);
    hl->GetYaxis()->SetLabelSize(0.05);
    hl->GetXaxis()->SetTitleSize(0.05);
    hl->GetXaxis()->SetTitleOffset(0.85);
    hl->GetYaxis()->SetTitleSize(0.05);

    hs_ac->Draw("colztext");
    c->SaveAs(outpf + "_N_AC_" + ST[k]+".gif");
    c->SaveAs(outpf + "_N_AC_" + ST[k]+".C");
    hl_ac->Draw("colztext");
    c->SaveAs(outpf + "_N_AC_D" + ST[k]+".gif");
    c->SaveAs(outpf + "_N_AC_D" + ST[k]+".C");
    hac_s->Draw("colztext");
    c->SaveAs(outpf + "_AC_" + ST[k]+".gif");
    c->SaveAs(outpf + "_AC_" + ST[k]+".C");
    hac_l->Draw("colztext");
    c->SaveAs(outpf + "_AC_D" + ST[k]+".gif");
    c->SaveAs(outpf + "_AC_D" + ST[k]+".C");
    hs->Draw("colztext");
    c->SaveAs(outpf + "_N_" + ST[k]+".gif");
    c->SaveAs(outpf + "_N_" + ST[k]+".C");
    hl->Draw("colztext");
    c->SaveAs(outpf + "_N_D" + ST[k]+".gif");
    c->SaveAs(outpf + "_N_D" + ST[k]+".C");
    
    hs_ac->Write("hN_AC_"+ST[k],TObject::kOverwrite);
    hl_ac->Write("hN_AC_D"+ST[k],TObject::kOverwrite);
    hac_s->Write("hAC_" + ST[k],TObject::kOverwrite);
    hac_l->Write("hAC_D" + ST[k],TObject::kOverwrite);
    hs->Write("hN_"+ST[k],TObject::kOverwrite);
    hl->Write("hN_D"+ST[k],TObject::kOverwrite);

    

    
  }
  
  return 0;
}
