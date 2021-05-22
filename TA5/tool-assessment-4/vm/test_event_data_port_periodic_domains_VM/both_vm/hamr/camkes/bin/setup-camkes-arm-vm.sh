#!/usr/bin/env bash

set -o errexit -o pipefail -o noclobber

if [ -n "$1" ]; then
    CAMKES_ARM_VM_DIR=$1
else
  CASE_HOME=$HOME/CASE

  if [[ ! -d "${CASE_HOME}" ]]; then
    echo "CASE home not found: ${CASE_HOME}"
    exit 1
  fi

  CAMKES_ARM_VM_DIR=${CASE_HOME}/camkes-arm-vm
fi

if [[ -d "${CAMKES_ARM_VM_DIR}" ]]; then
  read -p "The following directory already exists, replace ${CAMKES_ARM_VM_DIR} [Y|y]? " -n 1 -r; echo
  if [[ $REPLY =~ ^[Yy]$ ]]; then
    rm -rf ${CAMKES_ARM_VM_DIR}
  else
    exit -1
  fi
fi

mkdir $CAMKES_ARM_VM_DIR
cd $CAMKES_ARM_VM_DIR

echo "Cloning camkes arm"
repo init -u https://github.com/SEL4PROJ/camkes-arm-vm-manifest.git --depth=1
repo sync -j8

echo "Cloning Kent's CAmkES"

(cd projects && rm -rf camkes && git clone https://github.com/kent-mcleod/camkes.git -b kent/aadl)

cd $CAMKES_ARM_VM_DIR

ln -sf projects/camkes/easy-settings.cmake
