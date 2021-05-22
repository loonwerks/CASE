#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd ${SCRIPT_HOME}
mkdir -p cygwin-build
mkdir -p ${SCRIPT_HOME}/../../c/nix/cygwin-build
cd ${SCRIPT_HOME}/../../c/nix/cygwin-build
BOUND_CHECK=${BOUND_CHECK:-OFF}
NO_PRINT=${NO_PRINT:-OFF}
RANGE_CHECK=${RANGE_CHECK:-OFF}
WITH_LOC=${WITH_LOC:-OFF}
cmake -DBOUND_CHECK=$BOUND_CHECK -DNO_PRINT=$NO_PRINT -DRANGE_CHECK=$RANGE_CHECK -DWITH_LOC=$WITH_LOC -DCMAKE_BUILD_TYPE=Release ..
make $MAKE_ARGS
mv *.exe ${SCRIPT_HOME}/cygwin-build/