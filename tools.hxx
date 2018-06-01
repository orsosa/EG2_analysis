inline void get_bin_info(const char *bfile ="binning_info.txt")
{
  char *bfile_f = Form("%s_formatted.txt",bfile);
  struct stat sb;
  if (stat(bfile, &sb) != 0)
  {
    std::cout<<Form("Error: file %s doesn't exist!\n",bfile);
    exit(1);
  }
  system(Form("awk -v c=0 \'!/#|!|+|?/{c+=1};END {print c}\' %s > lc.txt",bfile));
  system(Form("awk \'!/#|!|+|?/{print NF,$0}\' %s>%s",bfile,bfile_f));
  std::ifstream fc("lc.txt");
  fc>>NFold;
  fc.close();
  system("rm lc.txt");
  NEdges = new Int_t[NFold];
  BinName = new Char_t*[NFold];
  BinEdges = new Float_t*[NFold];
  std::ifstream binfile(bfile_f);
  int NB = 200;
  int be=0;
  char line[NB];
  TString s;
  TString tok;
  for (int k_f =0; k_f<NFold;k_f++)
  {
    Ssiz_t from=0;
    binfile.getline(line,NB);
    s.Clear();
    s.Insert(0,line);
    s=s.Strip(TString::kBoth);
    s.Tokenize(tok,from);
    cout<<tok<<endl;
    be=tok.Atoi()-1;
    NEdges[k_f]=be;
    BinEdges[k_f]=new Float_t[be];
    s.Tokenize(tok,from);
    cout<<tok.Data()<<endl;
    BinName[k_f] = new Char_t[5];
    strcpy(BinName[k_f],tok.Data());
    for (int k=0;k<be;k++)
    {
      s.Tokenize(tok,from);
      BinEdges[k_f][k]=tok.Atof();
    }
  }
  for (int k_f =0; k_f<NFold;k_f++)
  {
    
    for (int k=0;k<NEdges[k_f];k++)
    {
      cout<<"\t"<<BinEdges[k_f][k];
    }
    cout<<endl;

  }
}



inline void reset_array(Float_t *a) 
{
  Float_t def=-10;
  for (int i=0;i<len(a);i++)
  {
    a[i]=def;
  }
}
inline void read_parameters(const char *indir)
{
  std::cout<<Form("reading parameters from %s/mb_par1.txt\n",indir);
  pt1->ReadFile(Form("%s/mb_par1.txt",indir));
  pt2->ReadFile(Form("%s/mb_par2.txt",indir));
}

inline void set_parameters1(TF1 *&f, int binq2,int binnu, int binz)
{

  pt1->Draw("p0:p1:p2:p3:p4",Form("binq2==%d&&binnu==%d&&binz==%d",binq2,binnu,binz),"goffpara");
  for (int i =0;i<2;i++)
  {
    Float_t p=pt1->GetVal(i)[0];
    f->SetParameter(i,p);
  }
}

inline void set_parameters2(TF1 *&f, int binpt2,int binnu, int binz)
{

  pt2->Draw("p0:p1:p2:p3:p4",Form("binpt2==%d&&binnu==%d&&binz==%d",binpt2,binnu,binz),"goffpara");
  for (int i =0;i<2;i++)
  {
    Float_t p=pt2->GetVal(i)[0];
    f->SetParameter(i,p);
  }
}

inline Float_t get_mbratio(TH1F *h,Float_t minRange0, Float_t maxRange0,Float_t& err, int Ni = 1, Float_t kMP=kMPi0, Float_t kSP=kSPi0)
{
  Float_t minRange = minRange0;
  Float_t maxRange = maxRange0;
  ///////////////////// Fitting.
  //  set_parameters1(fmb,binq2,binnu,binz);
  
  fsig->SetParameter(0,-100);
  fsig->SetParameter(1,100);
  fsig->SetParameter(2,-100);
  fsig->SetParameter(3,h->GetMaximum()*0.8);
  fsig->SetParameter(4,kMP);
  fsig->SetParameter(5,kSP);

  fsig->SetParLimits(2,-10000,0);
  fsig->SetParLimits(3,0,2*h->GetMaximum());
  fsig->SetParLimits(4,kMP-2*kSP,kMP+2*kSP);
  fsig->SetParLimits(5,0,kSP*1.2);

  for (int k=0;k<Ni;k++)
  {
    h->Fit("fsig","QB","",minRange,maxRange);
    minRange = fsig->GetParameter(4) - 3*fsig->GetParameter(5);
    maxRange = fsig->GetParameter(4) + 3*fsig->GetParameter(5);
  }

  Float_t totI = fsig->Integral(minRange,maxRange);
  Float_t totI_e = fsig->IntegralError(minRange,maxRange);
 
  fmb->SetParameter(0,fsig->GetParameter(0));
  fmb->SetParameter(1,fsig->GetParameter(1)); 
  fmb->SetParameter(2,fsig->GetParameter(2));
  fpeak->SetParameter(0,fsig->GetParameter(3));
  fpeak->SetParameter(1,fsig->GetParameter(4));
  fpeak->SetParameter(2,fsig->GetParameter(5));
  Float_t pI = fpeak->Integral(minRange,maxRange);
  Float_t pI_e = fpeak->IntegralError(minRange,maxRange);
  //ROOT::Math::WrappedTF1 wf(fpeak);
  //pI = gi->Integral(wf,minRange,maxRange);
  //  hM->SetTitle(Form("Mass, bin (q2,nu,z) = (%d,%d,%d), tot: %f,partial: %f",binq2,binnu,binz,totI,pI));
  h->Draw("e");
  fmb->Draw("same");
  fpeak->Draw("same");

  //////////////////////////////
  //  c->SaveAs(Form("%s/hM1_%d.gif",picdir,k));
  //c->SaveAs(Form("%s/hM1_%d.C",picdir,k));
  //mbf1<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<"\t"<<fmb->GetParameter(3)<<"\t"<<fmb->GetParameter(4);
  //    mbf1<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<binq2<<binnu<<binz;

  err=pI/totI*TMath::Sqrt(pI_e*pI_e/pI/pI + totI_e*totI_e/totI/totI);
  return pI/totI;
}

