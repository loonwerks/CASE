#!/bin/bash
# Requirement: Debian 10.2 (buster)

set -Eeuxo pipefail

: "${BASE_DIR:=$HOME/CASE}"
: "${GIT_USER:=Snail Mail}"
: "${GIT_EMAIL:=<>}"

: "${SEL4_SCRIPTS_V:=e9cd963c46e7c188b825a908abf6ad4344d349da}"
: "${SEL4_V:=28831f579e3560bd3aa18a3898505f091d66b076}"
: "${CAMKES_V:=e7f5c6da03fc8a71a5a2e503de9f9004acf3ef2a}"
: "${SIREUM_V:=8900744}"
: "${FMIDE_V:=nightly}" # use nightly release by default

export SCRIPT_DIR=$(cd -P $(dirname "$0") && pwd -P)
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

as_root apt-get update
as_root apt install -y git


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

bash $SCRIPT_DIR/bin/sel4-cache.sh $SEL4_V

bash $SEL4_SCRIPTS/camkes.sh

bash $SCRIPT_DIR/bin/camkes-cache.sh $CAMKES_V
echo "export PATH=\$PATH:$BASE_DIR/camkes/build/capDL-tool" >> "$HOME/.bashrc"

git config --global --unset user.name
git config --global --unset user.email


# Sireum
bash $SCRIPT_DIR/bin/sireum-install.sh $SIREUM_V 
echo "export SIREUM_HOME=$SIREUM_HOME" >> "$HOME/.bashrc"
echo "export JAVA_HOME=\$SIREUM_HOME/bin/linux/java" >> "$HOME/.bashrc"
echo "export PATH=\$PATH:\$JAVA_HOME/bin:\$SIREUM_HOME/bin:\$SIREUM_HOME/bin/linux/fmide" >> "$HOME/.bashrc"


# FMIDE (latest nightly/release)
$SIREUM_HOME/bin/install/fmide.cmd $FMIDE_V
echo "export PATH=\$PATH:\$SIREUM_HOME/bin/linux/fmide" >> "$HOME/.bashrc"
