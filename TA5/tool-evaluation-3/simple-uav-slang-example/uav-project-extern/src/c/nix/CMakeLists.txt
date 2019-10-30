cmake_minimum_required(VERSION 3.6.2)

project(main)

set(CMAKE_C_STANDARD 99)

add_compile_options(-Werror)

add_compile_options("$<$<CONFIG:Release>:-O2>")

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
        runtime/stackframe.h
        runtime/misc.h
        runtime/misc.c
        runtime/type.c
        runtime/stackframe.c
        runtime/type.h
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
        library/art/type-art_art_Connection_210187.h
        library/art/art_art_Connection_210187.h
        library/art/art_art_Connection_210187.c
        library/art/type-art_art_Connection_A6262C.h
        library/art/art_art_Connection_A6262C.h
        library/art/art_art_Connection_A6262C.c
        library/art/type-art_art_Connection_B6057D.h
        library/art/art_art_Connection_B6057D.h
        library/art/art_art_Connection_B6057D.c
        library/art/type-art_art_Connection_C6DC10.h
        library/art/art_art_Connection_C6DC10.h
        library/art/art_art_Connection_C6DC10.c
        library/art/type-art_art_Connection_F3A765.h
        library/art/art_art_Connection_F3A765.h
        library/art/art_art_Connection_F3A765.c
        library/art/type-art_art_Port_311EA2.h
        library/art/art_art_Port_311EA2.h
        library/art/art_art_Port_311EA2.c
        library/art/type-art_art_Port_65F60A.h
        library/art/art_art_Port_65F60A.h
        library/art/art_art_Port_65F60A.c
        library/art/type-art_art_Port_97EF76.h
        library/art/art_art_Port_97EF76.h
        library/art/art_art_Port_97EF76.c
        library/art/type-art_art_Port_C0524D.h
        library/art/art_art_Port_C0524D.h
        library/art/art_art_Port_C0524D.c
        library/art/type-art_art_Port_CBF210.h
        library/art/art_art_Port_CBF210.h
        library/art/art_art_Port_CBF210.c
        library/org/sireum/type-org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.h
        library/org/sireum/org_sireum_IS_08117A.c
        library/org/sireum/type-org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.h
        library/org/sireum/org_sireum_IS_820232.c
        library/org/sireum/type-org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.h
        library/org/sireum/org_sireum_IS_82ABD8.c
        library/org/sireum/type-org_sireum_IS_83A978.h
        library/org/sireum/org_sireum_IS_83A978.h
        library/org/sireum/org_sireum_IS_83A978.c
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
        library/org/sireum/type-org_sireum_None_AABCDB.h
        library/org/sireum/org_sireum_None_AABCDB.h
        library/org/sireum/org_sireum_None_AABCDB.c
        library/org/sireum/type-org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.h
        library/org/sireum/org_sireum_Nothing.c
        library/org/sireum/type-org_sireum_Option_02FA6D.h
        library/org/sireum/org_sireum_Option_02FA6D.h
        library/org/sireum/org_sireum_Option_02FA6D.c
        library/org/sireum/type-org_sireum_Option_32416F.h
        library/org/sireum/org_sireum_Option_32416F.h
        library/org/sireum/org_sireum_Option_32416F.c
        library/org/sireum/type-org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.h
        library/org/sireum/org_sireum_Option_6239DB.c
        library/org/sireum/type-org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.h
        library/org/sireum/org_sireum_Option_882048.c
        library/org/sireum/type-org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.h
        library/org/sireum/org_sireum_Option_8E9F45.c
        library/org/sireum/type-org_sireum_S32.h
        library/org/sireum/org_sireum_S32.h
        library/org/sireum/org_sireum_S32.c
        library/org/sireum/type-org_sireum_S64.h
        library/org/sireum/org_sireum_S64.h
        library/org/sireum/org_sireum_S64.c
        library/org/sireum/type-org_sireum_Some.h
        library/org/sireum/org_sireum_Some.h
        library/org/sireum/org_sireum_Some.c
        library/org/sireum/type-org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.h
        library/org/sireum/org_sireum_Some_3E197E.c
        library/org/sireum/type-org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.h
        library/org/sireum/org_sireum_Some_488F47.c
        library/org/sireum/type-org_sireum_Some_C19C7E.h
        library/org/sireum/org_sireum_Some_C19C7E.h
        library/org/sireum/org_sireum_Some_C19C7E.c
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
        library/org/sireum/conversions/type-org_sireum_conversions_S64.h
        library/org/sireum/conversions/org_sireum_conversions_S64.h
        library/org/sireum/conversions/org_sireum_conversions_S64.c
        library/uav_project_extern/type-uav_project_extern_Arch.h
        library/uav_project_extern/uav_project_extern_Arch.h
        library/uav_project_extern/uav_project_extern_Arch.c
        library/uav_project_extern/type-uav_project_extern_ArtNix.h
        library/uav_project_extern/uav_project_extern_ArtNix.h
        library/uav_project_extern/uav_project_extern_ArtNix.c
        library/uav_project_extern/Base_Types/type-uav_project_extern_Base_Types_Boolean_Payload.h
        library/uav_project_extern/Base_Types/uav_project_extern_Base_Types_Boolean_Payload.h
        library/uav_project_extern/Base_Types/uav_project_extern_Base_Types_Boolean_Payload.c
        library/uav_project_extern/Base_Types/type-uav_project_extern_Base_Types_Integer_64_Payload.h
        library/uav_project_extern/Base_Types/uav_project_extern_Base_Types_Integer_64_Payload.h
        library/uav_project_extern/Base_Types/uav_project_extern_Base_Types_Integer_64_Payload.c
        library/uav_project_extern/type-uav_project_extern_FlightPlanner_Impl_App.h
        library/uav_project_extern/uav_project_extern_FlightPlanner_Impl_App.h
        library/uav_project_extern/uav_project_extern_FlightPlanner_Impl_App.c
        library/uav_project_extern/type-uav_project_extern_IPCPorts.h
        library/uav_project_extern/uav_project_extern_IPCPorts.h
        library/uav_project_extern/uav_project_extern_IPCPorts.c
        library/uav_project_extern/type-uav_project_extern_Main.h
        library/uav_project_extern/uav_project_extern_Main.h
        library/uav_project_extern/uav_project_extern_Main.c
        library/uav_project_extern/type-uav_project_extern_PlatformNix.h
        library/uav_project_extern/uav_project_extern_PlatformNix.h
        library/uav_project_extern/uav_project_extern_PlatformNix.c
        library/uav_project_extern/type-uav_project_extern_Process.h
        library/uav_project_extern/uav_project_extern_Process.h
        library/uav_project_extern/type-uav_project_extern_RadioDriver_Impl_App.h
        library/uav_project_extern/uav_project_extern_RadioDriver_Impl_App.h
        library/uav_project_extern/uav_project_extern_RadioDriver_Impl_App.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_Command_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_Command_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_Command_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_Command_Impl_Payload.h
        library/uav_project_extern/SW/uav_project_extern_SW_Command_Impl_Payload.h
        library/uav_project_extern/SW/uav_project_extern_SW_Command_Impl_Payload.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_Coordinate_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_Coordinate_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_Coordinate_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_FlightPattern.h
        library/uav_project_extern/SW/uav_project_extern_SW_FlightPattern.h
        library/uav_project_extern/SW/uav_project_extern_SW_FlightPattern.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_FlightPlanner_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_FlightPlanner_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_FlightPlanner_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_FlightPlanner_Impl_Bridge.h
        library/uav_project_extern/SW/uav_project_extern_SW_FlightPlanner_Impl_Bridge.h
        library/uav_project_extern/SW/uav_project_extern_SW_FlightPlanner_Impl_Bridge.c
        library/uav_project_extern/SW/FlightPlanner_Impl_Bridge/type-uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api.h
        library/uav_project_extern/SW/FlightPlanner_Impl_Bridge/uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api.h
        library/uav_project_extern/SW/FlightPlanner_Impl_Bridge/uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api.c
        library/uav_project_extern/SW/FlightPlanner_Impl_Bridge/type-uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints.h
        library/uav_project_extern/SW/FlightPlanner_Impl_Bridge/uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints.h
        library/uav_project_extern/SW/FlightPlanner_Impl_Bridge/uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_FlightPlanner_Impl_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_FlightPlanner_Impl_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_FlightPlanner_Impl_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_Map.h
        library/uav_project_extern/SW/uav_project_extern_SW_Map.h
        library/uav_project_extern/SW/uav_project_extern_SW_Map.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_Mission.h
        library/uav_project_extern/SW/uav_project_extern_SW_Mission.h
        library/uav_project_extern/SW/uav_project_extern_SW_Mission.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_MissionWindow.h
        library/uav_project_extern/SW/uav_project_extern_SW_MissionWindow.h
        library/uav_project_extern/SW/uav_project_extern_SW_MissionWindow.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_MissionWindow_Payload.h
        library/uav_project_extern/SW/uav_project_extern_SW_MissionWindow_Payload.h
        library/uav_project_extern/SW/uav_project_extern_SW_MissionWindow_Payload.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_Mission_Payload.h
        library/uav_project_extern/SW/uav_project_extern_SW_Mission_Payload.h
        library/uav_project_extern/SW/uav_project_extern_SW_Mission_Payload.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_RadioDriver_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_RadioDriver_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_RadioDriver_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_RadioDriver_Impl_Bridge.h
        library/uav_project_extern/SW/uav_project_extern_SW_RadioDriver_Impl_Bridge.h
        library/uav_project_extern/SW/uav_project_extern_SW_RadioDriver_Impl_Bridge.c
        library/uav_project_extern/SW/RadioDriver_Impl_Bridge/type-uav_project_extern_SW_RadioDriver_Impl_Bridge_Api.h
        library/uav_project_extern/SW/RadioDriver_Impl_Bridge/uav_project_extern_SW_RadioDriver_Impl_Bridge_Api.h
        library/uav_project_extern/SW/RadioDriver_Impl_Bridge/uav_project_extern_SW_RadioDriver_Impl_Bridge_Api.c
        library/uav_project_extern/SW/RadioDriver_Impl_Bridge/type-uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints.h
        library/uav_project_extern/SW/RadioDriver_Impl_Bridge/uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints.h
        library/uav_project_extern/SW/RadioDriver_Impl_Bridge/uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_RadioDriver_Impl_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_RadioDriver_Impl_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_RadioDriver_Impl_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_UARTDriver_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_UARTDriver_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_UARTDriver_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_UARTDriver_Impl_Bridge.h
        library/uav_project_extern/SW/uav_project_extern_SW_UARTDriver_Impl_Bridge.h
        library/uav_project_extern/SW/uav_project_extern_SW_UARTDriver_Impl_Bridge.c
        library/uav_project_extern/SW/UARTDriver_Impl_Bridge/type-uav_project_extern_SW_UARTDriver_Impl_Bridge_Api.h
        library/uav_project_extern/SW/UARTDriver_Impl_Bridge/uav_project_extern_SW_UARTDriver_Impl_Bridge_Api.h
        library/uav_project_extern/SW/UARTDriver_Impl_Bridge/uav_project_extern_SW_UARTDriver_Impl_Bridge_Api.c
        library/uav_project_extern/SW/UARTDriver_Impl_Bridge/type-uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints.h
        library/uav_project_extern/SW/UARTDriver_Impl_Bridge/uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints.h
        library/uav_project_extern/SW/UARTDriver_Impl_Bridge/uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_UARTDriver_Impl_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_UARTDriver_Impl_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_UARTDriver_Impl_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_UARTDriver_Util.h
        library/uav_project_extern/SW/uav_project_extern_SW_UARTDriver_Util.h
        library/uav_project_extern/SW/type-uav_project_extern_SW_WaypointManager_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_WaypointManager_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_WaypointManager_Impl.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_WaypointManager_Impl_Bridge.h
        library/uav_project_extern/SW/uav_project_extern_SW_WaypointManager_Impl_Bridge.h
        library/uav_project_extern/SW/uav_project_extern_SW_WaypointManager_Impl_Bridge.c
        library/uav_project_extern/SW/WaypointManager_Impl_Bridge/type-uav_project_extern_SW_WaypointManager_Impl_Bridge_Api.h
        library/uav_project_extern/SW/WaypointManager_Impl_Bridge/uav_project_extern_SW_WaypointManager_Impl_Bridge_Api.h
        library/uav_project_extern/SW/WaypointManager_Impl_Bridge/uav_project_extern_SW_WaypointManager_Impl_Bridge_Api.c
        library/uav_project_extern/SW/WaypointManager_Impl_Bridge/type-uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints.h
        library/uav_project_extern/SW/WaypointManager_Impl_Bridge/uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints.h
        library/uav_project_extern/SW/WaypointManager_Impl_Bridge/uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints.c
        library/uav_project_extern/SW/type-uav_project_extern_SW_WaypointManager_Impl_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_WaypointManager_Impl_Impl.h
        library/uav_project_extern/SW/uav_project_extern_SW_WaypointManager_Impl_Impl.c
        library/uav_project_extern/type-uav_project_extern_SharedMemory.h
        library/uav_project_extern/uav_project_extern_SharedMemory.h
        library/uav_project_extern/type-uav_project_extern_UARTDriver_Impl_App.h
        library/uav_project_extern/uav_project_extern_UARTDriver_Impl_App.h
        library/uav_project_extern/uav_project_extern_UARTDriver_Impl_App.c
        library/uav_project_extern/type-uav_project_extern_WaypointManager_Impl_App.h
        library/uav_project_extern/uav_project_extern_WaypointManager_Impl_App.h
        library/uav_project_extern/uav_project_extern_WaypointManager_Impl_App.c
        ext/ext.c
        ext/ext.h
        ext/ipc.c)

