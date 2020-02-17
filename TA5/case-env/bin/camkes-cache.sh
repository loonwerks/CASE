#!/bin/bash
set -exuo pipefail
. $1/seL4-CAmkES-L4v-dockerfiles/scripts/utils/common.sh
rm -fR $1/camkes
try_nonroot_first mkdir -p "$1/camkes" || chown_dir_to_user "$1/camkes"
cd "$1/camkes"
repo init -u "https://github.com/seL4/camkes-manifest.git" --depth=1 -b $2
repo sync -j 4
mkdir build
cd build
../init-build.sh
ninja
