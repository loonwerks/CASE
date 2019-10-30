#!/usr/bin/env bash

export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd ${SCRIPT_HOME}


# location of camkes-projects directory
CAMKES_DIR=/host/camkes-project
if [ -n "$1" ]; then
    CAMKES_DIR=$1
fi

if [ ! -d "${CAMKES_DIR}" ]; then
    echo "Directory ${CAMKES_DIR} does not exist"
    exit -1
fi

   
ACT_CAMKES_PROJ=uav-act-slang


CAMKES_APPS_DIR=$CAMKES_DIR/projects/camkes/apps/$ACT_CAMKES_PROJ


# location of ACT generated CAMKES project
UAV_SRC_DIR=${SCRIPT_HOME}/src/aadl/ACT_Demo_Dec2018/act

if [ ! -e "${CAMKES_APPS_DIR}" ]; then
    ln -sv $UAV_SRC_DIR $CAMKES_APPS_DIR
fi


######################
# build static library
######################

# env variable used in ACT generated CMakeLists.txt
export SLANG_C_DIR=${SCRIPT_HOME}/src/c

# add CAMKES def if missing from transpiler generated cmakelist
FILE=$SLANG_C_DIR/CMakeLists.txt
grep -qxF 'if(CAMKES)' $FILE || echo -e '\nif(CAMKES)\n  add_definitions(-DCAMKES)\nendif(CAMKES)\n' >> $FILE

SLANG_BUILD_DIR=$SLANG_C_DIR/linux-camkes

rm -rf $SLANG_BUILD_DIR
#${SCRIPT_HOME}/bin/compile-linux.sh

mkdir -p $SLANG_BUILD_DIR
cd $SLANG_BUILD_DIR
#cmake -DCMAKE_BUILD_TYPE=Release ..
cmake -DCAMKES=true -DWITH_LOC=true ..
make $MAKE_ARGS


######################
# run camkes
######################

cd $CAMKES_DIR

BUILD_DIR=build_$ACT_CAMKES_PROJ

rm -rf $BUILD_DIR
mkdir $BUILD_DIR
cd $BUILD_DIR


../init-build.sh -DCAMKES_APP=$ACT_CAMKES_PROJ && ninja

./simulate


