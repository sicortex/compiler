#!/bin/bash


num_stages=2

currdir=/home/jhj/compiler/build/bootstrap
srcdir=/home/jhj/compiler
final_inst_dir=$currdir/final_inst
stage=0
CC=pathcc
CXX=pathCC
FORT=pathf90

OLD_PATH=$PATH
export PATH=/home/jhj/compiler/build/bin:$PATH

cd $currdir

rm -rf build inst stage?

while [ $stage -lt $num_stages ]; do
    mkdir build
    cd build
    /.root0/local/home/jhj/bin/cmake/bin/cmake -D CMAKE_BUILD_TYPE=Release \
                     -D CMAKE_INSTALL_PREFIX=$final_inst_dir \
                     -D PATH64_ENABLE_FORTRAN=OFF \
                     -D PATH64_ENABLE_PROFILING=ON \
                     -D PATH64_ENABLE_OPENMP=ON \
                     -D PATH64_ENABLE_MULTILIB= \
                     -D PATH64_ENABLE_VALGRIND=OFF \
                     -D PATH64_ENABLE_HUGEPAGES=OFF \
                     -D PATH64_ENABLE_MATHLIBS=ON \
                     -D X86_WHIRL_OBJECTS=ON \
                     -D FAT_WHIRL_OBJECTS=OFF \
                     -D PATH64_ENABLE_PSCRUNTIME=ON \
                     -D PATH64_BUILD_32=OFF \
                     -D CMAKE_SKIP_RPATH=NO \
                     -D PATH64_ENABLE_TARGETS=x86_64 \
                     -D PSC_CRT_PATH_x86_64= \
                     -D PSC_DYNAMIC_LINKER_x86_64= \
                     -D CMAKE_SKIP_RPATH=ON \
                     -D CMAKE_C_COMPILER=$CC \
                     -D CMAKE_CXX_COMPILER=$CXX \
                     -D CMAKE_Fortran_COMPILER=$FORT \
                     -D PSC_LIBSUPCPP_PATH_x86_64= \
                     -D PSC_LIBSTDCPP_PATH_x86_64= \
                     -D PSC_LIBGCC_PATH_x86_64= \
                     -D PSC_LIBGCC_EH_PATH_x86_64= \
                     -D PSC_LIBGCC_S_PATH_x86_64= \
                     $srcdir > cmake.out 2>&1
    /usr/bin/gmake -j20 VERBOSE=1 > make.out 2>&1
    if [ $? -ne 0 ]; then
	stage=`expr $stage + 1`
	echo Build failed during stage $stage
	exit 1
    fi
    cd ..
    if [ -d inst ]; then
	mv inst stage$stage
    fi
    mv build inst
    if [ $stage -eq 0 ]; then
	# Set PATH for the second and later stages
	PATH=$currdir/inst/bin:$OLD_PATH
    fi
    pstage=$stage
    stage=`expr $stage + 1`
    if [ -d stage$pstage ]; then
	rm -f cmp.s$pstage.s$stage.out
	cd stage$pstage
	for i in `find . -name \*.o`; do
	    cmp $i ../inst/$i 16 16 > /dev/null 2>&1
	    cmpret=$?
	    if [ $cmpret -eq 1 ]; then
		echo warning: $i differs >> ../cmp.s$pstage.s$stage.out
	    fi
	done
	cd ..
    fi
done

