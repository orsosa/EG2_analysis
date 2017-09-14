#ifndef SRS_VERTEX_COR_MY_OWN_PARS_H
#define SRS_VERTEX_COR_MY_OWN_PARS_H
#include "/u/home/adhikari/LinkedFiles/rootHeaderFiles.h"

//===============================================================================//
//==========First the parameter arrays used by the correction function ==========//
//===============================================================================//
/*****************
 * Fit parameters from: https://www.jlab.org/Hall-B//secure/eg4/adhikari/EG2/Ana/Plots/VzCorFitPars/
 * Integrity of the following 3D arrays is tested with 
 * /u/site/www/html/Hall-B/secure/eg4/adhikari/Testfiles/TestCpp/Arrays/fill3DarrayAtBeginning.cpp 
 ****************/


//Correction Parameters for data with C12 as solid target
double vzCorParsE3C12[4][6][5]={ //Tgt=0
  {  //Fit parameters for electrons
    {0.0900519,-0.00196143,-4.6151e-05,1.54896e-06,-3.54939}, 
    {-0.128804,-0.00451854,8.86162e-05,5.3286e-08,17.8537}, 
    {-0.281319,-0.00145561,0.000163496,-1.87363e-06,22.8299},
    {-0.188086,-0.00163075,0.000119922,-5.30091e-07,8.39764},
    {0.0104837,0.000556466,-8.25515e-06,7.7866e-07,-12.6581},
    {-0.106399,0.00491509,8.19217e-05,-1.51603e-06,-19.5342}
  },
  {  //Fit parameters for pi-
    {-1.19728,0.0365612,-0.00039554,1.50945e-06,9.12124}, 
    {-1.23454,0.0306663,-0.000303036,1.08505e-06,27.834},
    {-1.67814,0.0482465,-0.000597114,2.60906e-06,35.6578},
    {-1.35456,0.0403809,-0.000456021,1.81586e-06,19.3106},
    {-1.07871,0.037999,-0.0004525,1.95101e-06,-3.28697}, 	
    {0.432097,-3.48251e-05,-4.85541e-05,4.10568e-07,-29.5367}
  },
  {  //Fit parameters for protons
    {-0.892672,0.0288297,-0.000315097,1.22092e-06,4.95181}, 
    {-1.10734,0.0267142,-0.000254559,8.84779e-07,26.4677},
    {-1.67055,0.0481208,-0.000595424,2.60166e-06,35.4783},
    {-1.12836,0.0337361,-0.000377638,1.49364e-06,16.8505},
    {-1.08854,0.0376171,-0.000442543,1.89935e-06,-2.92157},
    {0.700042,-0.00753086,3.62511e-05,7.37414e-08,-32.7589}
  },
  {  //Fit parameters for pi+
    {-0.29933,0.00322442,4.12112e-05,-4.64994e-07,2.92346}, 
    {0.484366,-0.0183455,0.000249844,-1.04897e-06,13.1174},
    {-0.405523,0.00138966,6.00519e-05,-3.64347e-07,29.2509},
    {-0.156867,0.00188773,2.39871e-05,-2.75742e-07,5.08274},
    {-0.731582,0.0207429,-0.000210024,8.3859e-07,-3.23352}, 
    {-0.0597684,0.000955253,4.71753e-05,-3.65489e-07,-16.0415} 
  }
};


//Correction Parameters for data with Fe (Iron) as solid target
double vzCorParsE3Fe[4][6][5]={  //Tgt=1
  {  //Fit parameters for electrons
    {-0.0949712,-0.00038669,1.77628e-05,5.31716e-07,-4.95715}, 
    {-0.19667,-0.00394028,0.000110057,-3.60862e-07,14.7832},
    {-0.312609,-0.00177652,0.000177203,-2.0697e-06,22.6351},
    {-0.261976,-0.00210286,0.000154321,-1.0582e-06,12.4954}, 
    {0.0281163,-0.000819917,-2.67135e-05,1.17818e-06,-9.65685},
    {-0.102936,0.00466353,7.74427e-05,-1.57073e-06,-20.328}
  },
  {  //Fit parameters for pi-
    {-1.06042,0.031461,-0.00034055,1.34597e-06,3.71347}, 	
    {-0.899691,0.0198242,-0.000173145,5.92845e-07,20.0056}, 
    {-0.719974,0.0186795,-0.000237701,1.09735e-06,23.7191}, 
    {-1.19415,0.0351518,-0.000413241,1.69712e-06,19.904}, 
    {-1.25153,0.0396343,-0.000458037,1.88298e-06,2.75921}, 
    {-0.174101,0.0127421,-0.000162279,7.33451e-07,-21.219}
  },
  {  //Fit parameters for protons
    {-1.20924,0.0362743,-0.000402198,1.61975e-06,5.0688},
    {-0.570351,0.0114827,-8.58366e-05,2.7092e-07,15.5695}, 
    {-0.926496,0.0257139,-0.000328052,1.48341e-06,25.7241},
    {-1.1697,0.0346909,-0.000410879,1.69704e-06,19.5092}, 
    {-1.29355,0.0413891,-0.000485112,2.0173e-06,3.02113}, 
    {-0.288271,0.0153551,-0.000184057,7.78942e-07,-19.5638}
  },
  {  //Fit parameters for pi+
    {-0.864738,0.0210055,-0.000195417,6.72139e-07,4.78634}, 
    {0.220265,-0.0119161,0.000177702,-7.23991e-07,12.4737}, 
    {4.07492,-0.144604,0.00194534,-8.59453e-06,-17.6247}, 
    {-0.0726353,-0.00326365,9.66557e-05,-6.58412e-07,7.53995}, 
    {-0.703977,0.0185103,-0.000187881,7.31483e-07,-0.299359}, 
    {0.0640177,-0.00406075,0.000114307,-6.95102e-07,-18.0239} 
  }
};


