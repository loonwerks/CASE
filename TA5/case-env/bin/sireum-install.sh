#!/bin/bash -e
: "${BASE_DIR:=$HOME/CASE}"
cd $BASE_DIR
rm -fR Sireum
git clone https://github.com/sireum/kekinian Sireum
cd Sireum
if [[ ! -z "$1" ]]; then
  export SIREUM_INIT_V=$1
fi
if [[ ! -z "$2" ]]; then
  git checkout $2
fi
git submodule update --init --recursive
bin/build.cmd
