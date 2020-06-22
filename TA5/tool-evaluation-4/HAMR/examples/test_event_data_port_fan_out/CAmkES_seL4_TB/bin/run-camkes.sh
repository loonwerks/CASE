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
    echo "Directory '${CAMKES_DIR}' does not exist.  Please specify the location of your camkes project directory."
    echo "See https://docs.sel4.systems/projects/camkes"
    exit -1
fi


# use the directory name for the CAmkES apps directory name
HAMR_CAMKES_PROJ=${PWD##*/}


CAMKES_APPS_DIR=$CAMKES_DIR/projects/camkes/apps/$HAMR_CAMKES_PROJ

# create a sym-link to the project in the CAmkES app directory

if [ -e "${CAMKES_APPS_DIR}" ]; then
  read -p "The following app directory already exists, replace ${CAMKES_APPS_DIR} [Y|y]? " -n 1 -r; echo
  if [[ $REPLY =~ ^[Yy]$ ]]; then
    rm -rf ${CAMKES_APPS_DIR}
  else
    exit -1
  fi
fi

ln -sv $PROJECT_HOME $CAMKES_APPS_DIR

########################
# run CAmkES/seL4 build
########################

BUILD_DIR=$CAMKES_DIR/build_$HAMR_CAMKES_PROJ

if [ -e "${BUILD_DIR}" ]; then
  read -p "The following build directory already exists, replace ${BUILD_DIR} [Y|y]? " -n 1 -r; echo
  if [[ $REPLY =~ ^[Yy]$ ]]; then
    rm -rf ${BUILD_DIR}
    mkdir ${BUILD_DIR}
  fi
else
  mkdir ${BUILD_DIR}
fi

cd ${BUILD_DIR}

../init-build.sh -DCAMKES_APP=$HAMR_CAMKES_PROJ

ninja

########################
# simulate via QEMU
########################

./simulate