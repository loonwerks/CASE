#!/bin/bash
# Requirement: Debian 10.2 (buster)

set -Eeuxo pipefail

: "${BASE_DIR:=$HOME/CASE}"
: "${SIREUM_INIT_V:=20210615.1954}"
: "${SIREUM_V:=0edac3ab200af7c5d05bc033e6c9d7a17683dced}"

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
bash $HOME/bin/sel4.sh

echo 'en_US.UTF-8 UTF-8' | as_root tee /etc/locale.gen > /dev/null
as_root dpkg-reconfigure --frontend=noninteractive locales
echo "LANG=en_US.UTF-8" | as_root tee -a /etc/default/locale > /dev/null
echo "export LANG=en_US.UTF-8" >> "$HOME/.bashrc"
export LANG=en_US.UTF-8


# Sireum
bash $HOME/bin/sireum-install.sh $SIREUM_INIT_V $SIREUM_V
echo "export SIREUM_HOME=$SIREUM_HOME" >> "$HOME/.bashrc"
echo "export JAVA_HOME=\$SIREUM_HOME/bin/linux/java" >> "$HOME/.bashrc"
echo "export PATH=\$PATH:\$JAVA_HOME/bin:\$SIREUM_HOME/bin" >> "$HOME/.bashrc"


# FMIDE
bash $HOME/bin/fmide.sh


# HAMR Examples
bash $HOME/bin/hamr-examples.sh

# BriefCASE Examples
bash $HOME/bin/transform-examples.sh
bash $HOME/bin/uav-example.sh
