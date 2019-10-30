cmake_minimum_required(VERSION 3.6.2)

project(main)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

add_compile_options("$<$<CONFIG:Release>:-O2>")

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
        runtime/misc.c
        runtime/stackframe.h
        runtime/misc.h
        runtime/type.h
        runtime/stackframe.c
        runtime/ztype.h
        runtime/type-composite.h
        runtime/types.h
        runtime/types.c
        runtime/all.h
        runtime/all.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_Arch.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_Arch.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_Arch.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_ArtNix.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_ArtNix.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_ArtNix.c
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/type-ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean.h
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean.h
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean.c
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/type-ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload.c
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/type-ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64.h
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64.h
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64.c
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/type-ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/Base_Types/ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_IPCPorts.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_IPCPorts.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_IPCPorts.c
        library/ACT_Demo_Dec2018__camkes_X/MC/type-ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/MC/type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/MC/type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge.c
        library/ACT_Demo_Dec2018__camkes_X/MC/Radio_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/MC/Radio_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/MC/Radio_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api.c
        library/ACT_Demo_Dec2018__camkes_X/MC/Radio_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/MC/Radio_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/MC/Radio_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints.c
        library/ACT_Demo_Dec2018__camkes_X/MC/type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/MC/type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/MC/type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge.c
        library/ACT_Demo_Dec2018__camkes_X/MC/UART_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/MC/UART_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/MC/UART_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api.c
        library/ACT_Demo_Dec2018__camkes_X/MC/UART_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/MC/UART_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/MC/UART_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints.c
        library/ACT_Demo_Dec2018__camkes_X/MC/type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/MC/ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_Main.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_Main.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_Main.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_PlatformNix.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_PlatformNix.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_PlatformNix.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_Process.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_Process.h
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_Radio_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_Radio_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_Radio_Impl_App.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_Command_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Command_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Command_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_FlightPattern.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_FlightPattern.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_FlightPattern.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge.c
        library/ACT_Demo_Dec2018__camkes_X/SW/FlightPlanner_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/SW/FlightPlanner_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/SW/FlightPlanner_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api.c
        library/ACT_Demo_Dec2018__camkes_X/SW/FlightPlanner_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/SW/FlightPlanner_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/SW/FlightPlanner_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_Mission.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Mission.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Mission.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_MissionWindow.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_MissionWindow.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_MissionWindow.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge.c
        library/ACT_Demo_Dec2018__camkes_X/SW/RadioDriver_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/SW/RadioDriver_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/SW/RadioDriver_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api.c
        library/ACT_Demo_Dec2018__camkes_X/SW/RadioDriver_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/SW/RadioDriver_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/SW/RadioDriver_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_SW__Map.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_SW__Map.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_SW__Map.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge.c
        library/ACT_Demo_Dec2018__camkes_X/SW/UARTDriver_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/SW/UARTDriver_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/SW/UARTDriver_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api.c
        library/ACT_Demo_Dec2018__camkes_X/SW/UARTDriver_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/SW/UARTDriver_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/SW/UARTDriver_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge.c
        library/ACT_Demo_Dec2018__camkes_X/SW/WaypointManager_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/SW/WaypointManager_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api.h
        library/ACT_Demo_Dec2018__camkes_X/SW/WaypointManager_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api.c
        library/ACT_Demo_Dec2018__camkes_X/SW/WaypointManager_Impl_Bridge/type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/SW/WaypointManager_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints.h
        library/ACT_Demo_Dec2018__camkes_X/SW/WaypointManager_Impl_Bridge/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints.c
        library/ACT_Demo_Dec2018__camkes_X/SW/type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl.h
        library/ACT_Demo_Dec2018__camkes_X/SW/ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_SharedMemory.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_SharedMemory.h
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_UART_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_UART_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_UART_Impl_App.c
        library/ACT_Demo_Dec2018__camkes_X/type-ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App.h
        library/ACT_Demo_Dec2018__camkes_X/ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App.c
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
        library/art/type-art_DispatchStatus.h
        library/art/art_DispatchStatus.h
        library/art/art_DispatchStatus.c
        library/art/type-art_Empty.h
        library/art/art_Empty.h
        library/art/art_Empty.c
        library/art/type-art_EventTriggered.h
        library/art/art_EventTriggered.h
        library/art/art_EventTriggered.c
        library/art/type-art_PortMode.h
        library/art/art_PortMode.h
        library/art/art_PortMode.c
        library/art/type-art_TimeTriggered.h
        library/art/art_TimeTriggered.h
        library/art/art_TimeTriggered.c
        library/art/type-art_UConnection.h
        library/art/art_UConnection.h
        library/art/art_UConnection.c
        library/art/type-art_UPort.h
        library/art/art_UPort.h
        library/art/art_UPort.c
        library/art/type-art_art_Connection_112F4D.h
        library/art/art_art_Connection_112F4D.h
        library/art/art_art_Connection_112F4D.c
        library/art/type-art_art_Connection_2D82C4.h
        library/art/art_art_Connection_2D82C4.h
        library/art/art_art_Connection_2D82C4.c
        library/art/type-art_art_Connection_A24F1E.h
        library/art/art_art_Connection_A24F1E.h
        library/art/art_art_Connection_A24F1E.c
        library/art/type-art_art_Connection_CAF041.h
        library/art/art_art_Connection_CAF041.h
        library/art/art_art_Connection_CAF041.c
        library/art/type-art_art_Connection_E82682.h
        library/art/art_art_Connection_E82682.h
        library/art/art_art_Connection_E82682.c
        library/art/type-art_art_Port_2C63FD.h
        library/art/art_art_Port_2C63FD.h
        library/art/art_art_Port_2C63FD.c
        library/art/type-art_art_Port_2D3735.h
        library/art/art_art_Port_2D3735.h
        library/art/art_art_Port_2D3735.c
        library/art/type-art_art_Port_446859.h
        library/art/art_art_Port_446859.h
        library/art/art_art_Port_446859.c
        library/art/type-art_art_Port_695448.h
        library/art/art_art_Port_695448.h
        library/art/art_art_Port_695448.c
        library/art/type-art_art_Port_9D6F5D.h
        library/art/art_art_Port_9D6F5D.h
        library/art/art_art_Port_9D6F5D.c
        library/art/type-art_art_Port_D7D05E.h
        library/art/art_art_Port_D7D05E.h
        library/art/art_art_Port_D7D05E.c
        library/art/type-art_art_Port_FD6239.h
        library/art/art_art_Port_FD6239.h
        library/art/art_art_Port_FD6239.c
        library/org/sireum/type-org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.c
        library/org/sireum/type-org_sireum_IS_5D0BE7.h
        library/org/sireum/org_sireum_IS_5D0BE7.h
        library/org/sireum/org_sireum_IS_5D0BE7.c
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
        library/org/sireum/type-org_sireum_MNone_2A2E1D.h
        library/org/sireum/org_sireum_MNone_2A2E1D.h
        library/org/sireum/org_sireum_MNone_2A2E1D.c
        library/org/sireum/type-org_sireum_MOption_EA1D29.h
        library/org/sireum/org_sireum_MOption_EA1D29.h
        library/org/sireum/org_sireum_MOption_EA1D29.c
        library/org/sireum/type-org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.h
        library/org/sireum/org_sireum_MS_2590FE.c
        library/org/sireum/type-org_sireum_MS_30A5B4.h
        library/org/sireum/org_sireum_MS_30A5B4.h
        library/org/sireum/org_sireum_MS_30A5B4.c
        library/org/sireum/type-org_sireum_MS_852149.h
        library/org/sireum/org_sireum_MS_852149.h
        library/org/sireum/org_sireum_MS_852149.c
        library/org/sireum/type-org_sireum_MS_94FFA9.h
        library/org/sireum/org_sireum_MS_94FFA9.h
        library/org/sireum/org_sireum_MS_94FFA9.c
        library/org/sireum/type-org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.h
        library/org/sireum/org_sireum_MS_B5E3E6.c
        library/org/sireum/type-org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.h
        library/org/sireum/org_sireum_MS_E444B2.c
        library/org/sireum/type-org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.h
        library/org/sireum/org_sireum_MS_F55A18.c
        library/org/sireum/type-org_sireum_MSome_D3D128.h
        library/org/sireum/org_sireum_MSome_D3D128.h
        library/org/sireum/org_sireum_MSome_D3D128.c
        library/org/sireum/type-org_sireum_None.h
        library/org/sireum/org_sireum_None.h
        library/org/sireum/org_sireum_None.c
        library/org/sireum/type-org_sireum_None_0CCA05.h
        library/org/sireum/org_sireum_None_0CCA05.h
        library/org/sireum/org_sireum_None_0CCA05.c
        library/org/sireum/type-org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.h
        library/org/sireum/org_sireum_None_39BC5F.c
        library/org/sireum/type-org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.h
        library/org/sireum/org_sireum_None_76463B.c
        library/org/sireum/type-org_sireum_None_93AA2B.h
        library/org/sireum/org_sireum_None_93AA2B.h
        library/org/sireum/org_sireum_None_93AA2B.c
        library/org/sireum/type-org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.h
        library/org/sireum/org_sireum_None_964667.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_02FA6D.h
        library/org/sireum/org_sireum_Option_02FA6D.h
        library/org/sireum/org_sireum_Option_02FA6D.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_6B846D.h
        library/org/sireum/org_sireum_Option_6B846D.h
        library/org/sireum/org_sireum_Option_6B846D.c
        library/org/sireum/type-org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_3B09D7.h
        library/org/sireum/org_sireum_Some_3B09D7.h
        library/org/sireum/org_sireum_Some_3B09D7.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.c
        library/org/sireum/type-org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.h
        library/org/sireum/org_sireum_Some_D29615.c
        library/org/sireum/type-org_sireum_Some_E9D1E5.h
        library/org/sireum/org_sireum_Some_E9D1E5.h
        library/org/sireum/org_sireum_Some_E9D1E5.c
        library/org/sireum/type-org_sireum_Tuple2_D0E3BB.h
        library/org/sireum/org_sireum_Tuple2_D0E3BB.h
        library/org/sireum/org_sireum_Tuple2_D0E3BB.c
        library/org/sireum/type-org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.h
        library/org/sireum/org_sireum_Tuple2_EC3B57.c
        library/org/sireum/type-org_sireum_Z32.h
        library/org/sireum/org_sireum_Z32.h
        library/org/sireum/org_sireum_Z32.c
        library/org/sireum/type-org_sireum_Z64.h
        library/org/sireum/org_sireum_Z64.h
        library/org/sireum/org_sireum_Z64.c
        library/org/sireum/conversions/type-org_sireum_conversions_Z64.h
        library/org/sireum/conversions/org_sireum_conversions_Z64.h
        ext/ext.c
        ext/ipc.h
        ext/ipc.c)

