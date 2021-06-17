cmake_minimum_required(VERSION 3.5.1)

project(main)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

function(to_hex DEC HEX)
  while(DEC GREATER 0)
    math(EXPR _val "${DEC} % 16")
    math(EXPR DEC "${DEC} / 16")
    if(_val EQUAL 10)
      set(_val "A")
    elseif(_val EQUAL 11)
      set(_val "B")
    elseif(_val EQUAL 12)
      set(_val "C")
    elseif(_val EQUAL 13)
      set(_val "D")
    elseif(_val EQUAL 14)
      set(_val "E")
    elseif(_val EQUAL 15)
      set(_val "F")
    endif()
    set(_res "${_val}${_res}")
  endwhile()
  set(${HEX} "0x${_res}" PARENT_SCOPE)
endfunction()

if($ENV{CC} MATCHES "^.*ccomp$")
  add_compile_options(-flongdouble)
endif()
if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  to_hex("524288" stack_size)
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
  if($ENV{CC} MATCHES "^.*ccomp$")
    add_compile_options("$<$<CONFIG:Release>:-Os>")
    SET(CMAKE_C_ARCHIVE_CREATE   "<CMAKE_AR> Scr <TARGET> <LINK_FLAGS> <OBJECTS>")
    SET(CMAKE_CXX_ARCHIVE_CREATE "<CMAKE_AR> Scr <TARGET> <LINK_FLAGS> <OBJECTS>")
    SET(CMAKE_C_ARCHIVE_FINISH   "<CMAKE_RANLIB> -no_warning_for_no_symbols -c <TARGET>")
    SET(CMAKE_CXX_ARCHIVE_FINISH "<CMAKE_RANLIB> -no_warning_for_no_symbols -c <TARGET>")
  else()
    add_compile_options("$<$<CONFIG:Release>:-Oz>")
  endif()
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    to_hex("524288" stack_size)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
  endif()
  if(NOT $ENV{CC} MATCHES "^.*ccomp$")
    add_compile_options(-fstack-usage)
  endif()
  add_compile_options("$<$<CONFIG:Release>:-Os>")
endif()

option(BOUND_CHECK
  "Build the program with sequence bound checking."
  OFF)

if(BOUND_CHECK)
  add_definitions(-DSIREUM_BOUND_CHECK)
endif(BOUND_CHECK)

option(RANGE_CHECK
  "Build the program with range checking."
  OFF)

if(RANGE_CHECK)
  add_definitions(-DSIREUM_RANGE_CHECK)
endif(RANGE_CHECK)

option(NO_PRINT
  "Build the program without console output."
  OFF)

if(NO_PRINT)
  add_definitions(-DSIREUM_NO_PRINT)
endif(NO_PRINT)

option(WITH_LOC
  "Build the program with Slang location info."
  OFF)

if(WITH_LOC)
  add_definitions(-DSIREUM_LOC)
endif(WITH_LOC)


