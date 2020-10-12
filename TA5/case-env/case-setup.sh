#!/bin/bash
# Requirement: Debian 10.2 (buster)

set -Eeuxo pipefail

: "${BASE_DIR:=$HOME/CASE}"
: "${SIREUM_V:=a1fbb147f5c1a73ec3ae1c78e194c40a73e232b8}"
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


# seL4+friends (comment the next line to skip seL4 env installation)
bash $SCRIPT_DIR/bin/sel4.sh


# Sireum
bash $SCRIPT_DIR/bin/sireum-install.sh $SIREUM_V 
echo "export SIREUM_HOME=$SIREUM_HOME" >> "$HOME/.bashrc"
echo "export JAVA_HOME=\$SIREUM_HOME/bin/linux/java" >> "$HOME/.bashrc"
echo "export PATH=\$PATH:\$JAVA_HOME/bin:\$SIREUM_HOME/bin" >> "$HOME/.bashrc"


# FMIDE (latest nightly/release)
$SIREUM_HOME/bin/install/fmide.cmd $FMIDE_V
echo "export PATH=\$PATH:\$SIREUM_HOME/bin/linux/fmide" >> "$HOME/.bashrc"