target_include_directories(main
        PUBLIC PUBLIC app-UART_Impl_App
        PUBLIC PUBLIC app-WaypointManager_Impl_App
        PUBLIC PUBLIC app-Radio_Impl_App
        PUBLIC PUBLIC app-FlightPlanner_Impl_App
        PUBLIC PUBLIC app-UARTDriver_Impl_App
        PUBLIC PUBLIC app-RadioDriver_Impl_App
        PUBLIC PUBLIC app-Main
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/Base_Types
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/MC
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/MC/Radio_Impl_Bridge
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/MC/UART_Impl_Bridge
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/SW
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/SW/FlightPlanner_Impl_Bridge
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/SW/RadioDriver_Impl_Bridge
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/SW/UARTDriver_Impl_Bridge
        PUBLIC PUBLIC library/ACT_Demo_Dec2018__camkes_X/SW/WaypointManager_Impl_Bridge
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC library/org/sireum/conversions
        PUBLIC PUBLIC ext)


add_executable(UART_Impl_App-bin app-UART_Impl_App/UART_Impl_App.c)

target_link_libraries(UART_Impl_App-bin LINK_PUBLIC main)

set_target_properties(UART_Impl_App-bin PROPERTIES OUTPUT_NAME UART_Impl_App)


add_executable(WaypointManager_Impl_App-bin app-WaypointManager_Impl_App/WaypointManager_Impl_App.c)