// fit on eta->3pi
inline RooPlot* fit_pdf(TH1F *histo,Float_t minRange0, Float_t maxRange0,Float_t& err, RooRealVar& Ns, RooRealVar& Nb, RooDataSet *ds=0,RooRealVar *meta=0, int Ni = 1, Float_t kMP=kMPi0, Float_t kSP=kSPi0)
{

  //  TH1F *histo = hM_bin0;

  //RooRealVar Ns("Ns","signal counts",3000.,0.,1000000.);
  //RooRealVar Nb("Nb","background counts",3000.,0.,1000000.);

  
  Float_t xmin=minRange0,xmax=maxRange0,R=xmax-xmin;

  RooConstVar xminv=RooConst(xmin);
  RooConstVar xmaxv=RooConst(xmax);
  RooConstVar Rv=RooConst(R);
  
  //Signal  
  RooRealVar x("x","variable",xmin,xmax); 
  RooRealVar s("s","#sigma",kSP,0.,kSP); 
  RooRealVar m("m","mean",kMP,kMP*0.95,1.05*kMP); 
  RooGaussian sig("sig","eta mass",*meta,m,s);
  ///////////////////
  //Background
  //////regular polynome
  RooRealVar a1("a1","linear term",100.,-1000.,1000.); 
  RooRealVar a2("a2","quadratic term",-80.,-2000.,0.); 
  RooRealVar a3("a3","cubic term",0.1,-1000.,1000.); 
  //  RooRealVar a4("a4","quartic term",1.,-1000.,1000.); 
  RooPolynomial bkg("bkg","background",*meta,RooArgList(a1,a2,a3));
  //  RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2));
  RooFormulaVar minFunc("minFunc","Minimum formula","(-a2 - TMath::Sqrt(a2*a2 - 3*a3*a1) )/(3*a3)",RooArgList(a1,a2,a3));


  /*
  ////////Chebychev
  RooRealVar a1("a1","linear term",60,-1000,1000); 
  RooRealVar a2("a2","quadratic term",-150,-1000,0); 
  RooChebychev bkg("bkg","background",x,RooArgList(a1,a2));
  /////////////
  RooFormulaVar minFunc("minFunc","Minimum formula","xmaxv - Rv/2. - a1*Rv*Rv/16./a2",RooArgList(a1,a2,Rv,xmaxv));
  /////////////////////////////////////
  */

  RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(0.6),RooConst(0.15));

  RooPlot* xframe = meta->frame();
  //  RooPlot* xframe = x.frame();
  //Data
  RooDataHist data("data","dataset",x,histo);
  ////////////
  //  RooRealVar Ns("Ns","signal counts",100,0,10000);
  //RooRealVar Nb("Nb","background counts",300,0,10000);

  RooAddPdf model("model","sig + bkg",RooArgList(sig,bkg),RooArgList(Ns,Nb));
  RooFitResult* res;
  Float_t rangeFit[2]={0.42,0.75};
  if (ds!=0)
  {
    ds->plotOn(xframe);
    //res  = model.fitTo(*ds,Range(rangeFit[0],rangeFit[1]),ExternalConstraints(parConst),Save());
    res  = model.fitTo(*ds,Range(rangeFit[0],rangeFit[1]),Save());

  }
  else
    res= model.fitTo(data,Range(rangeFit[0],rangeFit[1]),ExternalConstraints(parConst),Save());
  
  //  model.plotOn(xframe,VisualizeError(*res,1),Minimizer("Minuit2"),FillColor(kOrange));

  //data.plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));

  model.plotOn(xframe,VisualizeError(*res,1),FillColor(kOrange));
  model.plotOn(xframe,Components(bkg),LineStyle(kDashed));
  //  model.plotOn(xframe,Components(sig),LineStyle(kDashed),LineColor(kBlack)); 
  model.plotOn(xframe);
  if (ds!=0)    
    ds->plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));
  else
    data.plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));
  //  xframe->Draw();
  //c->SaveAs(Form("%s/hM1_%d.gif",picdir,bin));
  //c->SaveAs(Form("%s/hM1_%d.C",picdir,bin)); 
  return xframe;
}

