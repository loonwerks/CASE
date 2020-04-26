#!/usr/bin/env bash

set -e

export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
export PROJECT_HOME=$( cd "$( dirname "$0" )/.." &> /dev/null && pwd )
cd ${PROJECT_HOME}


# location of camkes-projects directory
if [ -n "$1" ]; then
    CAMKES_DIR=$1
elif [ -d "/host/camkes-project" ]; then
    CAMKES_DIR="/host/camkes-project"
elif [ -d "${HOME}/CASE/camkes" ]; then
    CAMKES_DIR="${HOME}/CASE/camkes"
fi

if [[ -z "$CAMKES_DIR" || ! -d "${CAMKES_DIR}" ]]; then
    echo "Directory '${CAMKES_DIR}' does not exist.  Please specify the location of your CAmkES project directory"
    exit -1
fi


# use the directory name for the CAmkES apps directory name 
HAMR_CAMKES_PROJ=${PWD##*/}


CAMKES_APPS_DIR=$CAMKES_DIR/projects/camkes/apps/$HAMR_CAMKES_PROJ

# create a sym-link to the project in the CAmkES app directory
if [ ! -e "${CAMKES_APPS_DIR}" ]; then
    ln -sv $PROJECT_HOME $CAMKES_APPS_DIR
fi


########################
# run CAmkES/seL4 build
########################

cd $CAMKES_DIR

BUILD_DIR=build_$HAMR_CAMKES_PROJ

rm -rf $BUILD_DIR
mkdir $BUILD_DIR
cd $BUILD_DIR

../init-build.sh -DPLATFORM=odroidc2 -DAARCH64=1 -DCAMKES_APP=$HAMR_CAMKES_PROJ && ninja

########################
# simulate via QEMU
########################

./simulate                   
