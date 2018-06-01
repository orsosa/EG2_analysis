{
  TTree *t =( TTree *) _file0->Get("NElectrons");
  RooRealVar Pex("Pex","Electron momentum on x",-5,5);
  RooRealVar Pey("Pey","Electron momentum on y",-5,5);
  RooRealVar Pez("Pez","Electron momentum on z",-5,5);
  RooRealVar sector("sector","sector number",-1,6);
  RooRealVar vze("vze","electron z vertex",-35.,-18.);

  RooDataSet ds("ds","ds",RooArgSet(vze,Pex,Pey,Pez,sector),RooFit::Import(*t));
  //Gaussian wall left
  RooRealVar mw0("mw0","Mean left wall",-31.3,-32,-30.);
  RooRealVar sw0("sw0","Sigma left wall",0.2,0.,0.5);
  RooGaussian gw0("gw0","Left wall",vze,mw0,sw0); 
  //Gaussian wall right
  RooRealVar mw1("mw1","Mean right wall",-29.3,-30,-28);
  RooRealVar sw1("sw1","Sigma right wall",0.2,0.,0.5);
  RooGaussian gw1("gw1","Right wall",vze,mw1,sw1);
  //Gaussian central Al foil
  RooRealVar mc("mc","Mean Central Al peak",-27.1,-28,-25.5);
  RooRealVar sc("sc","Sigma Central Al peak",0.2,0.,0.5);
  RooGaussian gc("gc","Central Al",vze,mc,sc); 
  //Gaussian background empty target.
  RooRealVar mbe("mbe","Mean background empty target",-30.2,-31,-29);
  RooRealVar sbe("sbe","Sigma background emtpy target",1.5,0.,3.);
  RooGaussian gbe("gbe","Background empty target",vze,mbe,sbe); 
  //Gaussian background solid target.
  RooRealVar mbs("mbs","Mean background solid target",-25,-26,-23.);
  RooRealVar sbs("sbs","Sigma background solid target",1.1,0.5,4.);
  RooGaussian gbs("gbs","Background solid target",vze,mbs,sbs); 

  //Gaussian solid target.
  RooRealVar m("m","Mean Al target",-25.,-26.,-23.);
  RooRealVar s("s","Sigma Al target",0.2,0.,0.5);
  RooGaussian g("g","Al target",vze,m,s); 
  
  //pol2 background for empty target.
  RooRealVar a1("a1","Linear term",-126.,-500.,500.);
  RooRealVar a2("a2","Quadratic term",-266.,-1000.,1000.);
  RooChebychev pol2("pol2","background pol2",vze,RooArgList(a1,a2));


  //selection iof background.
  // RooAbsPdf *bkge = (RooAbsPdf *)pol2.clone("bkge"); // polynomial background on empty target.
  RooAbsPdf *bkge = (RooAbsPdf *)gbe.clone("bkge"); // gaussian background on empty target.
  RooAbsPdf *bkgs = (RooAbsPdf *)gbs.clone("bkgs"); // gaussian background on solid target.
  
  RooPlot *pl=vze.frame();
  //  ds.plotOn(pl,RooFit::Binning(500),RooFit::DrawOption("l"),RooFit::Cut("sector==0"));
  //pl->Draw();
  
  RooRealVar Nw0("Nw0","Number on left 0",91000,0.,5e6);
  RooRealVar Nw1("Nw1","Number on right 1",91000,0.,5e6);
  RooRealVar Nc("Nc","Number on central peak",27000,0.,5e6);
  RooRealVar NAl("NAl","Number on Al target",350000,0.,5e6);
  RooRealVar Nbe("Nbe","Number on background",24000.,0.,5e6);
  RooRealVar Nbs("Nbs","Number on background",101000.,0.,5e6);

  //Step pdf
  RooRealVar sh("sh","constant term",100,0.,1e4);
  RooRealVar ss("ss","Linear term",0.1,-100.,100.);
  RooRealVar x0("x0","step center",-25,-25.6,-24.6);
  RooRealVar w("w","width",0.1,0.,1.);
  RooVoigtian fpeak("fpeak","BW (x) gauss ",vze,m,w,s);
  
  //fancy model
  RooAddPdf fmodel("fmodel","fancy target model",RooArgList(gw0,gw1,gc,fpeak,*bkge,*bkgs),RooArgList(Nw0,Nw1,Nc,NAl,Nbe,Nbs));
  // RooAddPdf fmodel("fmodel","fancy target model",RooArgList(gw0,gw1,gc,fpeak,*bkge,*bkgs),RooArgList(Nw0,Nw0,Nw0,NAl,Nbe,Nbs));
      
  //Target model
   RooAddPdf tmodel("tmodel","target model",RooArgList(gw0,gw1,gc,g,*bkge,*bkgs),RooArgList(Nw0,Nw1,Nc,NAl,Nbe,Nbs));
  //RooAddPdf tmodel("tmodel","target model",RooArgList(gw0,gw1,gc,g,*bkge,*bkgs),RooArgList(Nw0,Nw0,Nw0,NAl,Nbe,Nbs));
  //empty target model
  RooAddPdf catmodel("catmodel","Empty target model",RooArgList(gw0,gw1,*bkge),RooArgList(Nw0,Nw0,Nbe));
  
  

  RooWorkspace *wspc;
  TFile fout("whole_target_all_G_fix.root","recreate");
  TCanvas *c = new TCanvas("c","c",800,600);
  c->SetLogy();
  RooDataSet *ds_sector;
  RooFitResult *res;
  for (int k=0;k<6;k++)
  {
    pl=vze.frame();
    wspc = new RooWorkspace(Form("wspc%d",k));
    //////// cut on data.
    //ds_sector=(RooDataSet*)ds.reduce(vze,Form("sector==%d&&TMath::ACos(Pez/TMath::Sqrt(Pex*Pex+Pey*Pey+Pez*Pez)<0.36)",k));
    ds_sector=(RooDataSet*)ds.reduce(vze,Form("sector==%d",k));
    ///////////////////////
    
    ds_sector->SetName(Form("ds_sector%d",k));

    //  RooFitResult *res = catmodel.fitTo(*ds_sector,RooFit::Extended(),RooFit::Save(),RooFit::Range(-33.,-28.4));
    //  catmodel.getVariables()->setAttribAll("Constant");
    //Nbe.setConstant(0);
    ds_sector->plotOn(pl,RooFit::Binning(500),RooFit::DrawOption("l"));
    //catmodel.plotOn(pl);
    
    
  //Using Simple Model.
    res = tmodel.fitTo(*ds_sector,RooFit::Extended(),RooFit::Save(),RooFit::Range(-32,-21));
    tmodel.plotOn(pl,RooFit::LineColor(kRed));
    tmodel.plotOn(pl,RooFit::Components(*bkgs),RooFit::LineStyle(kDashed));
    tmodel.plotOn(pl,RooFit::Components(*bkge),RooFit::LineStyle(kDashed));
    tmodel.plotOn(pl,RooFit::Components(gw0),RooFit::LineStyle(kDashed),RooFit::LineColor(kRed));
    tmodel.plotOn(pl,RooFit::Components(gw1),RooFit::LineStyle(kDashed),RooFit::LineColor(kRed));
    tmodel.plotOn(pl,RooFit::Components(gc),RooFit::LineStyle(kDashed),RooFit::LineColor(kRed));
    tmodel.plotOn(pl,RooFit::Components(g),RooFit::LineStyle(kDashed),RooFit::LineColor(kRed));
    
    /*  
    //Using Fancy Model
    RooFitResult *res = fmodel.fitTo(*ds_sector,RooFit::Extended(),RooFit::Save(),RooFit::Range(-32,-21));
    fmodel.plotOn(pl,RooFit::LineColor(kRed));
    fmodel.plotOn(pl,RooFit::Components(*bkgs),RooFit::LineStyle(kDashed));
    fmodel.plotOn(pl,RooFit::Components(*bkge),RooFit::LineStyle(kDashed));
    fmodel.plotOn(pl,RooFit::Components(fpeak),RooFit::LineStyle(kDashed),RooFit::LineColor(kRed));
    fmodel.plotOn(pl,RooFit::Components(gw0),RooFit::LineStyle(kDashed),RooFit::LineColor(kRed));
    fmodel.plotOn(pl,RooFit::Components(gw1),RooFit::LineStyle(kDashed),RooFit::LineColor(kRed));
    fmodel.plotOn(pl,RooFit::Components(gc),RooFit::LineStyle(kDashed),RooFit::LineColor(kRed));
*/
    pl->SetTitle(Form("Electron z vertex sector %d",k));
    pl->Draw();
    
    c->SaveAs(Form("vertex_fit/whole_target_all_G_s%d.gif",k));
    c->SaveAs(Form("vertex_fit/whole_target_all_G_s%d.pdf",k));
    c->Write(Form("picture_s%d",k),TObject::kOverwrite);
    wspc->import(ds);
    wspc->import(*ds_sector);
    wspc->import(tmodel);
    wspc->Write("",TObject::kOverwrite);
    res->Write(Form("res_s%d",k),TObject::kOverwrite);
    //  res = fmodel.fitTo(*ds_sector,RooFit::Extended(),RooFit::Save(),RooFit::Range(-32,-21));
  }
  fout.Close();
}