//fit on eta -> aa
inline RooPlot* fit_pdf_aa(TH1F *histo,Float_t minRange0, Float_t maxRange0,Float_t& err, RooDataSet *ds=0,RooRealVar *meta=0, int Ni = 1, Float_t kMP=kMPi0, Float_t kSP=kSPi0,RooWorkspace *w=0,Float_t *rangeFit=0,RooAbsPdf *bkg_model=0)
{

  RooRealVar Neta("Neta","Events on #eta",6853.,0.,1000000);
  RooRealVar Nb("Nb","Events on background",182499.,0.,1000000);

  //  TH1F *histo = hM_bin0;
  
  Float_t xmin=minRange0,xmax=maxRange0,R=xmax-xmin;

  RooConstVar xminv=RooConst(xmin);
  RooConstVar xmaxv=RooConst(xmax);
  RooConstVar Rv=RooConst(R);
  
  //Signal  
  //  RooRealVar s("s","#sigma",kSP,0.,1.05*kSP); 
  // RooRealVar m("m","mean",kMP,kMP*0.9,1.1*kMP); 
  //  
  //  RooRealVar s("s","#sigma",kSP,kSP*0.9,1.1*kSP); //sigma variable 
  RooRealVar s("s","#sigma",0.045,0.04,0.055); // sigma fixed 
  RooRealVar m("m","mean",kMP,0.5,0.6); 

  RooGaussian sig("sig","eta mass",*meta,m,s);
  ///////////////////
  //Background
  //////regular polynome
  RooRealVar a0("a0","const",0.,-1000.,1000.); 
  RooRealVar a1("a1","linear term",-0.426,-1000.,1000.) ;
  RooRealVar a2("a2","quadratic term",-0.426,-1000.,1000.); 
  RooRealVar a3("a3","cubic term",0,-1000.,1000.); 


  RooChebychev bkg_pol1("bkg_pol1","bkg polinomial 1th",*meta,RooArgList(a1));
  RooChebychev bkg_pol2("bkg_pol2","bkg polinomial 2st",*meta,RooArgList(a1,a2));
  RooChebychev bkg_pol3("bkg_pol3","bkg polinomial 3nd",*meta,RooArgList(a1,a2,a3));

  //RooRealVar a1("a1","linear term",-2.,-20000.,0.) ;
  //RooRealVar a2("a2","quadratic term",1.,0.,2000.); 

  //  RooRealVar a4("a4","quartic term",1.,-1000.,1000.); 
  //  RooPolynomial bkg("bkg","background",*meta,RooArgList(a1,a2));
  //RooPolynomial bkg("bkg","background",*meta,RooArgList(a1,a2,a3));
  RooRealVar k("k","decaying number",-10.,-100.,0.);

  RooExponential bkg_exp("bkg_exp","exponential background",*meta,k);
  //RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2));
  RooFormulaVar minFunc("minFunc","Minimum formula","(-a2 + TMath::Sqrt(a2*a2 - 3*a3*a1) )/(3*a3)",RooArgList(a1,a2,a3));

  RooRealVar Npol("Npol","polynomial entries",50,0,1e6);
  RooRealVar Nexp("Nexp","exponential entries",100,0,1e6);

  RooAddPdf bkg_exp_pol1("bkg_exp_pol1","exp + pol1",RooArgList(bkg_exp,bkg_pol1),RooArgList(Nexp,Npol));
  RooAddPdf bkg_exp_pol2("bkg_exp_pol2","exp + pol2",RooArgList(bkg_exp,bkg_pol2),RooArgList(Nexp,Npol));
  RooAddPdf bkg_exp_pol3("bkg_exp_pol3","exp + pol3",RooArgList(bkg_exp,bkg_pol3),RooArgList(Nexp,Npol));


  ///////////BACKGROUND SHAPE SELECTION ////////// 
  //RooAbsPdf *bkg = ( RooAbsPdf *)bkg_pol2.Clone("bkg");
  //RooAbsPdf *bkg = ( RooAbsPdf *)bkg_exp.Clone("bkg");
  RooAbsPdf *bkg = ( RooAbsPdf *)bkg_exp_pol1.Clone("bkg");
  //RooAbsPdf *bkg = ( RooAbsPdf *)bkg_exp_pol2.Clone("bkg");
  //RooAbsPdf *bkg = ( RooAbsPdf *)bkg_exp_pol3.Clone("bkg");
  
   /*
  ////////Chebychev
  RooRealVar a1("a1","linear term",60,-1000,1000); 
  RooRealVar a2("a2","quadratic term",-150,-1000,0); 
  RooChebychev bkg("bkg","background",x,RooArgList(a1,a2));
  /////////////
  RooFormulaVar minFunc("minFunc","Minimum formula","xmaxv - Rv/2. - a1*Rv*Rv/16./a2",RooArgList(a1,a2,Rv,xmaxv));
  /////////////////////////////////////
  */

  RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(1),RooConst(0.3));

  RooPlot* xframe = meta->frame();
  //Data

  ////////////
  //  RooRealVar Ns("Ns","signal counts",100,0,10000);
  //RooRealVar Nb("Nb","background counts",300,0,10000);

  RooAddPdf *model;

  if (bkg_model)
  {
    ((RooArgSet *)bkg_model->getParameters(*meta))->setAttribAll("Constant");
    model = new RooAddPdf("model","gauss + bkgmodel",RooArgList(sig,*bkg_model),RooArgList(Neta,Nb));
  }
  else
    model = new RooAddPdf("model",Form("gauss  + %s",bkg->GetTitle()),RooArgList(sig,*bkg),RooArgList(Neta,Nb));
  //
  

  RooFitResult* res;
  //Float_t rangeFit[2]={0.35,0.75};
  /*
  if (ds!=0)
  {
  */
  //res  = model->fitTo(*ds,Range(rangeFit[0],rangeFit[1]),ExternalConstraints(parConst),Save());
  //std::cout<<"#####    DEBUG   ########################"<<__LINE__<<std::endl;
  res  = model->fitTo(*ds,Range(rangeFit[0],rangeFit[1]),Save());
  //  std::cout<<"#####    DEBUG   ########################"<<__LINE__<<std::endl;
    /*  }
  else
    res= model->fitTo(data,Range(rangeFit[0],rangeFit[1]),ExternalConstraints(parConst),Save());
    */
  //  model.plotOn(xframe,VisualizeError(*res,1),Minimizer("Minuit2"),FillColor(kOrange));

  //data.plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));

  ds->plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));

  //std::cout<<"#####    DEBUG   ########################"<<__LINE__<<std::endl;

  model->plotOn(xframe,VisualizeError(*res,1),FillColor(kOrange));
  //std::cout<<"#####    DEBUG   ########################"<<__LINE__<<std::endl;
 
  if (bkg_model)
    model->plotOn(xframe,Components(*bkg_model),LineStyle(kDashed));
  else 
    model->plotOn(xframe,Components(*bkg),LineStyle(kDashed));
  
  model->plotOn(xframe,LineColor(kRed));
  //  if (ds!=0)

  ds->plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));
  //else
  //  data.plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));


