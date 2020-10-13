#!/bin/bash
set -Eeuxo pipefail

: "${GIT_USER:=Snail}"
: "${GIT_EMAIL:=<>}"
: "${BASE_DIR:=$HOME/CASE}"
: "${SEL4_SCRIPTS_V:=759234c023b09fef9d7a1ea655c3a2ce8ede3a82}"
: "${SEL4_V:=28831f579e3560bd3aa18a3898505f091d66b076}"
: "${CAMKES_V:=e7f5c6da03fc8a71a5a2e503de9f9004acf3ef2a}"

export DESKTOP_MACHINE=no
export MAKE_CACHES=no
export DEBIAN_FRONTEND=noninteractive

git config --global user.name $GIT_USER
git config --global user.email $GIT_EMAIL
git config --global color.ui true

cd $BASE_DIR
git clone https://github.com/SEL4PROJ/seL4-CAmkES-L4v-dockerfiles
SEL4_SCRIPTS=$BASE_DIR/seL4-CAmkES-L4v-dockerfiles/scripts
cd $SEL4_SCRIPTS
git checkout $SEL4_SCRIPTS_V
cd $BASE_DIR

bash $SEL4_SCRIPTS/base_tools.sh

bash $SEL4_SCRIPTS/sel4.sh

. $SEL4_SCRIPTS/utils/common.sh

bash $SEL4_SCRIPTS/camkes.sh
echo "export PATH=\$PATH:$BASE_DIR/camkes/build/capDL-tool" >> "$HOME/.bashrc"

bash $HOME/bin/sel4-cache.sh $SEL4_V
bash $HOME/bin/camkes-cache.sh $CAMKES_V

git config --global --unset user.name $GIT_USER
git config --global --unset user.email $GIT_EMAIL