//Correction Parameters for data with Lead (Pb) as solid target
double vzCorParsE3Pb[4][6][5]={ //Tgt=2
  {  //Fit parameters for electrons
    {0.117512,-0.00304724,-6.74461e-05,1.98384e-06,-3.94389}, 
    {-0.16427,-0.0047907,9.37473e-05,7.05371e-08,18.6752}, 
    {-0.236553,-0.00231671,0.000139658,-1.49253e-06,21.905},
    {-0.310086,-0.000947043,0.000183089,-1.5442e-06,9.31871}, 
    {0.0518947,6.33849e-05,-4.03858e-05,1.29423e-06,-14.2979}, 
    {-0.106373,0.0048988,8.4389e-05,-1.63313e-06,-20.5153}
  },
  {  //Fit parameters for pi-
    {-0.332907,0.00307598,4.26704e-05,-4.40425e-07,3.16164}, 
    {0.680262,-0.0273548,0.000380557,-1.67685e-06,12.1815}, 
    {-0.00888352,-0.0018574,-2.42168e-06,2.23127e-07,20.7519},
    {-0.204096,0.00227669,3.10214e-05,-3.73347e-07,4.69269}, 
    {-0.922877,0.0286197,-0.000339793,1.51489e-06,-2.9376}, 
    {-0.024028,-0.00178818,9.15253e-05,-5.97345e-07,-16.7724}
  },
  {  //Fit parameters for protons
    {-0.941266,0.0262938,-0.000270427,1.00586e-06,7.48947}, 
    {-1.2214,0.0281291,-0.000261423,8.87225e-07,28.3283}, 
    {-1.60135,0.0448772,-0.000541289,2.28088e-06,33.8941}, 
    {-1.44048,0.0430337,-0.000497271,2.02994e-06,19.001}, 
    {-1.75542,0.0562875,-0.000662624,2.79155e-06,4.42108}, 
    {-0.0501975,0.00914547,-0.000118387,5.56066e-07,-22.4157}
  },
  {  //Fit parameters for pi+
    {-0.332907,0.00307598,4.26704e-05,-4.40425e-07,3.16164}, 
    {0.680262,-0.0273548,0.000380557,-1.67685e-06,12.1815}, 
    {-0.00888352,-0.0018574,-2.42168e-06,2.23127e-07,20.7519}, 
    {-0.204096,0.00227669,3.10214e-05,-3.73347e-07,4.69269}, 
    {-0.922877,0.0286197,-0.000339793,1.51489e-06,-2.9376}, 
    {-0.024028,-0.00178818,9.15253e-05,-5.97345e-07,-16.7724} 
  }
};