//  xframe->Draw();
  //c->SaveAs(Form("%s/hM1_%d.gif",picdir,bin));
  //c->SaveAs(Form("%s/hM1_%d.C",picdir,bin)); 
  w->import(*model);
  w->import(parConst);
  RooArgSet *par =model->getParameters(*meta);
  w->defineSet("parameters",*par);
  w->defineSet("observable",*meta);
  w->saveSnapshot("fit_values",*par,kTRUE);

  
  delete model;
  delete bkg;
  return xframe;
}

//fit on eta -> aa mixing background
inline RooPlot* fit_pdf_aa_bkgnd(TH1F *histo,Float_t minRange0, Float_t maxRange0, RooDataSet *ds=0,RooRealVar *meta=0, int Ni = 1, Float_t kMP=kMPi0, Float_t kSP=kSPi0,RooWorkspace *w=0,Float_t *rangeFit=0)
{

  //  TH1F *histo = hM_bin0;
  
  Float_t xmin=minRange0,xmax=maxRange0,R=xmax-xmin;

  RooConstVar xminv=RooConst(xmin);
  RooConstVar xmaxv=RooConst(xmax);
  RooConstVar Rv=RooConst(R);
  
  ///////////////////
  //Background
  //////regular polynome
  RooRealVar a1_bkg("a1_bkg","linear term",-2.,-200.,200.); 
  RooRealVar a2_bkg("a2_bkg","quadratic term",1.,-200.,200.); 
  RooRealVar a3_bkg("a3_bkg","cubic term",0.1,-100,100.); 
  //  RooRealVar a4("a4","quartic term",1.,-1000.,1000.); 
  //  RooPolynomial bkg("bkg","background",*meta,RooArgList(a1,a2));
  RooPolynomial bkg_model("bkg_model","background",*meta,RooArgList(a1_bkg,a2_bkg,a3_bkg));


  //RooFormulaVar minFunc("minFunc","Minimum formula","-a1/2./a2",RooArgList(a1,a2));
  //  RooFormulaVar minFunc("minFunc","Minimum formula","(-a2 + TMath::Sqrt(a2*a2 - 3*a3*a1) )/(3*a3)",RooArgList(a1,a2,a3));


  /*
  ////////Chebychev
  RooRealVar a1("a1","linear term",60,-1000,1000); 
  RooRealVar a2("a2","quadratic term",-150,-1000,0); 
  RooChebychev bkg("bkg","background",x,RooArgList(a1,a2));
  /////////////
  RooFormulaVar minFunc("minFunc","Minimum formula","xmaxv - Rv/2. - a1*Rv*Rv/16./a2",RooArgList(a1,a2,Rv,xmaxv));
  /////////////////////////////////////
  */

  //RooGaussian parConst("parConst","Minimum constrain",minFunc,RooConst(1),RooConst(0.3));

  RooPlot* xframe = meta->frame();
  //  RooPlot* xframe = x.frame();

  //  RooRealVar Ns("Ns","signal counts",100,0,10000);
  //RooRealVar Nb("Nb","background counts",300,0,10000);

  //  RooAddPdf model("model","bkg",RooArgList(sig,bkg),RooArgList(Ns,Nb));
  RooFitResult* res;
  //Float_t rangeFit[2]={0.35,0.75};
  ds->plotOn(xframe);
  //res  = bkg_model.fitTo(*ds,Range(rangeFit[0],rangeFit[1]),ExternalConstraints(parConst),Save());
  res  = bkg_model.fitTo(*ds,Range(rangeFit[0],rangeFit[1]),Save());
  
  //model.plotOn(xframe,VisualizeError(*res,1),Minimizer("Minuit2"),FillColor(kOrange));

  //data.plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));

  bkg_model.plotOn(xframe,VisualizeError(*res,1),FillColor(kOrange));
  //  model.plotOn(xframe,Components(sig),LineStyle(kDashed),LineColor(kBlack)); 
  bkg_model.plotOn(xframe,LineColor(kRed));
  if (ds!=0)    
    ds->plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));
  //  xframe->Draw();
  //c->SaveAs(Form("%s/hM1_%d.gif",picdir,bin));
  //c->SaveAs(Form("%s/hM1_%d.C",picdir,bin)); 
  w->import(bkg_model);
  RooArgSet *par =bkg_model.getParameters(*meta);
  w->defineSet("parameters",*par);
  w->defineSet("observable",*meta);
  w->saveSnapshot("fit_values_bkg",*par,kTRUE);
  return xframe;
}

