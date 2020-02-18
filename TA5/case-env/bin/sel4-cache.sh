#!/bin/bash
set -exuo pipefail
: "${BASE_DIR:=$HOME/CASE}"
. $BASE_DIR/seL4-CAmkES-L4v-dockerfiles/scripts/utils/common.sh
rm -fR ~/.sel4_cache $BASE_DIR/sel4test
mkdir -p ~/.sel4_cache
try_nonroot_first mkdir -p "$BASE_DIR/sel4test" || chown_dir_to_user "$BASE_DIR/sel4test"
cd "$BASE_DIR/sel4test"
repo init -u "https://github.com/seL4/sel4test-manifest.git" --depth=1 -b $1
repo sync -j 4
mkdir build-x86_64
mkdir build-odroidxu4
cd build-x86_64
../init-build.sh -DPLATFORM=x86_64
ninja
cd ../build-odroidxu4
../init-build.sh -DPLATFORM=exynos5422 -DAARCH32=1
ninja