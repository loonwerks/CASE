#!/bin/bash
set -exuo pipefail
: "${BASE_DIR:=$HOME/CASE}"
: "${OCAML_V:=4.07.1}"
: "${COQ_V:=8.10.1}"
rm -fR ~/.opam
. $BASE_DIR/seL4-CAmkES-L4v-dockerfiles/scripts/utils/common.sh
wget -qO ~/bin/opam https://github.com/ocaml/opam/releases/download/2.0.7/opam-2.0.7-x86_64-linux
chmod +x ~/bin/opam
opam init -vv --debug --comp=$OCAML_V --disable-sandboxing --reinit -a -j 4
eval `opam env`
opam install coq=$COQ_V -vv --debug -y -j 4