//fit on eta -> aa gsim
inline RooPlot* fit_pdf_aa_gsim(RooDataSet *ds=0, int Ni = 1, Float_t kMP=kMPi0, Float_t kSP=kSPi0,RooWorkspace *w=0,Float_t *rangeFit=0,RooAbsPdf *bkg_model=0)
{

  RooRealVar *meta=(RooRealVar *)ds->get(0)->find("meta");

  //////// pi0 peak ////////////
  RooRealVar m0("m0","mean pi0",0.135,0.125,0.145);
  RooRealVar s0("s0","sigma pi0",0.018,0.0,0.3);
  /////////// eta peak ///////////////
  RooRealVar m1("m1","mean eta",0.5467,0.543,0.55);
  RooRealVar s1("s1","sigma eta",0.000113379,0.0,0.005);
  RooGaussian peak0("peak0","pi0 mass",*meta,m0,s0);
  RooGaussian peak1("peak1","eta mass",*meta,m1,s1);
  //////////////////////// constructing smearing ///////////
  // gauss(meta,mg,sg) ;
  RooRealVar mg("mg","mean gauss bkg",-0.000117099,-2,2.);
  RooRealVar sg("sg","sigma gauss bkg",0.000528172,0.,.01);
  RooGaussian gbkg("gbkg","gaussian background",*meta,mg,sg);
  ////////////////////////////////////

  RooRealVar a0("a0","constant term",1.,-10,1e4);
  RooRealVar a1("a1","linear term",-1.,-1e4,1e4);
  RooRealVar a2("a2","quadratic term",0.,-2e3,2e3);  
  RooChebychev poly("poly","poly for gsim peak",*meta,RooArgList(a0,a1,a2));

  RooRealVar Npi0("Npi0","Events on #pi^{0}",107859.,0.,1000000);
  RooRealVar Neta("Neta","Events on #eta",20000.,0.,1000000);
  RooRealVar Nb("Nb","Events on background",526029.,0.,1000000);
  RooRealVar Nm("Nm","Events on #pi^{0} model +bkg",290116,0.,1000000);
  ///// peak model /////////////
  RooBreitWigner BWpeak("BWpeak","gsim peak",*meta,m1,s1);
  RooFFTConvPdf peak_bwxg("peak_bwxg","BW (x) gauss",*meta,BWpeak,gbkg);
  meta->setBins(10000,"cache");

  RooAddPdf model("model","peak_bwxg + pol1",RooArgList(peak_bwxg,poly),RooArgList(Neta,Nb));
  /////////////////
  //RooAddPdf gspeak("gspeak","peak + pol1",RooArgList(BWpeak,poly),RooArgList(Neta,Nb));
  //RooAddPdf model("model","peak0 + peak1  + bkg",RooArgList(peak0,peak1,bkg_lxg),RooArgList(Npi0,Neta,Nb));

  RooPlot* xframe = meta->frame();
  s1.setConstant();sg.setConstant();m1.setConstant();
  RooFitResult* res;
  //Float_t rangeFit[2]={0.35,0.75};
  ds->plotOn(xframe,RooFit::Binning(1e4),MarkerColor(kBlack),LineColor(kBlack));
  res  = model.fitTo(*ds,RooFit::Range(rangeFit[0],rangeFit[1]),RooFit::Extended(),RooFit::Save());

  model.plotOn(xframe,LineColor(kRed));
  

  w->import(model);

  RooArgSet *par =model.getParameters(*meta);
  w->defineSet("parameters",*par);
  w->defineSet("observable",*meta);
  w->saveSnapshot("fit_values",*par,kTRUE);

  return xframe;
}


