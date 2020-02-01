#!/bin/bash
# Requirement: Debian 10 (buster)

set -exuo pipefail

: "${BASE_DIR:=$HOME/CASE}"
: "${GIT_USER:=Snail Mail}"
: "${GIT_EMAIL:=<>}"

: "${SIREUM_V:=ffa047c}"
: "${OCAML_V:=4.07.1}"
: "${COQ_V:=8.9.1}"
: "${MENHIR_V:=20190626}"
: "${COMPCERT_V:=v3.6}"
: "${SEL4_V:=3232714b267c613775287472ae229000dd24aa8d}"
: "${CAMKES_V:=67ce937df0c8f821e6a9f4615d9d2fa2bf9a8885}"

export DESKTOP_MACHINE=no
export MAKE_CACHES=no
export DEBIAN_FRONTEND=noninteractive
export SIREUM_HOME=$BASE_DIR/Sireum
export PATH=$PATH:$HOME/bin:$SIREUM_HOME/bin/linux/java/bin:$SIREUM_HOME/bin

command_exists() {
	command -v "$@" > /dev/null 2>&1
}

ROOT_CMD=""
if command_exists sudo; then
    ROOT_CMD='sudo -E bash -c'
elif command_exists su; then
    ROOT_CMD='su -c'
else
    cat >&2 <<-'EOF'
    Error: this installer needs the ability to run commands as root.
    We are unable to find either "sudo" or "su" available to make this happen.
EOF
    exit 1
fi

as_root() {
    set +x
    local shell_cmd
    local cmd
    local user
    cmd=( "$@" )
    shell_cmd='bash -c'
    user="$(id -un 2>/dev/null || true)"

    if [ "$user" != 'root' ]; then
        shell_cmd="$ROOT_CMD"
    fi
    printf -v cmd_str '%s ' "${cmd[@]}"
    set -x
    $shell_cmd "$cmd_str"
}

mkdir -p $BASE_DIR

as_root apt install -y curl wget git p7zip-full zip unzip libgomp1 xz-utils build-essential automake cmake python \
                       locales bc libc6-dev libgmp-dev libsodium-dev nano software-properties-common zlib1g-dev gcc g++


# Sireum
cd $BASE_DIR
git clone https://github.com/sireum/kekinian Sireum
cd $SIREUM_HOME
git checkout $SIREUM_V
git submodule update --init --recursive
bin/build.cmd 
echo "export SIREUM_HOME=$SIREUM_HOME" >> "$HOME/.bashrc"
echo "export JAVA_HOME=\$SIREUM_HOME/bin/linux/java" >> "$HOME/.bashrc"
echo "export PATH=\$PATH:\$JAVA_HOME/bin:\$SIREUM_HOME/bin:\$SIREUM_HOME/bin/linux/fmide" >> "$HOME/.bashrc"


# FMIDE (latest nightly/release); note: change for CASE tool evaluation to pinpoint to a specific release
$SIREUM_HOME/bin/install/fmide.cmd
echo "export PATH=\$PATH:\$SIREUM_HOME/bin/linux/fmide" >> "$HOME/.bashrc"


# seL4 and friends
cd $BASE_DIR
git clone https://github.com/SEL4PROJ/seL4-CAmkES-L4v-dockerfiles
SEL4_SCRIPTS=$BASE_DIR/seL4-CAmkES-L4v-dockerfiles/scripts

git config --global user.name $GIT_USER
git config --global user.email $GIT_EMAIL
git config --global color.ui true

bash $SEL4_SCRIPTS/base_tools.sh

bash $SEL4_SCRIPTS/sel4.sh

. $SEL4_SCRIPTS/utils/common.sh

echo 'en_US.UTF-8 UTF-8' | as_root tee /etc/locale.gen > /dev/null
as_root dpkg-reconfigure --frontend=noninteractive locales
echo "LANG=en_US.UTF-8" | as_root tee -a /etc/default/locale > /dev/null
echo "export LANG=en_US.UTF-8" >> "$HOME/.bashrc"
export LANG=en_US.UTF-8

mkdir -p ~/.sel4_cache
try_nonroot_first mkdir -p "$BASE_DIR/sel4test" || chown_dir_to_user "$BASE_DIR/sel4test"
cd "$BASE_DIR/sel4test"
repo init -u "https://github.com/seL4/sel4test-manifest.git" --depth=1 -b $SEL4_V
repo sync -j 4
mkdir build-x86_64
mkdir build-odroidxu4
cd build-x86_64
../init-build.sh -DPLATFORM=x86_64
ninja
cd ../build-odroidxu4
../init-build.sh -DPLATFORM=exynos5422 -DAARCH32=1
ninja

bash $SEL4_SCRIPTS/camkes.sh
try_nonroot_first mkdir -p "$BASE_DIR/camkes" || chown_dir_to_user "$BASE_DIR/camkes"
cd "$BASE_DIR/camkes"
repo init -u "https://github.com/seL4/camkes-manifest.git" --depth=1 -b $CAMKES_V
repo sync -j 4
mkdir build
cd build
../init-build.sh
ninja

#bash $SEL4_SCRIPTS/cakeml.sh


# Coq
#as_root apt install -y mccs m4 opam
#opam init --solver=mccs -vv --debug --comp=$OCAML_V --disable-sandboxing --reinit -a -j 4
#eval `opam env`
#opam install coq=$COQ_V -vv --debug -y -j 4


# CompCert (for evaluation, research and educational purposes only); requires the Coq setup above
#cd $BASE_DIR
#opam install menhir=$MENHIR_V -vv --debug -y -j 4
#git clone --recursive -b $COMPCERT_V https://github.com/AbsInt/CompCert.git
#cd CompCert
#./configure x86_64-linux
#make -j 4 all
#as_root make install
#cd ..
#rm -fR CompCert