//Correction Parameters for data with Aluminum(Al) as solid target
double vzCorParsE3Al[4][6][5]={ //Tgt=3
  {  //Fit parameters for electrons
    {-0.0656194,-0.00111545,4.89914e-06,7.59202e-07,-1.41877}, 
    {-0.215618,-0.00437325,0.000117117,-3.78028e-07,19.4745}, 
    {-0.224872,-0.0027589,0.000117643,-1.06858e-06,21.7752},
    {-0.270531,-0.00145083,0.000143715,-8.48758e-07,8.28692}, 
    {0.000654115,0.000206499,-1.97771e-05,1.01082e-06,-14.0972}, 
    {-0.0827877,0.00462767,7.68618e-05,-1.59693e-06,-21.356}
  },
  {  //Fit parameters for pi-
    {-1.09804,0.0328232,-0.000368522,1.47696e-06,8.06492}, 
    {-1.30901,0.0311373,-0.00031038,1.13008e-06,29.3822}, 
    {-1.41882,0.0387064,-0.000474681,2.06412e-06,32.3211}, 
    {-1.33844,0.038385,-0.00042893,1.70636e-06,17.8261}, 
    {-1.38173,0.0457258,-0.000540892,2.27841e-06,-1.20067}, 
    {-0.0665551,0.0118724,-0.000175216,8.65671e-07,-23.6478}
  },
  {  //Fit parameters for protons
    {-0.960394,0.0291672,-0.000326169,1.29576e-06,6.19645}, 
    {-1.24862,0.0295982,-0.00029484,1.07733e-06,28.6849}, 
    {-1.52967,0.0439145,-0.000559036,2.4892e-06,32.8887}, 
    {-1.43897,0.0415313,-0.000468182,1.87229e-06,18.8884}, 
    {-1.19545,0.0411791,-0.000496226,2.12708e-06,-3.82026},
    {0.222492,0.00510945,-0.000109172,6.34798e-07,-27.862}
  },
  {  //Fit parameters for pi+
    {-0.631858,0.0130478,-9.43608e-05,1.84666e-07,6.34842}, 
    {0.22714,-0.0125612,0.00017683,-7.12733e-07,16.8259}, 
    {2.73819,-0.0965505,0.00127471,-5.53692e-06,-5.51806}, 
    {-0.377802,0.00769126,-5.2087e-05,7.78924e-08,6.22939},
    {-0.816665,0.0233574,-0.000256519,1.09781e-06,-4.13339},
    {-0.144296,0.00269097,2.07292e-05,-2.33554e-07,-16.0338} 
  }
};

//Correction Parameters for data with Tin (Sn) as solid target
double vzCorParsE3Sn[4][6][5]={ //Tgt=4
  {  //Fit parameters for electrons
    {0.183425,-0.00265127,-7.27625e-05,1.96845e-06,-3.64146}, 
    {-0.57555,-0.000435689,0.000335814,-3.69254e-06,24.7968}, 
    {0.0952189,-0.0028542,-4.51447e-05,1.06678e-06,16.9714}, 
    {-0.209001,-0.000610238,0.000134322,-7.58115e-07,9.07028},
    {0.185995,0.000143635,-8.84969e-05,1.88391e-06,-14.3008}, 
    {-0.769176,0.0118612,0.000420357,-6.89532e-06,-9.00233}
  },
  {  //Fit parameters for pi-
    {-1.59487,0.0495869,-0.000553672,2.17202e-06,14.4211}, 
    {0.0738911,0.000139399,4.23575e-07,4.39341e-08,9.49195}, 
    {0.0484895,-0.000883108,-4.45368e-06,1.47703e-07,14.9704}, 
    {-1.24145,0.0396469,-0.000451864,1.8052e-06,17.4466}, 
    {-2.79683,0.0888421,-0.0010427,4.28141e-06,18.1177}, 
    {-0.81125,0.0370274,-0.00047593,2.09213e-06,-13.4414}
  },
  {  //Fit parameters for protons
    {-1.87917,0.0562999,-0.00062066,2.41662e-06,18.6912}, 
    {0.0766286,0.000182798,3.96715e-07,3.74311e-08,9.24462}, 
    {0.0525932,-0.00075623,-4.17698e-06,1.31203e-07,14.3274}, 
    {-1.41962,0.044503,-0.00050685,2.02401e-06,19.7057}, 
    {-3.00158,0.0943886,-0.00110741,4.54949e-06,20.742}, 
    {-0.699935,0.0339627,-0.000442936,1.97565e-06,-14.697}
  },
  {  //Fit parameters for pi+
    {-0.43347,0.0118907,-0.000105444,3.49953e-07,4.4136}, 
    {0.0794667,2.16052e-05,-5.44569e-07,5.67109e-08,14.375}, 
    {0.0460624,-0.00125265,-5.63893e-06,2.34884e-07,20.1063}, 
    {0.378714,-0.0118102,0.000185087,-9.37905e-07,-1.25314}, 
    {-0.539161,0.0163653,-0.000154668,5.93999e-07,-4.34292}, 
    {-0.368154,0.0124556,-0.000101675,2.75528e-07,-11.4263}
  }
};





/**************
 *
 *  Input variables:
 *        pID:      Particle ID - 0,1,2,3 for El,pi-,Pr,pi+
 *        TgtID:    Target ID   - 0,1,2,3,4 for C12,Fe,Pb,Al,Sn
 *        Sec1to6:  sector ID (from 1 to 6)
 *                           - I get it from the ntuple variable dc_sect as follows:
 *                           - Sec1to6 = dc_sect[int(dc[i])-1]     in C/C++ 
 *                           - Sec1to6 = dc_sect(dc(i))            in fortran
 *                                where i is track index in a given event
 *        thetaRad: scattering angle theta expressed in radians (I get it as follows)
 *                           - thetaRad = acos(cz[i])
 *        vz      : the vertex-Z before correction (simply vz[i] or vz(i) from the ntuple)
 *
 *  Output variable:
 *        correctedVz:   As is obvious from the name, the routine 
 *                       returns/outputs the corrected vertex-Z.
 *
 *
 *
 *  The tag KPA in the routine's name is for my name Krishna P. Adhikari 
 *       (meaning, the parameters are my own) in order to differentiate 
 *       from other available versions of corrections (such as those from
 *       (Raphael, Taya, Or etc)
 **************/
