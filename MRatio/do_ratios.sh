#!/bin/bash
######## PARAMETERS ###############
signal="Npi0"
#prefix="R_Q2_NuZPt2"
prefix="R_Pt2_Q2NuZ"
#prefix="R_Nu_Q2ZPt2"
#prefix="R_Z_Q2NuPt2"
bin_order="1,0,3,2" #Last bin is preserved, all others are integrated.
###############################


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

fileElec="/home/orsosa/EG2_Analysis/Ne_AllTarg_OSim_Tcut.root"
#fileElec="/user/o/orsosa/osoto_ana/Ne_AllTarg_HSim_Tcut.root"

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