add_library(main STATIC
        runtime/type.c
        runtime/stackframe.h
        runtime/misc.h
        runtime/lib.h
        runtime/type.h
        runtime/misc.c
        runtime/stackframe.c
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/art/type-art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.h
        library/art/art_ArchitectureDescription.c
        library/art/type-art_Art.h
        library/art/art_Art.h
        library/art/art_Art.c
        library/art/type-art_Bridge.h
        library/art/art_Bridge.h
        library/art/art_Bridge.c
        library/art/Bridge/type-art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.h
        library/art/Bridge/art_Bridge_EntryPoints.c
        library/art/Bridge/type-art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.h
        library/art/Bridge/art_Bridge_Ports.c
        library/art/type-art_Connection.h
        library/art/art_Connection.h
        library/art/art_Connection.c
        library/art/type-art_DataContent.h
        library/art/art_DataContent.h
        library/art/art_DataContent.c
        library/art/type-art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.h
        library/art/art_DispatchPropertyProtocol.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Periodic.c
        library/art/DispatchPropertyProtocol/type-art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.h
        library/art/DispatchPropertyProtocol/art_DispatchPropertyProtocol_Sporadic.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/PortMode/type-art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.h
        library/art/PortMode/art_PortMode_Type.c
        library/art/type-art_UConnection.h
        library/art/art_UConnection.h
        library/art/art_UConnection.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/art/type-art_art_Port_45E54D.h
        library/art/art_art_Port_45E54D.h
        library/art/art_art_Port_45E54D.c
        library/art/type-art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.h
        library/art/art_art_Port_9CBF18.c
        library/hamr/type-hamr_Arch.h
        library/hamr/hamr_Arch.h
        library/hamr/hamr_Arch.c
        library/hamr/type-hamr_ArtNix.h
        library/hamr/hamr_ArtNix.h
        library/hamr/hamr_ArtNix.c
        library/hamr/type-hamr_Base_Types.h
        library/hamr/hamr_Base_Types.h
        library/hamr/hamr_Base_Types.c
        library/hamr/Base_Types/type-hamr_Base_Types_Bits_Payload.h
        library/hamr/Base_Types/hamr_Base_Types_Bits_Payload.h
        library/hamr/Base_Types/hamr_Base_Types_Bits_Payload.c
        library/hamr/type-hamr_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App.h
        library/hamr/hamr_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App.h
        library/hamr/hamr_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App.c
        library/hamr/type-hamr_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App.h
        library/hamr/hamr_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App.h
        library/hamr/hamr_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App.c
        library/hamr/type-hamr_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.h
        library/hamr/hamr_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.h
        library/hamr/hamr_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.c
        library/hamr/type-hamr_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App.h
        library/hamr/hamr_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App.h
        library/hamr/hamr_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App.c
        library/hamr/Drivers/type-hamr_Drivers_UARTDriver_Impl_Api.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Api.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Api.c
        library/hamr/Drivers/type-hamr_Drivers_UARTDriver_Impl_Initialization_Api.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Initialization_Api.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Initialization_Api.c
        library/hamr/Drivers/type-hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.h
        library/hamr/Drivers/type-hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge.c
        library/hamr/Drivers/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge/type-hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints.h
        library/hamr/Drivers/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge/hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints.h
        library/hamr/Drivers/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge/hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_EntryPoints.c
        library/hamr/Drivers/type-hamr_Drivers_UARTDriver_Impl_Operational_Api.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Operational_Api.h
        library/hamr/Drivers/hamr_Drivers_UARTDriver_Impl_Operational_Api.c
        library/hamr/type-hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.h
        library/hamr/hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.h
        library/hamr/hamr_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.c
        library/hamr/type-hamr_IPCPorts.h
        library/hamr/hamr_IPCPorts.h
        library/hamr/hamr_IPCPorts.c
        library/hamr/type-hamr_Main.h
        library/hamr/hamr_Main.h
        library/hamr/hamr_Main.c
        library/hamr/type-hamr_PlatformNix.h
        library/hamr/hamr_PlatformNix.h
        library/hamr/hamr_PlatformNix.c
        library/hamr/type-hamr_Process.h
        library/hamr/hamr_Process.h
        library/hamr/type-hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.h
        library/hamr/hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.h
        library/hamr/hamr_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.c
        library/hamr/SW/type-hamr_SW_CASE_AttestationGate_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Api.c
        library/hamr/SW/type-hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api.c
        library/hamr/SW/type-hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.h
        library/hamr/SW/type-hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge.c
        library/hamr/SW/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge/type-hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints.h
        library/hamr/SW/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge/hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints.h
        library/hamr/SW/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge/hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_LST_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.h
        library/hamr/SW/type-hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge.c
        library/hamr/SW/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge/type-hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge/hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge/hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.h
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge.c
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge/hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge/hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Req_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.h
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge.c
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge/type-hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge/hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints.h
        library/hamr/SW/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge/hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api.c
        library/hamr/SW/type-hamr_SW_FlyZonesDatabase_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Api.c
        library/hamr/SW/type-hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api.c
        library/hamr/SW/type-hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.h
        library/hamr/SW/type-hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge.c
        library/hamr/SW/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge/type-hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_EntryPoints.h
        library/hamr/SW/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge/hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_EntryPoints.h
        library/hamr/SW/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge/hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api.c
        library/hamr/SW/type-hamr_SW_RadioDriver_Attestation_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Api.c
        library/hamr/SW/type-hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api.c
        library/hamr/SW/type-hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.h
        library/hamr/SW/type-hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge.c
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge/type-hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints.h
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge/hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints.h
        library/hamr/SW/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge/hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api.c
        library/hamr/SW/type-hamr_SW_UxAS_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Api.c
        library/hamr/SW/type-hamr_SW_UxAS_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Initialization_Api.c
        library/hamr/SW/type-hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.h
        library/hamr/SW/type-hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge.c
        library/hamr/SW/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge/type-hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints.h
        library/hamr/SW/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge/hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints.h
        library/hamr/SW/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge/hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_UxAS_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_UxAS_thr_Impl_Operational_Api.c
        library/hamr/SW/type-hamr_SW_WaypointPlanManagerService_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Api.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Api.c
        library/hamr/SW/type-hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api.c
        library/hamr/SW/type-hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.h
        library/hamr/SW/type-hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge.c
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge/type-hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_EntryPoints.h
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge/hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_EntryPoints.h
        library/hamr/SW/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge/hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_EntryPoints.c
        library/hamr/SW/type-hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api.h
        library/hamr/SW/hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api.c
        library/hamr/type-hamr_SharedMemory.h
        library/hamr/hamr_SharedMemory.h
        library/hamr/type-hamr_TranspilerToucher.h
        library/hamr/hamr_TranspilerToucher.h
        library/hamr/hamr_TranspilerToucher.c
        library/hamr/type-hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.h
        library/hamr/hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.h
        library/hamr/hamr_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.c
        library/hamr/type-hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.h
        library/hamr/hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.h
        library/hamr/hamr_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.c
        library/hamr/type-hamr_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App.h
        library/hamr/hamr_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App.h
        library/hamr/hamr_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App.c
        library/org/sireum/type-org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.c
        library/org/sireum/type-org_sireum_IS_7E8796.h
        library/org/sireum/org_sireum_IS_7E8796.h
        library/org/sireum/org_sireum_IS_7E8796.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/org/sireum/type-org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.c
        library/org/sireum/type-org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.h
        library/org/sireum/org_sireum_IS_948B60.c
        library/org/sireum/type-org_sireum_IS_AA0F82.h
        library/org/sireum/org_sireum_IS_AA0F82.h
        library/org/sireum/org_sireum_IS_AA0F82.c
        library/org/sireum/type-org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.h
        library/org/sireum/org_sireum_IS_C4F575.c
        library/org/sireum/type-org_sireum_MBox2_1029D1.h
        library/org/sireum/org_sireum_MBox2_1029D1.h
        library/org/sireum/org_sireum_MBox2_1029D1.c
        library/org/sireum/type-org_sireum_MBox2_1CBFC4.h
        library/org/sireum/org_sireum_MBox2_1CBFC4.h
        library/org/sireum/org_sireum_MBox2_1CBFC4.c
        library/org/sireum/type-org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.c
        library/org/sireum/type-org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.h
        library/org/sireum/org_sireum_MS_83D5EB.c
        library/org/sireum/type-org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.c
        library/org/sireum/type-org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.c
        library/org/sireum/type-org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_3026C5.h
        library/org/sireum/org_sireum_None_3026C5.h
        library/org/sireum/org_sireum_None_3026C5.c
        library/org/sireum/type-org_sireum_None_306A73.h
        library/org/sireum/org_sireum_None_306A73.h
        library/org/sireum/org_sireum_None_306A73.c
        library/org/sireum/type-org_sireum_None_392677.h
        library/org/sireum/org_sireum_None_392677.h
        library/org/sireum/org_sireum_None_392677.c
        library/org/sireum/type-org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.c
        library/org/sireum/type-org_sireum_None_3A40F5.h
        library/org/sireum/org_sireum_None_3A40F5.h
        library/org/sireum/org_sireum_None_3A40F5.c
        library/org/sireum/type-org_sireum_None_45110B.h
        library/org/sireum/org_sireum_None_45110B.h
        library/org/sireum/org_sireum_None_45110B.c
        library/org/sireum/type-org_sireum_None_4BF8A4.h
        library/org/sireum/org_sireum_None_4BF8A4.h
        library/org/sireum/org_sireum_None_4BF8A4.c
        library/org/sireum/type-org_sireum_None_5189C1.h
        library/org/sireum/org_sireum_None_5189C1.h
        library/org/sireum/org_sireum_None_5189C1.c
        library/org/sireum/type-org_sireum_None_579C8E.h
        library/org/sireum/org_sireum_None_579C8E.h
        library/org/sireum/org_sireum_None_579C8E.c
        library/org/sireum/type-org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.h
        library/org/sireum/org_sireum_None_5C1355.c
        library/org/sireum/type-org_sireum_None_60EB73.h
        library/org/sireum/org_sireum_None_60EB73.h
        library/org/sireum/org_sireum_None_60EB73.c
        library/org/sireum/type-org_sireum_None_69DE14.h
        library/org/sireum/org_sireum_None_69DE14.h
        library/org/sireum/org_sireum_None_69DE14.c
        library/org/sireum/type-org_sireum_None_7290DE.h
        library/org/sireum/org_sireum_None_7290DE.h
        library/org/sireum/org_sireum_None_7290DE.c
        library/org/sireum/type-org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.h
        library/org/sireum/org_sireum_None_734370.c
        library/org/sireum/type-org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.c
        library/org/sireum/type-org_sireum_None_77A6BF.h
        library/org/sireum/org_sireum_None_77A6BF.h
        library/org/sireum/org_sireum_None_77A6BF.c
        library/org/sireum/type-org_sireum_None_78A1D4.h
        library/org/sireum/org_sireum_None_78A1D4.h
        library/org/sireum/org_sireum_None_78A1D4.c
        library/org/sireum/type-org_sireum_None_844F3C.h
        library/org/sireum/org_sireum_None_844F3C.h
        library/org/sireum/org_sireum_None_844F3C.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_None_A929A3.h
        library/org/sireum/org_sireum_None_A929A3.h
        library/org/sireum/org_sireum_None_A929A3.c
        library/org/sireum/type-org_sireum_None_C554A3.h
        library/org/sireum/org_sireum_None_C554A3.h
        library/org/sireum/org_sireum_None_C554A3.c
        library/org/sireum/type-org_sireum_None_D64418.h
        library/org/sireum/org_sireum_None_D64418.h
        library/org/sireum/org_sireum_None_D64418.c
        library/org/sireum/type-org_sireum_None_E7D454.h
        library/org/sireum/org_sireum_None_E7D454.h
        library/org/sireum/org_sireum_None_E7D454.c
        library/org/sireum/type-org_sireum_None_ED72E1.h
        library/org/sireum/org_sireum_None_ED72E1.h
        library/org/sireum/org_sireum_None_ED72E1.c
        library/org/sireum/type-org_sireum_None_FE10D0.h
        library/org/sireum/org_sireum_None_FE10D0.h
        library/org/sireum/org_sireum_None_FE10D0.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_21F455.h
        library/org/sireum/org_sireum_Option_21F455.h
        library/org/sireum/org_sireum_Option_21F455.c
        library/org/sireum/type-org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.h
        library/org/sireum/org_sireum_Option_30119F.c
        library/org/sireum/type-org_sireum_Option_54EF1B.h
        library/org/sireum/org_sireum_Option_54EF1B.h
        library/org/sireum/org_sireum_Option_54EF1B.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_63CBE2.h
        library/org/sireum/org_sireum_Option_63CBE2.h
        library/org/sireum/org_sireum_Option_63CBE2.c
        library/org/sireum/type-org_sireum_Option_6F37E4.h
        library/org/sireum/org_sireum_Option_6F37E4.h
        library/org/sireum/org_sireum_Option_6F37E4.c
        library/org/sireum/type-org_sireum_Option_73B21F.h
        library/org/sireum/org_sireum_Option_73B21F.h
        library/org/sireum/org_sireum_Option_73B21F.c
        library/org/sireum/type-org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.h
        library/org/sireum/org_sireum_Option_7BBFBE.c
        library/org/sireum/type-org_sireum_Option_80DF3B.h
        library/org/sireum/org_sireum_Option_80DF3B.h
        library/org/sireum/org_sireum_Option_80DF3B.c
        library/org/sireum/type-org_sireum_Option_849849.h
        library/org/sireum/org_sireum_Option_849849.h
        library/org/sireum/org_sireum_Option_849849.c
        library/org/sireum/type-org_sireum_Option_8499A8.h
        library/org/sireum/org_sireum_Option_8499A8.h
        library/org/sireum/org_sireum_Option_8499A8.c
        library/org/sireum/type-org_sireum_Option_869AEE.h
        library/org/sireum/org_sireum_Option_869AEE.h
        library/org/sireum/org_sireum_Option_869AEE.c
        library/org/sireum/type-org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Option_9382FA.h
        library/org/sireum/org_sireum_Option_9382FA.h
        library/org/sireum/org_sireum_Option_9382FA.c
        library/org/sireum/type-org_sireum_Option_9AD908.h
        library/org/sireum/org_sireum_Option_9AD908.h
        library/org/sireum/org_sireum_Option_9AD908.c
        library/org/sireum/type-org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.h
        library/org/sireum/org_sireum_Option_9AF35E.c
        library/org/sireum/type-org_sireum_Option_9CA19A.h
        library/org/sireum/org_sireum_Option_9CA19A.h
        library/org/sireum/org_sireum_Option_9CA19A.c
        library/org/sireum/type-org_sireum_Option_AE3831.h
        library/org/sireum/org_sireum_Option_AE3831.h
        library/org/sireum/org_sireum_Option_AE3831.c
        library/org/sireum/type-org_sireum_Option_B4E093.h
        library/org/sireum/org_sireum_Option_B4E093.h
        library/org/sireum/org_sireum_Option_B4E093.c
        library/org/sireum/type-org_sireum_Option_B4EF66.h
        library/org/sireum/org_sireum_Option_B4EF66.h
        library/org/sireum/org_sireum_Option_B4EF66.c
        library/org/sireum/type-org_sireum_Option_C04856.h
        library/org/sireum/org_sireum_Option_C04856.h
        library/org/sireum/org_sireum_Option_C04856.c
        library/org/sireum/type-org_sireum_Option_C622DB.h
        library/org/sireum/org_sireum_Option_C622DB.h
        library/org/sireum/org_sireum_Option_C622DB.c
        library/org/sireum/type-org_sireum_Option_E8930C.h
        library/org/sireum/org_sireum_Option_E8930C.h
        library/org/sireum/org_sireum_Option_E8930C.c
        library/org/sireum/type-org_sireum_Option_F010C8.h
        library/org/sireum/org_sireum_Option_F010C8.h
        library/org/sireum/org_sireum_Option_F010C8.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_003142.h
        library/org/sireum/org_sireum_Some_003142.h
        library/org/sireum/org_sireum_Some_003142.c
        library/org/sireum/type-org_sireum_Some_018CE9.h
        library/org/sireum/org_sireum_Some_018CE9.h
        library/org/sireum/org_sireum_Some_018CE9.c
        library/org/sireum/type-org_sireum_Some_08A5F4.h
        library/org/sireum/org_sireum_Some_08A5F4.h
        library/org/sireum/org_sireum_Some_08A5F4.c
        library/org/sireum/type-org_sireum_Some_181FDB.h
        library/org/sireum/org_sireum_Some_181FDB.h
        library/org/sireum/org_sireum_Some_181FDB.c
        library/org/sireum/type-org_sireum_Some_30503C.h
        library/org/sireum/org_sireum_Some_30503C.h
        library/org/sireum/org_sireum_Some_30503C.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_4782C6.h
        library/org/sireum/org_sireum_Some_4782C6.h
        library/org/sireum/org_sireum_Some_4782C6.c
        library/org/sireum/type-org_sireum_Some_481DA5.h
        library/org/sireum/org_sireum_Some_481DA5.h
        library/org/sireum/org_sireum_Some_481DA5.c
        library/org/sireum/type-org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.h
        library/org/sireum/org_sireum_Some_482E57.c
        library/org/sireum/type-org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.c
        library/org/sireum/type-org_sireum_Some_5BDE4D.h
        library/org/sireum/org_sireum_Some_5BDE4D.h
        library/org/sireum/org_sireum_Some_5BDE4D.c
        library/org/sireum/type-org_sireum_Some_6322F0.h
        library/org/sireum/org_sireum_Some_6322F0.h
        library/org/sireum/org_sireum_Some_6322F0.c
        library/org/sireum/type-org_sireum_Some_65C258.h
        library/org/sireum/org_sireum_Some_65C258.h
        library/org/sireum/org_sireum_Some_65C258.c
        library/org/sireum/type-org_sireum_Some_74DA67.h
        library/org/sireum/org_sireum_Some_74DA67.h
        library/org/sireum/org_sireum_Some_74DA67.c
        library/org/sireum/type-org_sireum_Some_7F8DC4.h
        library/org/sireum/org_sireum_Some_7F8DC4.h
        library/org/sireum/org_sireum_Some_7F8DC4.c
        library/org/sireum/type-org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.h
        library/org/sireum/org_sireum_Some_8D03B1.c
        library/org/sireum/type-org_sireum_Some_967389.h
        library/org/sireum/org_sireum_Some_967389.h
        library/org/sireum/org_sireum_Some_967389.c
        library/org/sireum/type-org_sireum_Some_993707.h
        library/org/sireum/org_sireum_Some_993707.h
        library/org/sireum/org_sireum_Some_993707.c
        library/org/sireum/type-org_sireum_Some_BAA603.h
        library/org/sireum/org_sireum_Some_BAA603.h
        library/org/sireum/org_sireum_Some_BAA603.c
        library/org/sireum/type-org_sireum_Some_CA0A4D.h
        library/org/sireum/org_sireum_Some_CA0A4D.h
        library/org/sireum/org_sireum_Some_CA0A4D.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Some_D48312.h
        library/org/sireum/org_sireum_Some_D48312.h
        library/org/sireum/org_sireum_Some_D48312.c
        library/org/sireum/type-org_sireum_Some_F82A4D.h
        library/org/sireum/org_sireum_Some_F82A4D.h
        library/org/sireum/org_sireum_Some_F82A4D.c
        library/org/sireum/type-org_sireum_Some_FCAC0B.h
        library/org/sireum/org_sireum_Some_FCAC0B.h
        library/org/sireum/org_sireum_Some_FCAC0B.c
        library/org/sireum/type-org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.c
        library/org/sireum/type-org_sireum_U8.h
        library/org/sireum/org_sireum_U8.h
        library/org/sireum/org_sireum_U8.c
        ext/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.c
        ext/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_api.h
        ext/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.h
        ext/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService.c
        ext/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.h
        ext/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.c
        ext/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo.h
        ext/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_api.c
        ext/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.c
        ext/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.c
        ext/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_api.h
        ext/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req.h
        ext/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.h
        ext/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.c
        ext/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_api.c
        ext/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase.h
        ext/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.c
        ext/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.c
        ext/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_api.h
        ext/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST.h
        ext/ext-c/ext.c
        ext/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_api.h
        ext/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.h
        ext/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS.c
        ext/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_api.c
        ext/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.c
        ext/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_api.h
        ext/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.c
        ext/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver.h
        ext/ext-c/ext.h
        ext/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.h
        ext/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.c
        ext/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_api.h
        ext/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate.c
        ext/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.c
        ext/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.c
        ext/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_api.h
        ext/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation.h
        ext/etc/ipc.c
        ext/CMASI/include/LineSearchTask.h
        ext/CMASI/include/VehicleAction.h
        ext/CMASI/include/MissionCommand.h
        ext/CMASI/include/enums.h
        ext/CMASI/include/KeyValuePair.h
        ext/CMASI/include/AirVehicleState.h
        ext/CMASI/include/EntityState.h
        ext/CMASI/include/PayloadConfiguration.h
        ext/CMASI/include/Waypoint.h
        ext/CMASI/include/Wedge.h
        ext/CMASI/include/PayloadState.h
        ext/CMASI/include/Task.h
        ext/CMASI/include/SearchTask.h
        ext/CMASI/include/lmcp.h
        ext/CMASI/include/common/conv.h
        ext/CMASI/include/common/struct_defines.h
        ext/CMASI/include/AutomationResponse.h
        ext/CMASI/include/AddressAttributedMessage.h
        ext/CMASI/include/PayloadAction.h
        ext/CMASI/include/VehicleActionCommand.h
        ext/CMASI/include/Location3D.h
        ext/CMASI/include/EntityConfiguration.h
        ext/CMASI/src/Task.c
        ext/CMASI/src/lmcp.c
        ext/CMASI/src/VehicleAction.c
        ext/CMASI/src/AddressAttributedMessage.c
        ext/CMASI/src/LineSearchTask.c
        ext/CMASI/src/conv.c
        ext/CMASI/src/PayloadConfiguration.c
        ext/CMASI/src/Waypoint.c
        ext/CMASI/src/Wedge.c
        ext/CMASI/src/AirVehicleState.c
        ext/CMASI/src/Location3D.c
        ext/CMASI/src/PayloadState.c
        ext/CMASI/src/EntityState.c
        ext/CMASI/src/MissionCommand.c
        ext/CMASI/src/VehicleActionCommand.c
        ext/CMASI/src/KeyValuePair.c
        ext/CMASI/src/PayloadAction.c
        ext/CMASI/src/AutomationResponse.c
        ext/CMASI/src/EntityConfiguration.c
        ext/CMASI/src/SearchTask.c
        ext/hexdump/include/hexdump.h
        ext/hexdump/src/hexdump.c
        ext/dummy_serial_server/serial.c
        ext/dummy_serial_server/serial.h)

