#!/bin/bash
set -exuo pipefail
bash ~/bin/coq-install.sh
: "${BASE_DIR:=$HOME/CASE}"
. $BASE_DIR/seL4-CAmkES-L4v-dockerfiles/scripts/utils/common.sh
cd $BASE_DIR
opam install menhir=$MENHIR_V -vv --debug -y -j 4
git clone --recursive -b $COMPCERT_V https://github.com/AbsInt/CompCert.git
cd CompCert
./configure x86_64-linux
make -j 4 all
as_root make install
cd ..
rm -fR CompCert