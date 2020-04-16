#!/bin/bash
# Requirement: Debian 10 (buster)

set -exuo pipefail

: "${BASE_DIR:=$HOME/CASE}"
: "${GIT_USER:=Snail Mail}"
: "${GIT_EMAIL:=<>}"

: "${SIREUM_V:=5e00c74}"
: "${SEL4_SCRIPTS_V:=ade4e6a4062f214009fde5fee385e3ae999af56c}"
: "${SEL4_V:=28831f579e3560bd3aa18a3898505f091d66b076}"
: "${CAMKES_V:=e7f5c6da03fc8a71a5a2e503de9f9004acf3ef2a}"
: "${QEMU_VERSION:=v4.2.0}"

export DESKTOP_MACHINE=no
export MAKE_CACHES=no
export DEBIAN_FRONTEND=noninteractive
export SIREUM_HOME=$BASE_DIR/Sireum
export PATH=$PATH:$HOME/bin:$SIREUM_HOME/bin/linux/java/bin:$SIREUM_HOME/bin:$BASE_DIR/camkes/build/capDL-tool

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
bash ~/bin/sireum-install.sh $SIREUM_V 
echo "export SIREUM_HOME=$SIREUM_HOME" >> "$HOME/.bashrc"
echo "export JAVA_HOME=\$SIREUM_HOME/bin/linux/java" >> "$HOME/.bashrc"
echo "export PATH=\$PATH:\$JAVA_HOME/bin:\$SIREUM_HOME/bin:\$SIREUM_HOME/bin/linux/fmide" >> "$HOME/.bashrc"


# FMIDE (latest nightly/release)
$SIREUM_HOME/bin/install/fmide.cmd # optionally, add a release tag name as an argument
echo "export PATH=\$PATH:\$SIREUM_HOME/bin/linux/fmide" >> "$HOME/.bashrc"


# seL4 and friends
cd $BASE_DIR
git clone https://github.com/SEL4PROJ/seL4-CAmkES-L4v-dockerfiles
SEL4_SCRIPTS=$BASE_DIR/seL4-CAmkES-L4v-dockerfiles/scripts
cd $SEL4_SCRIPTS
git checkout $SEL4_SCRIPTS_V
cd $BASE_DIR

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

bash ~/bin/sel4-cache.sh $SEL4_V

bash $SEL4_SCRIPTS/camkes.sh

bash ~/bin/camkes-cache.sh $CAMKES_V
echo "export PATH=\$PATH:$BASE_DIR/camkes/build/capDL-tool" >> "$HOME/.bashrc"

# Install required Qemu version and add it to the front of the path
git clone https://github.com/qemu/qemu.git -b $QEMU_VERSION --depth=1 "$BASE_DIR/qemu"
(cd "$BASE_DIR/qemu" && ./configure --target-list=aarch64-softmmu --prefix=$BASE_DIR/qemu/install && make -j 4 && make install)
echo "export PATH=$BASE_DIR/qemu/install/bin:\$PATH" >> "$HOME/.bashrc"
