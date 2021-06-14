#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME

# Uncomment the following to prevent terminal from closing if app crashes
#PREVENT_CLOSE="; bash -i"

x-terminal-emulator -T RadioDriver_Impl_SW_Radio_App -e sh -c "linux-build/RadioDriver_Impl_SW_Radio_App${PREVENT_CLOSE}" &
x-terminal-emulator -T FlightPlanner_Impl_SW_FlightPlanner_App -e sh -c "linux-build/FlightPlanner_Impl_SW_FlightPlanner_App${PREVENT_CLOSE}" &
x-terminal-emulator -T FlightController_Impl_SW_FlightController_App -e sh -c "linux-build/FlightController_Impl_SW_FlightController_App${PREVENT_CLOSE}" &
read -p "Press enter to initialise components ..."
linux-build/Main
read -p "Press enter again to start ..."
linux-build/Main