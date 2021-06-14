#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME

# Uncomment the following to prevent terminal from closing if app crashes
#PREVENT_CLOSE="; bash -i"

cygstart mintty /bin/bash "cygwin-build/RadioDriver_Impl_SW_Radio_App.exe${PREVENT_CLOSE}" &
cygstart mintty /bin/bash "cygwin-build/FlightPlanner_Impl_SW_FlightPlanner_App.exe${PREVENT_CLOSE}" &
cygstart mintty /bin/bash "cygwin-build/FlightController_Impl_SW_FlightController_App.exe${PREVENT_CLOSE}" &
read -p "Press enter to initialise components ..."
cygwin-build/Main.exe
read -p "Press enter again to start ..."
cygwin-build/Main.exe