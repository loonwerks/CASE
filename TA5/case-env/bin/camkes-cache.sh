#!/bin/bash
set -exuo pipefail
: "${BASE_DIR:=$HOME/CASE}"
. $BASE_DIR/seL4-CAmkES-L4v-dockerfiles/scripts/utils/common.sh
rm -fR $BASE_DIR/camkes
try_nonroot_first mkdir -p "$BASE_DIR/camkes" || chown_dir_to_user "$BASE_DIR/camkes"
cd "$BASE_DIR/camkes"
repo init -u "https://github.com/seL4/camkes-manifest.git" --depth=1 -b $1
repo sync -j 4
mkdir build
cd build
../init-build.sh
ninja
