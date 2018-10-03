#!/bin/bash
#PBS -m n
#PBS -l walltime=98:00:00
##PBS -o /dev/null
##PBS -e /dev/null
#PBS -N mcsim
#PBS -q utfsm

debug="yes"
#TMPDIR=tmpdir
PBS_ARRAYID=$1

cd $TMPDIR
echo working on `pwd`
date

max_files_in_dir=500
#max_files_in_dir=500
st="C" # target material
target=$st; 
ttype="st" # st: solid target, lt: liquid target.
ffread="/user/o/orsosa/ffread_eg2${target}_${ttype}.gsim"
if [ $ttype == "lt" ]; then  target="D";fi
dir=${st}_${target}_simmgrEta5e6_$((PBS_ARRAYID/${max_files_in_dir}))
#dir=test100_1
#dir=test100_${st}_${target}_$((PBS_ARRAYID/${max_files_in_dir}))

echo "============================ GETTING FILES NEEDED ========================="
cp /user/o/orsosa/set_64bit_last.sh set_64bit.sh 
cp /user/o/orsosa/set_CT_root5.sh set_CT_root5.sh 
cp /user/o/orsosa/Lepto64Sim/bin/lepto${target}eta lepto
#cp /user/o/orsosa/Lepto64Sim/bin/lepto lepto
cp /user/o/orsosa/leptotxt leptotxt
cp /user/o/orsosa/txt2part txt2part
cp ${ffread} ffread_eg2.gsim
cp /data/tsunami/user/o/orsosa/reconstruction/recsis_eg2_ahmed.tcl template.tcl
cp /data/tsunami/user/o/orsosa/reconstruction/check_dir.py .
echo "============================ FILES GOT! ========================="

./check_dir.py $dir # create directory tree under /data/user/o/orsosa/simulation if necessary. 
base_dir="/data/tsunami/user/o/orsosa/simulation/"$dir;
save_dir_ct=${base_dir}/ClasTool
save_dir_nt=${base_dir}/NT10
save_dir_rec=${base_dir}/REC
tcl_dir=${base_dir}/tcl_scripts
mcin_dir=${base_dir}/MCIN
gsim_dir=${base_dir}/GSIM
gpp_dir=${base_dir}/GPP

tcl_out=${tcl_dir}/recsis_osoto_$((PBS_ARRAYID%${max_files_in_dir})).tcl
mcin_out=${mcin_dir}/mcin_$((PBS_ARRAYID%${max_files_in_dir})).evt
gsim_out=${gsim_dir}/gsim_$((PBS_ARRAYID%${max_files_in_dir})).A00
gpp_out=${gpp_dir}/gpp_$((PBS_ARRAYID%${max_files_in_dir})).A00

outfileh=${save_dir_rec}/sim_rec${target}_$((PBS_ARRAYID%${max_files_in_dir})).hbook;
outfileb=${save_dir_rec}/sim_rec${target}_$((PBS_ARRAYID%${max_files_in_dir}));
logfile=${save_dir_rec}/run_$((PBS_ARRAYID%${max_files_in_dir})).log;
fulllogfile=${save_dir_rec}/full_run_$((PBS_ARRAYID%${max_files_in_dir})).log;
rec_out=${outfileb}.A00
ct_out=${save_dir_ct}/sim_rec${target}_$((PBS_ARRAYID%${max_files_in_dir})).root
nt_out=${save_dir_nt}/sim_rec${target}_$((PBS_ARRAYID%${max_files_in_dir})).root


source ./set_64bit.sh --roover 5.34.36 --cerver 2005 --softdir /user/a/alaoui/software

echo "============================ RUNING LEPTO ========================="
lepto | leptotxt  | txt2part -omcin.evt

echo "============================ END LEPTO ========================="
echo "============================ RUNING GSIM ========================="
export CLAS_CALDB_RUNINDEX="clas_calib.RunIndex"
gsim_bat -ffread ffread_eg2.gsim -mcin mcin.evt -bosout gsim.A00
echo "================== END GSIM ======================================"
echo "================== RUNING GPP ======================================"
export CLAS_CALDB_RUNINDEX="clas_user_calib.RunindexLorenzo"
gpp -P0x1f -Y -ogpp.A00 -a1.2 -b0.86 -c0.87 -f1. -R41147 gsim.A00
echo "================== END GPP ======================================"
echo "================== BEGIN USER_ANA ======================================"
file=gpp.A00

tcl_file=recsis_osoto.tcl

tp="-25";
if [ $ttype == "lt" ]; then  tp="-30";fi
awk -v tpos=$tp -v inf=$file -v outfileh="histo.hbook" -v outfileb="sim_rec" -v logfile="log" '$1=="inputfile"{$2=inf};$2=="chist_filename"{$3=outfileh};$2=="TargetPos(3)"{$3=tpos";"};$2=="log_file_name"{$3=logfile};$1=="outputfile"{$2=outfileb}1' template.tcl > ${tcl_file};

export CLAS_CALDB_RUNINDEX="clas_calib.RunIndex"
user_ana -t ${tcl_file} | tee full_log.txt

echo "================== END USER_ANA ======================================"
echo "================== BEGIN WRITE_ROOT_DST ======================================"
source ./set_CT_root5.sh

WriteRootDst sim_rec.A00 -GSIM -o sim_rec_ct.root
echo "================== END WRITE_ROOT_DST ======================================"
echo "================== COPYING FILES ======================================"
ls -lrth

cp sim_rec.A00 ${outfileb}
#cp histo.hbook ${outfileh}
cp log ${logfile}
cp sim_rec_ct.root ${ct_out}

if [ ! -z $debug ]; then
    cp mcin.evt ${mcin_out}
    cp gsim.A00 ${gsim_out}
    cp gpp.A00 ${gpp_out}
    cp ${tcl_file} ${tcl_out}
    cp full_log.txt ${fulllogfile}
fi
date