target_include_directories(main
        PUBLIC PUBLIC app-WaypointManager_Impl_App
        PUBLIC PUBLIC app-FlightPlanner_Impl_App
        PUBLIC PUBLIC app-UARTDriver_Impl_App
        PUBLIC PUBLIC app-RadioDriver_Impl_App
        PUBLIC PUBLIC app-Main
        PUBLIC PUBLIC runtime
        PUBLIC PUBLIC library/art
        PUBLIC PUBLIC library/art/Bridge
        PUBLIC PUBLIC library/art/DispatchPropertyProtocol
        PUBLIC PUBLIC library/org/sireum
        PUBLIC PUBLIC library/org/sireum/conversions
        PUBLIC PUBLIC library/uav_project_extern
        PUBLIC PUBLIC library/uav_project_extern/Base_Types
        PUBLIC PUBLIC library/uav_project_extern/SW
        PUBLIC PUBLIC library/uav_project_extern/SW/FlightPlanner_Impl_Bridge
        PUBLIC PUBLIC library/uav_project_extern/SW/RadioDriver_Impl_Bridge
        PUBLIC PUBLIC library/uav_project_extern/SW/UARTDriver_Impl_Bridge
        PUBLIC PUBLIC library/uav_project_extern/SW/WaypointManager_Impl_Bridge
        PUBLIC PUBLIC ext)