double correctedVzKPA(int pID, int TgtID, int Sec1to6, double thetaRad, double vz)
{
  double thetaDeg=thetaRad*rad2deg, correctedVz=0.; //10/18/15
  //double meanFitFn=meanFitFunc(pID,Sec1to6,thetaDeg);
  int sec=Sec1to6 - 1; //Sec goes from 1 to 6, but array indices start from 0
  double meanFitFn=0.;
  if(TgtID==0) //C12/Carbon
    meanFitFn = vzCorParsE3C12[pID][sec][0] + vzCorParsE3C12[pID][sec][1]*thetaDeg 
      + vzCorParsE3C12[pID][sec][2]*pow(thetaDeg,2) + vzCorParsE3C12[pID][sec][3]*pow(thetaDeg,3) 
      + vzCorParsE3C12[pID][sec][4]*1.0/thetaDeg;
  else if(TgtID==1) //Fe/Iron
    meanFitFn = vzCorParsE3Fe[pID][sec][0] + vzCorParsE3Fe[pID][sec][1]*thetaDeg 
      + vzCorParsE3Fe[pID][sec][2]*pow(thetaDeg,2) + vzCorParsE3Fe[pID][sec][3]*pow(thetaDeg,3) 
      + vzCorParsE3Fe[pID][sec][4]*1.0/thetaDeg;
  else if(TgtID==2) //Pb/Lead
    meanFitFn = vzCorParsE3Pb[pID][sec][0] + vzCorParsE3Pb[pID][sec][1]*thetaDeg 
      + vzCorParsE3Pb[pID][sec][2]*pow(thetaDeg,2) + vzCorParsE3Pb[pID][sec][3]*pow(thetaDeg,3) 
      + vzCorParsE3Pb[pID][sec][4]*1.0/thetaDeg;
  else if(TgtID==3) //Al
    meanFitFn = vzCorParsE3Al[pID][sec][0] + vzCorParsE3Al[pID][sec][1]*thetaDeg 
      + vzCorParsE3Al[pID][sec][2]*pow(thetaDeg,2) + vzCorParsE3Al[pID][sec][3]*pow(thetaDeg,3) 
      + vzCorParsE3Al[pID][sec][4]*1.0/thetaDeg;
  else if(TgtID==4) //Sn/Tin
    meanFitFn = vzCorParsE3Sn[pID][sec][0] + vzCorParsE3Sn[pID][sec][1]*thetaDeg 
      + vzCorParsE3Sn[pID][sec][2]*pow(thetaDeg,2) + vzCorParsE3Sn[pID][sec][3]*pow(thetaDeg,3) 
      + vzCorParsE3Sn[pID][sec][4]*1.0/thetaDeg;
  //return (vz - meanFitFn - 25.0); //10/18/15 (Looks like there was typo in the under-review CLAS-note)
  correctedVz = (vz - meanFitFn);
  return correctedVz;
}



/*******
 *    Input for this function is the output of correctedVzKPA(..) above 12/11/15
 *    Output of this function is 0, 1 or 2 depending on whether the particle
 *      originated from Liquid target, Solid target or neither of those respectively.
 *    See https://www.jlab.org/Hall-B//secure/eg4/adhikari/EG2/Ana/Plots/VzCorKPA/vzSRC_KPAcor.html#VertexCuts
 *      for the work on determining the vertex cuts
 *******/
int getTargetUsingKPAvzCutsE3(double correctedVz) 
  {
    int whichTarget = 2; // 0, 1 or 2 for Liquid, Solid or Neither
    if      (correctedVz>-33.0 && correctedVz<-28.0) whichTarget = 0;
    else if (correctedVz>-26.0 && correctedVz<-20.0) whichTarget = 1;
    return  whichTarget;
  }

//For description of input arguments, see above just before the def. of  correctedVzKPA(..)
int getTargetAndCorrectedVzKPA(int pID, int TgtID, int Sec1to6, double thetaRad, double vz, double & correctedVz)
{
  correctedVz = correctedVzKPA(pID,TgtID,Sec1to6,thetaRad,vz);
  int whichTarget=getTargetUsingKPAvzCutsE3(correctedVz); // 0, 1 or 2 for Liquid, Solid or Neither
  return whichTarget;
}
#endif
