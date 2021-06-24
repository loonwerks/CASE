#!/bin/bash
set -Eeuxo pipefail

: "${GIT_USER:=Snail}"
: "${GIT_EMAIL:=<>}"
: "${BASE_DIR:=$HOME/CASE}"
: "${SEL4_SCRIPTS_V:=daf5a3f842663daca8a5e615fd56e22421085539}"
: "${SEL4_V:=f52106a48a64953e889006b93ad3b9253457f72a}"
: "${CAMKES_V:=c77211b08f435a0fee79d18127f0d83ce49dfb80}"

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

bash $SEL4_SCRIPTS/cakeml.sh

git config --global --unset user.name $GIT_USER
git config --global --unset user.email $GIT_EMAIL