target_include_directories(main
        PUBLIC PUBLIC app-UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App
        PUBLIC PUBLIC app-RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App
        PUBLIC PUBLIC app-FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App
        PUBLIC PUBLIC app-UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App
        PUBLIC PUBLIC app-WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App
        PUBLIC PUBLIC app-CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App
        PUBLIC PUBLIC app-CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App
        PUBLIC PUBLIC app-CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App
        PUBLIC PUBLIC app-CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App
        PUBLIC PUBLIC app-Main
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/art/PortMode
        PUBLIC PUBLIC library/hamr
        PUBLIC PUBLIC library/hamr/Base_Types
        PUBLIC PUBLIC library/hamr/Drivers
        PUBLIC PUBLIC library/hamr/Drivers/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge
        PUBLIC PUBLIC library/hamr/SW
        PUBLIC PUBLIC library/hamr/SW/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge
        PUBLIC PUBLIC library/hamr/SW/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge
        PUBLIC PUBLIC library/hamr/SW/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge
        PUBLIC PUBLIC library/hamr/SW/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge
        PUBLIC PUBLIC library/hamr/SW/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge
        PUBLIC PUBLIC library/hamr/SW/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC ext/ext-c/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService
        PUBLIC PUBLIC ext/ext-c/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo
        PUBLIC PUBLIC ext/ext-c/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req
        PUBLIC PUBLIC ext/ext-c/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase
        PUBLIC PUBLIC ext/ext-c/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST
        PUBLIC PUBLIC ext/ext-c
        PUBLIC PUBLIC ext/ext-c/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS
        PUBLIC PUBLIC ext/ext-c/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver
        PUBLIC PUBLIC ext/ext-c/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate
        PUBLIC PUBLIC ext/ext-c/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation
        PUBLIC PUBLIC ext/etc
        PUBLIC PUBLIC ext/CMASI/include
        PUBLIC PUBLIC ext/CMASI/include/common
        PUBLIC PUBLIC ext/CMASI/src
        PUBLIC PUBLIC ext/hexdump/include
        PUBLIC PUBLIC ext/hexdump/src
        PUBLIC PUBLIC ext/dummy_serial_server)