target_link_libraries(WaypointManager_Impl_App-bin LINK_PUBLIC main)

set_target_properties(WaypointManager_Impl_App-bin PROPERTIES OUTPUT_NAME WaypointManager_Impl_App)


add_executable(Radio_Impl_App-bin app-Radio_Impl_App/Radio_Impl_App.c)

target_link_libraries(Radio_Impl_App-bin LINK_PUBLIC main)

set_target_properties(Radio_Impl_App-bin PROPERTIES OUTPUT_NAME Radio_Impl_App)


add_executable(FlightPlanner_Impl_App-bin app-FlightPlanner_Impl_App/FlightPlanner_Impl_App.c)

target_link_libraries(FlightPlanner_Impl_App-bin LINK_PUBLIC main)

set_target_properties(FlightPlanner_Impl_App-bin PROPERTIES OUTPUT_NAME FlightPlanner_Impl_App)


add_executable(UARTDriver_Impl_App-bin app-UARTDriver_Impl_App/UARTDriver_Impl_App.c)

target_link_libraries(UARTDriver_Impl_App-bin LINK_PUBLIC main)

set_target_properties(UARTDriver_Impl_App-bin PROPERTIES OUTPUT_NAME UARTDriver_Impl_App)


add_executable(RadioDriver_Impl_App-bin app-RadioDriver_Impl_App/RadioDriver_Impl_App.c)

target_link_libraries(RadioDriver_Impl_App-bin LINK_PUBLIC main)

set_target_properties(RadioDriver_Impl_App-bin PROPERTIES OUTPUT_NAME RadioDriver_Impl_App)


add_executable(Main-bin app-Main/Main.c)

target_link_libraries(Main-bin LINK_PUBLIC main)

set_target_properties(Main-bin PROPERTIES OUTPUT_NAME Main)


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

to_hex("16 * 1024 * 1024" stack_size)
if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
  endif()
endif()

if(CAMKES)
  add_definitions(-DCAMKES)
endif(CAMKES)
