::#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF         #
if [ -z ${SIREUM_HOME} ]; then                      #
  echo "Please set SIREUM_HOME env var"             #
  exit -1                                           #
fi                                                  #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"  #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#
// #Sireum

import org.sireum._

// This file was auto-generated.  Do not edit

val SCRIPT_HOME: Os.Path = Os.slashDir
val PATH_SEP: String = Os.pathSep

val UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/Drivers${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver",
  "--name", "UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver",
  "--apps", "hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.UARTDriver",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "5",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=5;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=5",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.cmake",
  "--forward", "art.ArtNative=hamr.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.UARTDriver",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation",
  "--name", "RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation",
  "--apps", "hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.RadioDriver_Attestation",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "6",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=6;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=6",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.cmake",
  "--forward", "art.ArtNative=hamr.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.RadioDriver_Attestation",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase",
  "--name", "FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase",
  "--apps", "hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.FlyZonesDatabase",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "2",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.cmake",
  "--forward", "art.ArtNative=hamr.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.FlyZonesDatabase",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS",
  "--name", "UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS",
  "--apps", "hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.UxAS",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "6",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=6;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=6",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.cmake",
  "--forward", "art.ArtNative=hamr.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.UxAS",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService",
  "--name", "WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService",
  "--apps", "hamr.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.WaypointPlanManagerService",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "4",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=4;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=4",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.cmake",
  "--forward", "art.ArtNative=hamr.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.WaypointPlanManagerService",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate",
  "--name", "CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate",
  "--apps", "hamr.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.CASE_AttestationGate",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "8",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=8;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=8",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.cmake",
  "--forward", "art.ArtNative=hamr.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.CASE_AttestationGate",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST",
  "--name", "CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST",
  "--apps", "hamr.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.CASE_Filter_LST",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "2",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.cmake",
  "--forward", "art.ArtNative=hamr.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.CASE_Filter_LST",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req",
  "--name", "CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req",
  "--apps", "hamr.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "2",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=2;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=2",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.cmake",
  "--forward", "art.ArtNative=hamr.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.CASE_Monitor_Req",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SW${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--name", "CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--apps", "hamr.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.CASE_Monitor_Geo",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "5",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=5;IS[Z,B]=262144",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=5",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.cmake",
  "--forward", "art.ArtNative=hamr.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.CASE_Monitor_Geo",
  "--stack-size", "524288",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.c${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.h${PATH_SEP}${SCRIPT_HOME}/../../c/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_adapter.h${PATH_SEP}${SCRIPT_HOME}/../../c/etc_seL4/adapters/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_adapter.c${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--exclude-build", "hamr.Drivers.UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,hamr.SW.RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,hamr.SW.FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,hamr.SW.UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,hamr.SW.WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,hamr.SW.CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,hamr.SW.CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,hamr.SW.CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,hamr.SW.CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo",
  "--lib-only",
  "--verbose")

val SlangTypeLibrary: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/hamr/SlangTypeLibrary",
  "--output-dir", s"${SCRIPT_HOME}/../../camkes/slang_libraries/SlangTypeLibrary",
  "--name", "SlangTypeLibrary",
  "--apps", "hamr.SlangTypeLibrary.SlangTypeLibrary",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "1",
  "--sequence", s"IS[Z,B]=262144",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_SlangTypeLibrary.cmake",
  "--forward", "art.ArtNative=hamr.SlangTypeLibrary.SlangTypeLibrary",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../../../aadl/c_libraries/CMASI${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/hexdump${PATH_SEP}${SCRIPT_HOME}/../../../aadl/c_libraries/dummy_serial_server",
  "--lib-only",
  "--verbose")

val projects: ISZ[ISZ[String]] = ISZ(
  UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver,
  RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation,
  FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase,
  UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS,
  WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService,
  CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate,
  CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST,
  CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req,
  CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo,
  SlangTypeLibrary
)

println("Initializing runtime library ...")
Sireum.initRuntimeLibrary()

for(p <- projects) {
  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
}

//ops.ISZOps(projects).parMap(p =>
//  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
//)