inline int set_aliases_aa(TChain* &t)
{
  t->SetAlias("PhiH",Form("TMath::RadToDeg()*((%sx>0)*(TMath::ATan(%sy/%sx)) + (%sx<=0)*(TMath::ATan(%sy/%sx)+TMath::Pi()))","primary.Ph","primary.Ph","primary.Ph","primary.Ph","primary.Ph","primary.Ph"));

  t->SetAlias("SectorH",Form("(Phi%s>-30)*(int((Phi%s+90)/60) - 1) + (Phi%s<=-30)*(5)","H","H","H"));

  t->SetAlias("E1tc","fE[0]/(1.129-0.05793/fE[0] + 1.07e-12/fE[0]/fE[0])");

  t->SetAlias("E2tc","fE[1]/(1.129-0.05793/fE[1] + 1.07e-12/fE[1]/fE[1])");

  t->SetAlias("Eeta","fE[0]+fE[1]");
  t->SetAlias("Pxeta","fX[0]+fX[1]");
  t->SetAlias("Pyeta","fY[0]+fY[1]");
  t->SetAlias("Pzeta","fZ[0]+fZ[1]");

  t->SetAlias("meta","TMath::Sqrt(Eeta*Eeta - Pxeta*Pxeta - Pyeta*Pyeta - Pzeta*Pzeta)");

  t->SetAlias("p0p1","fE[0]*fE[1] - (fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])");

  t->SetAlias("meta0","TMath::Sqrt( 2*p0p1 )");

  t->SetAlias("ct","(fX[0]*fX[1] + fY[0]*fY[1] + fZ[0]*fZ[1])/(fE[0]*fE[1])");
  t->SetAlias("metaT","TMath::Sqrt( 2*fE[0]*fE[1]*(1-ct) )");
  t->SetAlias("metaT2","2*fE[0]*fE[1]*(1-ct)");

  /// boost.
  t->SetAlias("bX","Pxeta/Eeta");
  t->SetAlias("bY","Pyeta/Eeta");
  t->SetAlias("bZ","Pzeta/Eeta");
  t->SetAlias("b","TMath::Sqrt(bX*bX + bY*bY + bZ*bZ)");
  t->SetAlias("g","1.0/TMath::Sqrt(1-b*b)"); 
  t->SetAlias("bDotr_a0","bX*fX[0] + bY*fY[0] + bZ*fZ[0]");
  t->SetAlias("bDotr_a1","bX*fX[1] + bY*fY[1] + bZ*fZ[1]");

  t->SetAlias("Ea0_b","g*(fE[0] - bDotr_a0)");
  t->SetAlias("Ea1_b","g*(fE[1] - bDotr_a1)");

  t->SetAlias("Pxa0_b","fX[0]+(g-1)/(b*b)*(bDotr_a0)*bX - g*fE[0]*bX");
  t->SetAlias("Pya0_b","fY[0]+(g-1)/(b*b)*(bDotr_a0)*bY - g*fE[0]*bY");
  t->SetAlias("Pza0_b","fZ[0]+(g-1)/(b*b)*(bDotr_a0)*bZ - g*fE[0]*bZ");

  t->SetAlias("Pxa1_b","fX[1]+(g-1)/(b*b)*(bDotr_a1)*bX - g*fE[1]*bX");
  t->SetAlias("Pya1_b","fY[1]+(g-1)/(b*b)*(bDotr_a1)*bY - g*fE[1]*bY");
  t->SetAlias("Pza1_b","fZ[1]+(g-1)/(b*b)*(bDotr_a1)*bZ - g*fE[1]*bZ");

  t->SetAlias("ma0","TMath::Sqrt(fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0])");
  t->SetAlias("ma1","TMath::Sqrt(fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1])");

  t->SetAlias("ma0_2","fE[0]*fE[0] - fX[0]*fX[0] - fY[0]*fY[0] - fZ[0]*fZ[0]");
  t->SetAlias("ma1_2","fE[1]*fE[1] - fX[1]*fX[1] - fY[1]*fY[1] - fZ[1]*fZ[1]");


  if (!strcmp(tt,"Fe") )
  {
    t->SetAlias("E1tc","E1/(1.116-0.09213/E1 + 0.01007/E1/E1)");
    t->SetAlias("E2tc","E2/(1.116-0.09213/E2 + 0.01007/E2/E2)");
    
  }
  t->SetAlias("M_0","TMath::Sqrt(2*E1tc*E2tc*(1.-cos_alpha))"); 

  if(gsim||sim)
    t->SetAlias("M_0","TMath::Sqrt(2*E1*E2*(1.-cos_alpha))");

  return 0;
}
/*
class TreeReaderAA(): TObject
{
 public:
  TTree *t;
  Float_t Q2,Nu,Pt2,Z,M,ma0_2,ma1_2;
  TreeReader() : t(0), Q2(0),Nu(0),Pt2(0),Z(0),M(0),ma0_2(0),ma1_2(0);
  TreeReader(TTree *tr) : t(tr),Q2(0),Nu(0),Pt2(0),Z(0),M(0),ma0_2(0),ma1_2(0)
  {
    setBranchAddress();
  }
  setBranchAddress()
  {
    t->SetBranchAddress("Q2",&Q2);
    t->SetBranchAddress("Nu",&Q2);
    t->SetBranchAddress("Pt2",&Q2);
    t->SetBranchAddress("Z",&Q2);
  }
  Lont_t getEntries(){return t->GetEntries();}
  Int_t getEntry(int i){return t->GetEntry(i);}
  
};
*/
//fit on aa full range
inline RooPlot* fit_pdf_aa_full(RooRealVar& Npi0, RooRealVar& Neta, RooRealVar& Nm , RooRealVar& Nb, RooDataSet *ds=0,RooRealVar *meta=0, int Ni = 1, Float_t kMP=kMPi0, Float_t kSP=kSPi0,RooWorkspace *w=0,Float_t *rangeFit=0,RooAbsPdf *bkg_model=0)
{

  ////////pi0 peak
  RooRealVar m0("m0","mean pi0",0.135,0.125,0.145);
  RooRealVar s0("s0","sigma pi0",0.018,0.0,0.3);
  RooRealVar m1("m1","mean eta",0.55,0.5,0.6);
  RooRealVar s1("s1","sigma eta",0.045,0.04,0.07);
  RooGaussian peak0("peak0","pi0 mass",*meta,m0,s0);
  RooGaussian peak1("peak1","eta mass",*meta,m1,s1);
  //////////////////////// constructing background ///////////
  // gauss(meta,mg,sg) ;
  RooRealVar mg("mg","mean gauss bkg",0.0,-2,2.);
  RooRealVar sg("sg","sigma gauss bkg",0.05,0.,.5);
  RooGaussian gbkg("gbkg","gaussian background",*meta,mg,sg);

  // Construct landau(meta,ml,sl) ;
  RooRealVar ml("ml","mean landau bkg",.13,-20.,20.);
  RooRealVar sl("sl","sigma landau bkg",0.06,0.0,1.);
  RooLandau lbkg("lbkg","landau background",*meta,ml,sl);
  /////////// bkg //////////
  RooFFTConvPdf bkg_lxg("bkg_lxg","landau (X) gauss",*meta,lbkg,gbkg);
  meta->setBins(1000,"cache");
  ///////////////////////////////////////////////////////////
  ////////// pi0 model ///////////////////////////
  RooAddPdf model("model","peak0 + bkg",RooArgList(peak0,bkg_lxg),RooArgList(Npi0,Nb));

  ///////// full range model //////////////////
  RooAddPdf model_full("model_full","peak1 + peak0 + bkg",RooArgList(peak1,model),RooArgList(Neta,Nm));

  RooFitResult* res;  

  s0.setConstant();
  s1.setConstant();

  res=model.fitTo(*ds,RooFit::Extended(),RooFit::Range(0.05,0.4),RooFit::Save());
  model.getParameters(*meta)->setAttribAll("Constant");
  res=model_full.fitTo(*ds,RooFit::Extended(),RooFit::Range(rangeFit[0],rangeFit[1]),RooFit::Save()); 
  

  RooPlot* xframe = meta->frame();
  //Data
  ds->plotOn(xframe);

  model_full.plotOn(xframe,VisualizeError(*res,1),FillColor(kOrange));
  model_full.plotOn(xframe,Components(bkg_lxg),LineStyle(kDashed));
  ds->plotOn(xframe,MarkerColor(kBlack),LineColor(kBlack));
  
  w->import(model_full);
  RooArgSet *par =model_full.getParameters(*meta);
  w->defineSet("parameters",*par);
  w->defineSet("observable",*meta);
  w->saveSnapshot("fit_values",*par,kTRUE);

  return xframe;
}