add_executable(UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App-bin app-UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App/UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App.c)

target_link_libraries(UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App-bin LINK_PUBLIC main m)

set_target_properties(UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App-bin PROPERTIES OUTPUT_NAME UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App)


add_executable(RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App-bin app-RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App/RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App.c)

target_link_libraries(RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App-bin LINK_PUBLIC main m)

set_target_properties(RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App-bin PROPERTIES OUTPUT_NAME RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App)


add_executable(FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App-bin app-FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App/FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App.c)

target_link_libraries(FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App-bin LINK_PUBLIC main m)

set_target_properties(FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App-bin PROPERTIES OUTPUT_NAME FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App)


add_executable(UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App-bin app-UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App/UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App.c)

target_link_libraries(UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App-bin LINK_PUBLIC main m)

set_target_properties(UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App-bin PROPERTIES OUTPUT_NAME UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App)


add_executable(WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App-bin app-WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App/WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App.c)

target_link_libraries(WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App-bin LINK_PUBLIC main m)

set_target_properties(WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App-bin PROPERTIES OUTPUT_NAME WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App)


add_executable(CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App-bin app-CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App/CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App.c)

target_link_libraries(CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App-bin LINK_PUBLIC main m)

set_target_properties(CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App-bin PROPERTIES OUTPUT_NAME CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App)


add_executable(CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App-bin app-CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App/CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App.c)

target_link_libraries(CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App-bin LINK_PUBLIC main m)

set_target_properties(CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App-bin PROPERTIES OUTPUT_NAME CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App)


add_executable(CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App-bin app-CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App/CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App.c)

target_link_libraries(CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App-bin LINK_PUBLIC main m)

set_target_properties(CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App-bin PROPERTIES OUTPUT_NAME CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App)


add_executable(CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App-bin app-CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App/CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App.c)

target_link_libraries(CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App-bin LINK_PUBLIC main m)

set_target_properties(CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App-bin PROPERTIES OUTPUT_NAME CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App)


add_executable(Main-bin app-Main/Main.c)

target_link_libraries(Main-bin LINK_PUBLIC main m)

set_target_properties(Main-bin PROPERTIES OUTPUT_NAME Main)

