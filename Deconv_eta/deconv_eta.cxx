{
  TCanvas *c2= new TCanvas("c2","c2",800,600);
  TCanvas *c1 = new TCanvas("c1","c1",800,600);
  TCanvas *c0 = new TCanvas("c0","c0",800,600);
  c2->SetLogy();
  TFile *inf = new TFile("pi0_CD.root","read");
  Int_t Nb=500;
  TH1F *hs= new TH1F("hs","source spectrum",Nb,0.1,0.9);
  hs->SetLineWidth(2);
  TH1F* hd= (TH1F*)hs->Clone("hd");
  TH1F* hrf= (TH1F*)hs->Clone("hrf");
  
  hd->SetTitle("Deconvoluted Spectrum");
  hd->SetTitle("response f");
  hs->SetLineColor(kBlack);
  hd->SetLineColor(kRed);

  inf->Add(hs);
  TNtuple *outdata= (TNtuple *)inf->Get("outdata");
  Float_t *resf = new Float_t [ Nb ];
  Float_t *srcf = new Float_t [ Nb ];
  
  // getting response from pi0 inv mass
  outdata->Draw("M>>hs","0.9<Z&&Z<0.95","");
  TF1 * ff=new TF1("ff","gaus + pol1(3)",0,1.5);
  ff->SetParameters(100,0.15,0.05,0,50);
  TFitResultPtr r = hs->Fit(ff,"QS","",0.1,0.2);
  TF1 *rf = new TF1("rf","gaus");
  rf->SetParameters(r->Parameter(0),r->Parameter(1),r->Parameter(2));
  
  // filling response function
  Float_t start=0.25;
  Float_t dx=hs->GetBinWidth(1);
  rf->SetParameter(1,0);
  rf->SetParameter(2,r->Parameter(2)*3);

  for (int k=0;k<Nb;k++)
  {
    Float_t x = k*dx - start + hs->GetBinLowEdge(1);
    resf[k]=rf(x);
    hrf->SetBinContent(k+1, resf[k]);

  }
  ///////////////////
  // Doing Decolvolution///////

  TSpectrum *s =new TSpectrum(3);

  Float_t NZBins = 10,ZL=0.6,ZH=0.9;
  Float_t ZBW = (ZH-ZL)/NZBins;
  
  for (int n=0;n<NZBins;n++)
  {
    Float_t zlow=ZL+ZBW*n;
    Float_t zhigh=ZL+ZBW*(n+1);
    TCut Zcut = Form("%f<Z&&Z<%f",zlow,zhigh);
    outdata->Draw("M>>hs",Zcut,"goff");  
    for (int k=0;k<Nb;k++)
    {
      srcf[k]=hs->GetBinContent(k+1);
    }

    s->Deconvolution(srcf,resf,Nb,1000,1,1);
    for (int i=0;i<Nb;i++) 
    {
	hd->SetBinContent(i+1,srcf[i]);
    }
    
    hd->SetLineColor(kBlue);
    //hd->Draw();
    //hs->Draw("same");
    

    THStack *hstack = new THStack("hstack",Form("source and deconvoluted %s",Zcut.GetTitle()));
    THStack *hstack0 = new THStack("hstack0","response func and source");
    c1->cd();
    hstack0->Add(hrf);
    hstack0->Add(hs);
    hstack0->Draw("nostack");
    c2->cd();
    hstack->Add(hd);
    hstack->Add(hs);
    hstack->Draw("nostack");
    c2->SaveAs(Form("deconv_z%d.gif",n));
    c2->SaveAs(Form("deconv_z%d.C",n));
  }
  inf->Remove(hs);
}
