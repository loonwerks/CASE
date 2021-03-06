#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME

# Uncomment the following to prevent terminal from closing if app crashes
#PREVENT_CLOSE="; bash -i"

open -a Terminal "macOS-build/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App${PREVENT_CLOSE}" &
open -a Terminal "macOS-build/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App${PREVENT_CLOSE}" &
read -p "Press enter to initialise components ..."
macOS-build/Main
read -p "Press enter again to start ..."
macOS-build/Main