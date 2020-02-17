#!/bin/bash
set -exuo pipefail
. $1/seL4-CAmkES-L4v-dockerfiles/scripts/utils/common.sh
rm -fR ~/.sel4_cache $1/sel4test
mkdir -p ~/.sel4_cache
try_nonroot_first mkdir -p "$1/sel4test" || chown_dir_to_user "$1/sel4test"
cd "$1/sel4test"
repo init -u "https://github.com/seL4/sel4test-manifest.git" --depth=1 -b $2
repo sync -j 4
mkdir build-x86_64
mkdir build-odroidxu4
cd build-x86_64
../init-build.sh -DPLATFORM=x86_64
ninja
cd ../build-odroidxu4
../init-build.sh -DPLATFORM=exynos5422 -DAARCH32=1
ninja