#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME

# Uncomment the following to prevent terminal from closing if app crashes
#PREVENT_CLOSE="; bash -i"

open -a Terminal "macOS-build/producer_t_producer_producer_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/filter_t_filter_filter_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/consumer_t_consumer_consumer_App${PREVENT_CLOSE}" &
read -p "Press enter to initialise components ..."
macOS-build/Main
read -p "Press enter again to start ..."
macOS-build/Main