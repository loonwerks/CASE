#!/bin/bash
set -exuo pipefail
: "${BASE_DIR:=$HOME/CASE}"
: "${OCAML_V:=4.07.1}"
: "${COQ_V:=8.9.1}"
. $BASE_DIR/seL4-CAmkES-L4v-dockerfiles/scripts/utils/common.sh
as_root apt install -y mccs m4 opam
opam init --solver=mccs -vv --debug --comp=$OCAML_V --disable-sandboxing --reinit -a -j 4
eval `opam env`
opam install coq=$COQ_V -vv --debug -y -j 4
