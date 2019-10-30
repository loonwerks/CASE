#!/usr/bin/env bash

set -x

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

   
ACT_CAMKES_PROJ=${PWD##*/} # use directory name


CAMKES_APPS_DIR=$CAMKES_DIR/projects/camkes/apps/$ACT_CAMKES_PROJ


# location of ACT generated CAMKES project
ACT_CAMKES_SRC_DIR=${SCRIPT_HOME}/src/aadl/ACT_Demo_Dec2018/act

if [ ! -e "${CAMKES_APPS_DIR}" ]; then
    ln -sv $ACT_CAMKES_SRC_DIR $CAMKES_APPS_DIR
fi


######################
# run camkes/ninja
######################

cd $CAMKES_DIR

BUILD_DIR=build_$ACT_CAMKES_PROJ

rm -rf $BUILD_DIR
mkdir $BUILD_DIR
cd $BUILD_DIR

if [ "${ADD_PAUSE}" = "true" ]; then read -rep $'\nPress [Enter] key to build the CAmkES system\n'; fi

../init-build.sh -DCAMKES_APP=$ACT_CAMKES_PROJ && ninja


######################
# run simulation
######################

if [ -n "${ADD_PAUSE}" ]; then read -rep $'\nPress [Enter] key to simulate the system via QEMU\n'; fi

./simulate