add_executable(WaypointManager_Impl_App-bin app-WaypointManager_Impl_App/WaypointManager_Impl_App.c)

target_link_libraries(WaypointManager_Impl_App-bin LINK_PUBLIC main m)

set_target_properties(WaypointManager_Impl_App-bin PROPERTIES OUTPUT_NAME WaypointManager_Impl_App)


add_executable(FlightPlanner_Impl_App-bin app-FlightPlanner_Impl_App/FlightPlanner_Impl_App.c)

target_link_libraries(FlightPlanner_Impl_App-bin LINK_PUBLIC main m)

set_target_properties(FlightPlanner_Impl_App-bin PROPERTIES OUTPUT_NAME FlightPlanner_Impl_App)


add_executable(UARTDriver_Impl_App-bin app-UARTDriver_Impl_App/UARTDriver_Impl_App.c)

target_link_libraries(UARTDriver_Impl_App-bin LINK_PUBLIC main m)

set_target_properties(UARTDriver_Impl_App-bin PROPERTIES OUTPUT_NAME UARTDriver_Impl_App)


add_executable(RadioDriver_Impl_App-bin app-RadioDriver_Impl_App/RadioDriver_Impl_App.c)

target_link_libraries(RadioDriver_Impl_App-bin LINK_PUBLIC main m)

set_target_properties(RadioDriver_Impl_App-bin PROPERTIES OUTPUT_NAME RadioDriver_Impl_App)


add_executable(Main-bin app-Main/Main.c)

target_link_libraries(Main-bin LINK_PUBLIC main m)

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

to_hex("16*1024*1024" stack_size)
if ("${CMAKE_CXX_COMPILER_ID}" MATCHES "(C|c?)lang")
  set(CMAKE_EXE_LINKER_FLAGS "-Wl,-stack_size -Wl,${stack_size}")
elseif ("${CMAKE_CXX_COMPILER_ID}" STREQUAL "GNU")
  if (WIN32 OR MINGW OR MSYS OR CYGWIN)
    set(CMAKE_EXE_LINKER_FLAGS "-Wl,--stack,${stack_size}")
  endif()
endif()