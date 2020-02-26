#!/bin/bash -e
: "${BASE_DIR:=$HOME/CASE}"
cd $BASE_DIR
rm -fR Sireum
git clone https://github.com/sireum/kekinian Sireum
cd Sireum
if [[ ! -z "$1" ]]; then
  git checkout $1
fi
git submodule update --init --recursive
bin/build.cmd