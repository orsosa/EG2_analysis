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
