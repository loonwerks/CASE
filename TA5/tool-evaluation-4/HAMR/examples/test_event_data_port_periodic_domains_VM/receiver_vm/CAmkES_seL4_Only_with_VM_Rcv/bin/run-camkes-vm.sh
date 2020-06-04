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
elif [ -d "${HOME}/CASE/camkes-arm-vm" ]; then
    CAMKES_DIR="${HOME}/CASE/camkes-arm-vm"
fi

if [[ -z "$CAMKES_DIR" || ! -d "${CAMKES_DIR}" ]]; then
    echo "Directory '${CAMKES_DIR}' does not exist.  Please specify the location of your CAmkES ARM VM project directory"
    exit -1
fi


# use the directory name for the CAmkES apps directory name 
HAMR_CAMKES_PROJ=${PWD##*/}


CAMKES_APPS_DIR=$CAMKES_DIR/projects/camkes/apps/$HAMR_CAMKES_PROJ

if [ -e "${CAMKES_APPS_DIR}" ]; then
  read -p "The following directory already exists, replace? ${CAMKES_APPS_DIR} " -n 1 -r; echo 
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

cd $CAMKES_DIR

BUILD_DIR=build_$HAMR_CAMKES_PROJ

if [ ! -e "${BUILD_DIR}" ]; then
  echo "Creating build directory: ${BUILD_DIR}"
  mkdir $BUILD_DIR
fi

cd $BUILD_DIR


../init-build.sh \
    -DUSE_CACHED_LINUX_VM=blah \
    -DPLATFORM=qemu-arm-virt \
    -DARM_HYP=ON \
    -DCAMKES_APP=$HAMR_CAMKES_PROJ

#../init-build.sh \
#    -DUSE_CACHED_LINUX_VM=blah \
#    -DPLATFORM=qemu-arm-virt \
#    -DARM_HYP=ON \
#    -DCAMKES_APP=$HAMR_CAMKES_PROJ

ninja

qemu-system-aarch64 \
    -machine virt,virtualization=on,highmem=off,secure=off \
    -cpu cortex-a53 \
    -nographic \
    -m size=1024 \
    -kernel images/capdl-loader-image-arm-qemu-arm-virt
