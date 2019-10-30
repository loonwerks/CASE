#!/usr/bin/env bash

set -x

export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd ${SCRIPT_HOME}


######################
# build HAMR library
######################

if [ "${ADD_PAUSE}" = "true" ]; then read -p $'\nPress [Enter] key to compile HAMR library\n'; fi

${SCRIPT_HOME}/bin/compile-linux.sh


######################
# run
######################

if [ "${ADD_PAUSE}" = "true" ]; then read -p $'\nPress [Enter] run the system\n'; fi

${SCRIPT_HOME}/bin/run-linux.sh


######################
#  wait for user
######################

read -p $'\nPress [Enter] to stop\n'

${SCRIPT_HOME}/bin/stop.sh