inline Float_t get_Nh(TH1F *h,Float_t minRange0, Float_t maxRange0, int Ni = 1)
{
  Float_t minRange = minRange0;
  Float_t maxRange = maxRange0;
  ///////////////////// Fitting.
  //  set_parameters1(fmb,binq2,binnu,binz);
  
  fsig->SetParameter(0,10);
  fsig->SetParameter(1,0);
  fsig->SetParameter(2,-0.1);
  fsig->SetParameter(3,h->GetMaximum()*0.8);
  fsig->SetParameter(4,kMPi0);
  fsig->SetParameter(5,kSPi0);


  fsig->SetParLimits(2,-10000,0);
  fsig->SetParLimits(3,0,2*h->GetMaximum());
  fsig->SetParLimits(5,kSPi0*0.8,kSPi0*1.2);

  for (int k=0;k<Ni;k++)
  {
    h->Fit("fsig","QB","",minRange,maxRange);
    minRange = fsig->GetParameter(4) - 3*fsig->GetParameter(5);
    maxRange = fsig->GetParameter(4) + 3*fsig->GetParameter(5);
  }

  Float_t totI = fsig->Integral(minRange,maxRange);
  fmb->SetParameter(0,fsig->GetParameter(0));
  fmb->SetParameter(1,fsig->GetParameter(1)); 
  fmb->SetParameter(2,fsig->GetParameter(2));
  fpeak->SetParameter(0,fsig->GetParameter(3));
  fpeak->SetParameter(1,fsig->GetParameter(4));
  fpeak->SetParameter(2,fsig->GetParameter(5));
  Float_t pI = fpeak->Integral(minRange,maxRange)/h->GetBinWidth(1);
  //ROOT::Math::WrappedTF1 wf(fpeak);
  //pI = gi->Integral(wf,minRange,maxRange);
  //  hM->SetTitle(Form("Mass, bin (q2,nu,z) = (%d,%d,%d), tot: %f,partial: %f",binq2,binnu,binz,totI,pI));
  h->Draw("e");
  fmb->Draw("same");
  fpeak->Draw("same");
  
  //////////////////////////////
  //  c->SaveAs(Form("%s/hM1_%d.gif",picdir,k));
  //c->SaveAs(Form("%s/hM1_%d.C",picdir,k));
  //mbf1<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<"\t"<<fmb->GetParameter(3)<<"\t"<<fmb->GetParameter(4);
  //    mbf1<<fmb->GetParameter(0)<<"\t"<<fmb->GetParameter(1)<<"\t"<<fmb->GetParameter(2)<<binq2<<binnu<<binz;

  return fpeak->GetParameter(0)*fpeak->GetParameter(1)*TMath::Sqrt(2.*TMath::Pi())/h->GetBinWidth(1);
}

void setStyle()
{
  TStyle *myStyle  = new TStyle("orsosaStyle","My Root Styles");

  myStyle->SetHistMinimumZero();
  myStyle->SetPalette(1,0);
  myStyle->SetCanvasBorderMode(0);
  myStyle->SetPadBorderMode(0);
  myStyle->SetPadColor(0);
  myStyle->SetCanvasColor(0);
  myStyle->SetOptStat(0);
  //  myStyle->SetTitleColor(0);
  myStyle->SetTitleFillColor(0);
  myStyle->SetTitleBorderSize(0);

  myStyle->SetStatColor(0);

  myStyle->SetLabelSize(0.03,"xyz"); // size of axis value font
  myStyle->SetTitleSize(0.035,"xyz"); // size of axis title font 
  myStyle->SetTitleFont(22,"xyz"); // font option
  myStyle->SetTitleFont(22,"a"); // pad font option
  myStyle->SetLabelFont(22,"xyz"); 
  // Stat and legend fonts
  myStyle->SetStatFont(22); 
  myStyle->SetLegendFont(22); 
  // hiostogram style
  myStyle->SetHistLineWidth(2);
  // default canvas positioning                                                 
  //  myStyle->SetCanvasDefX(900);
  //myStyle->SetCanvasDefY(20);
  myStyle->SetCanvasDefH(690);
  myStyle->SetCanvasDefW(920);
  //myStyle->SetTitleXOffset(512);
  myStyle->SetPadBottomMargin(0.1);
  myStyle->SetPadTopMargin(0.1);
  myStyle->SetPadLeftMargin(0.125);
  myStyle->SetPadRightMargin(0.125);

  myStyle->SetPadTickX(1);
  myStyle->SetPadTickY(1);

  myStyle->SetFrameBorderMode(0);

  gROOT->SetStyle("orsosaStyle"); //uncomment to set this style 
}

