#!/bin/bash
######## PARAMETERS ###############
meson="eta"
signal="N"$meson
#prefix="R_Q2_NuZPt2"
#prefix="R_Pt2_Q2NuZ"
#prefix="R_Pt2"
#prefix="R_Nu"
#prefix="R_Q2"
#prefix="R_PhiPQ"
#prefix="R_Z"
#prefix="R_Nu_Q2ZPt2"
#prefix="R_Z_Q2NuPt2"
prefix="R_Pt2Z_eta"
#bin_order="0,1,2,3,4" #PhiPQ analysis.
#bin_order="1,2,3,0" #Last bin is preserved, all others are integrated.
bin_order="0,1,2,3" #Last bin is preserved, all others are integrated.

###############################

fileElec="/home/orsosa/EG2_Analysis/Ne_${meson}_AllTarg_OSim_Tcut_Q2Nu.root" #eta
#fileElec="/home/orsosa/EG2_Analysis/Ne_AllTarg_OSim_Tcut_Q2Nu.root" #pi0
#fileElec="/home/orsosa/EG2_Analysis/Ne_eta_AllTarg_OSim_Tcut_Q2Nu.root" #eta
#fileElec="/user/o/orsosa/osoto_ana/Ne_AllTarg_HSim_Tcut.root"


acceptance="no"
if [ "$2" == "-a" ];then 
    acceptance="yes"
fi
opt=""
acc="_AC"
if [ $acceptance == "no" ]; then opt="-n"; acc="";echo "NOT USING ACCEPTANCE!";
else 
    echo "USING ACCEPTANCE!"
fi


echo "using ${fileElec} to get Nelectrons."
#indir="Pt2Q2NuZpi0c_fullrange" #directory containing data and simulation binned.

#indir="ZQ2NuPt2eta3pi_fullrange_UML" #directory containing data and simulation binned.
#indir="Pt2Q2NuZeta3pi_fullrange_UML" #directory containing data and simulation binned.
#indir="Pt2Q2NuZeta3pi_fullrange_UML"
indir=""
if [ -z "$1" ]; then
    echo "input directory should be given"
    exit 1;
else
    indir=$1
fi
dir_suffix="${indir}/${prefix}${acc}" #outdir

# don't forget binning_info.txt
rm $dir_suffix.root 2> /dev/null
./get_MRatio_new -e ${fileElec}  -o ${bin_order} -i ${indir} -t C -d ${dir_suffix} -s $signal $opt;

./get_MRatio_new -e ${fileElec} -o ${bin_order} -i ${indir} -t Fe -d ${dir_suffix} -s $signal $opt;

./get_MRatio_new -e ${fileElec} -o ${bin_order} -i ${indir} -t Pb -d ${dir_suffix} -s $signal $opt;

# Q2 Z Nu schema, don't forget binning_info.txt