TVector3 *TIdentificator::XYZToUVW(TVector3 *xyz){
  // Converts x,y,z EC hit in CLAS coordinate system
  // into u,v,w distances of the EC hit.

  Float_t ex=0.;
  Float_t wy=0.;
  Float_t zd=0.;
  Float_t yu=0.;
  Float_t ve=0.;
  Float_t wu=0.;
  Float_t xi=0.; 
  Float_t yi=0.; 
  Float_t zi=0.;
  Float_t ec_phy = 0.;
  Float_t phy = 0.;
  Float_t rot[3][3];

  // Parameters
  Float_t ec_the = 0.4363323;
  Float_t ylow = -182.974;
  Float_t yhi = 189.956;
  Float_t tgrho = 1.95325; 
  Float_t sinrho = 0.8901256; 
  Float_t cosrho = 0.455715;

  // Variables
  ex = xyz->X();
  wy = xyz->Y();
  zd = xyz->Z();
  
  phy = TMath::ATan2(wy,ex)*57.29578;
  if(phy<0.){phy = phy + 360;}
  phy = phy+30.;
  if(phy>360.){phy = phy-360.;}

  ec_phy = ((Int_t) (phy/60.))*1.0471975;

  rot[0][0] = TMath::Cos(ec_the)*TMath::Cos(ec_phy);
  rot[0][1] = -TMath::Sin(ec_phy);
  rot[0][2] = TMath::Sin(ec_the)*TMath::Cos(ec_phy);
  rot[1][0] = TMath::Cos(ec_the)*TMath::Sin(ec_phy);
  rot[1][1] = TMath::Cos(ec_phy);
  rot[1][2] = TMath::Sin(ec_the)*TMath::Sin(ec_phy);
  rot[2][0] = -TMath::Sin(ec_the);
  rot[2][1] = 0.;
  rot[2][2] = TMath::Cos(ec_the);

  yi = ex*rot[0][0]+wy*rot[1][0]+zd*rot[2][0];
  xi = ex*rot[0][1]+wy*rot[1][1]+zd*rot[2][1];
  zi = ex*rot[0][2]+wy*rot[1][2]+zd*rot[2][2];
  zi = zi-510.32 ;

  yu = (yi-ylow)/sinrho;
  ve = (yhi-ylow)/tgrho - xi + (yhi-yi)/tgrho;
  wu = ((yhi-ylow)/tgrho + xi + (yhi-yi)/tgrho)/2./cosrho;

  TVector3 * result3= new TVector3(yu,ve,wu);

  return result3;
}


inline bool check_target(char *tt="Fe")
{
  /*  //if ((-2.2<Yec&&Yec<2.0
  if((true    
      //&&-2.5e-9<Xec&&Xec<2.5e-9
       //&&-0.1<gam.M2()&&gam.M2()<0.1
       &&(((!strcmp(tt,"D"))&&-31.8<vzec&&vzec<-28.40) //D
	  ||((!strcmp(tt,"Fe"))&&-25.65<vzec&&vzec<-24.26) //Fe
	  ||((!strcmp(tt,"C"))&&-25.33<vzec&&vzec<-24.10) //C
	  ||((!strcmp(tt,"Pb"))&&-25.54<vzec&&vzec<-24.36) //Pb
	  )
       ))
       return true;*/
  return false;
}

inline void print_help()
{
  std::cout<<"####### Help #########\n"
    "\t-t <target_type>: Target type [Fe | C | Pb | Al]. Default C\n"
    "\t-l              : Select liquid target.\n"
    "\t-b              : Use background.\n"
    "\t-d <dir>        : Set out directory. Default outdir_CD_C\n"
    "\t-f <filename>   : Set input file. Default pi0_CD.root \n"
    "\t-g              : Consider gsim data.\n"
    "\t-s              : Consider sim rec data.\n"
    "\t-o <filename>             : Outfile name. Default binned.root\n"
    "\t-h              : Print help.\n"
    "#########################"	   <<std::endl;
  exit(0);
}


inline int parse_opt(int argc, char* argv[])
{
  int c;
  if(argc==1)
    print_help();
  while ((c = getopt (argc, argv, "ht:lbd:f:gso:")) != -1)
    switch (c)
      {
      case 'b':
        bkgnd = true;
        break;
      case 'g':
        gsim = true;
        break;
      case 's':
        sim = true;
        break;

      case 'l':
        strcpy(tt,"D");
        break;
      case 't':
        strcpy(st,optarg);
	strcpy(tt,st);
        break;
      case 'd':
        outdir.Append(optarg);
        break;
      case 'f':
        infile.Append(optarg);
        break;
      case 'o':
        outfile.Append(optarg);
        break;

      case 'h':
	print_help();
	break;
      case '?':
        if (optopt == 't')
          fprintf (stderr, "Option -%c target type [Fe | C | Pb | Al].\n", optopt);
        else if (isprint (optopt))
          fprintf (stderr, "Unknown option `-%c'.\n", optopt);
        else
          fprintf (stderr,
                   "Unknown option character `\\x%x'.\n",
                   optopt);
        return 1;
      default:
        abort ();
      }
}

