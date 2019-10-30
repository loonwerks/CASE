#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#include <misc.h>
#include <type-art_ArchitectureDescription.h>
#include <type-art_Art.h>
#include <type-art_Bridge.h>
#include <type-art_Bridge_EntryPoints.h>
#include <type-art_Bridge_Ports.h>
#include <type-art_DataContent.h>
#include <type-art_DispatchPropertyProtocol.h>
#include <type-art_DispatchPropertyProtocol_Periodic.h>
#include <type-art_DispatchPropertyProtocol_Sporadic.h>
#include <type-art_DispatchStatus.h>
#include <type-art_Empty.h>
#include <type-art_EventTriggered.h>
#include <type-art_PortMode.h>
#include <type-art_TimeTriggered.h>
#include <type-art_UConnection.h>
#include <type-art_UPort.h>
#include <type-art_art_Connection_210187.h>
#include <type-art_art_Connection_A6262C.h>
#include <type-art_art_Connection_B6057D.h>
#include <type-art_art_Connection_C6DC10.h>
#include <type-art_art_Connection_F3A765.h>
#include <type-art_art_Port_311EA2.h>
#include <type-art_art_Port_65F60A.h>
#include <type-art_art_Port_97EF76.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_CBF210.h>
#include <type-org_sireum_IS_08117A.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_82ABD8.h>
#include <type-org_sireum_IS_83A978.h>
#include <type-org_sireum_IS_948B60.h>
#include <type-org_sireum_IS_AA0F82.h>
#include <type-org_sireum_MNone_2A2E1D.h>
#include <type-org_sireum_MOption_EA1D29.h>
#include <type-org_sireum_MS_2590FE.h>
#include <type-org_sireum_MS_30A5B4.h>
#include <type-org_sireum_MS_852149.h>
#include <type-org_sireum_MS_94FFA9.h>
#include <type-org_sireum_MS_B5E3E6.h>
#include <type-org_sireum_MS_E444B2.h>
#include <type-org_sireum_MS_F55A18.h>
#include <type-org_sireum_MSome_D3D128.h>
#include <type-org_sireum_None.h>
#include <type-org_sireum_None_39BC5F.h>
#include <type-org_sireum_None_76463B.h>
#include <type-org_sireum_None_93AA2B.h>
#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_None_AABCDB.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_02FA6D.h>
#include <type-org_sireum_Option_32416F.h>
#include <type-org_sireum_Option_6239DB.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_8E9F45.h>
#include <type-org_sireum_S32.h>
#include <type-org_sireum_S64.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_3E197E.h>
#include <type-org_sireum_Some_488F47.h>
#include <type-org_sireum_Some_C19C7E.h>
#include <type-org_sireum_Some_D29615.h>
#include <type-org_sireum_Some_E9D1E5.h>
#include <type-org_sireum_Tuple2_D0E3BB.h>
#include <type-org_sireum_Tuple2_EC3B57.h>
#include <type-org_sireum_conversions_S64.h>
#include <type-uav_project_extern_Arch.h>
#include <type-uav_project_extern_ArtNix.h>
#include <type-uav_project_extern_Base_Types_Boolean_Payload.h>
#include <type-uav_project_extern_Base_Types_Integer_64_Payload.h>
#include <type-uav_project_extern_FlightPlanner_Impl_App.h>
#include <type-uav_project_extern_IPCPorts.h>
#include <type-uav_project_extern_Main.h>
#include <type-uav_project_extern_PlatformNix.h>
#include <type-uav_project_extern_Process.h>
#include <type-uav_project_extern_RadioDriver_Impl_App.h>
#include <type-uav_project_extern_SW_Command_Impl.h>
#include <type-uav_project_extern_SW_Command_Impl_Payload.h>
#include <type-uav_project_extern_SW_Coordinate_Impl.h>
#include <type-uav_project_extern_SW_FlightPattern.h>
#include <type-uav_project_extern_SW_FlightPlanner_Impl.h>
#include <type-uav_project_extern_SW_FlightPlanner_Impl_Bridge.h>
#include <type-uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api.h>
#include <type-uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints.h>
#include <type-uav_project_extern_SW_FlightPlanner_Impl_Impl.h>
#include <type-uav_project_extern_SW_Map.h>
#include <type-uav_project_extern_SW_Mission.h>
#include <type-uav_project_extern_SW_MissionWindow.h>
#include <type-uav_project_extern_SW_MissionWindow_Payload.h>
#include <type-uav_project_extern_SW_Mission_Payload.h>
#include <type-uav_project_extern_SW_RadioDriver_Impl.h>
#include <type-uav_project_extern_SW_RadioDriver_Impl_Bridge.h>
#include <type-uav_project_extern_SW_RadioDriver_Impl_Bridge_Api.h>
#include <type-uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints.h>
#include <type-uav_project_extern_SW_RadioDriver_Impl_Impl.h>
#include <type-uav_project_extern_SW_UARTDriver_Impl.h>
#include <type-uav_project_extern_SW_UARTDriver_Impl_Bridge.h>
#include <type-uav_project_extern_SW_UARTDriver_Impl_Bridge_Api.h>
#include <type-uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints.h>
#include <type-uav_project_extern_SW_UARTDriver_Impl_Impl.h>
#include <type-uav_project_extern_SW_UARTDriver_Util.h>
#include <type-uav_project_extern_SW_WaypointManager_Impl.h>
#include <type-uav_project_extern_SW_WaypointManager_Impl_Bridge.h>
#include <type-uav_project_extern_SW_WaypointManager_Impl_Bridge_Api.h>
#include <type-uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints.h>
#include <type-uav_project_extern_SW_WaypointManager_Impl_Impl.h>
#include <type-uav_project_extern_SharedMemory.h>
#include <type-uav_project_extern_UARTDriver_Impl_App.h>
#include <type-uav_project_extern_WaypointManager_Impl_App.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert[1/(pred)];(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique[1/(pred)];}
#endif

inline size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TTuple2_EC3B57: return sizeof(struct Tuple2_EC3B57); // (Z, Z)
    case TTuple2_D0E3BB: return sizeof(struct Tuple2_D0E3BB); // (Z, art.DataContent)
    case TIS_AA0F82: return sizeof(struct IS_AA0F82); // IS[Z, (Z, Z)]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_82ABD8: return sizeof(struct IS_82ABD8); // IS[Z, Z]
    case TIS_08117A: return sizeof(struct IS_08117A); // IS[Z, art.UConnection]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
    case TIS_83A978: return sizeof(struct IS_83A978); // IS[Z, uav_project_extern.SW.Coordinate_Impl]
    case TMNone_2A2E1D: return sizeof(struct MNone_2A2E1D); // MNone[art.Bridge]
    case TMS_B5E3E6: return sizeof(struct MS_B5E3E6); // MS[Z, IS[Z, (Z, Z)]]
    case TMS_E444B2: return sizeof(struct MS_E444B2); // MS[Z, IS[Z, Z]]
    case TMS_94FFA9: return sizeof(struct MS_94FFA9); // MS[Z, MOption[art.Bridge]]
    case TMS_2590FE: return sizeof(struct MS_2590FE); // MS[Z, Option[art.DataContent]]
    case TMS_F55A18: return sizeof(struct MS_F55A18); // MS[Z, Option[art.UPort]]
    case TMS_30A5B4: return sizeof(struct MS_30A5B4); // MS[Z, Z]
    case TMS_852149: return sizeof(struct MS_852149); // MS[Z, art.Bridge]
    case TMSome_D3D128: return sizeof(struct MSome_D3D128); // MSome[art.Bridge]
    case TNone_93AA2B: return sizeof(struct None_93AA2B); // None[(Z, art.DataContent)]
    case TNone_76463B: return sizeof(struct None_76463B); // None[Z]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TNone_AABCDB: return sizeof(struct None_AABCDB); // None[uav_project_extern.SW.Mission]
    case TSome_E9D1E5: return sizeof(struct Some_E9D1E5); // Some[(Z, art.DataContent)]
    case TSome_488F47: return sizeof(struct Some_488F47); // Some[Z]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case TSome_C19C7E: return sizeof(struct Some_C19C7E); // Some[uav_project_extern.SW.Mission]
    case TString: return sizeof(struct String); // String
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_Connection_F3A765: return sizeof(struct art_Connection_F3A765); // art.Connection[B]
    case Tart_Connection_A6262C: return sizeof(struct art_Connection_A6262C); // art.Connection[S64]
    case Tart_Connection_210187: return sizeof(struct art_Connection_210187); // art.Connection[uav_project_extern.SW.Command_Impl]
    case Tart_Connection_B6057D: return sizeof(struct art_Connection_B6057D); // art.Connection[uav_project_extern.SW.MissionWindow]
    case Tart_Connection_C6DC10: return sizeof(struct art_Connection_C6DC10); // art.Connection[uav_project_extern.SW.Mission]
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_EventTriggered: return sizeof(struct art_EventTriggered); // art.EventTriggered
    case Tart_Port_C0524D: return sizeof(struct art_Port_C0524D); // art.Port[B]
    case Tart_Port_CBF210: return sizeof(struct art_Port_CBF210); // art.Port[S64]
    case Tart_Port_311EA2: return sizeof(struct art_Port_311EA2); // art.Port[uav_project_extern.SW.Command_Impl]
    case Tart_Port_65F60A: return sizeof(struct art_Port_65F60A); // art.Port[uav_project_extern.SW.MissionWindow]
    case Tart_Port_97EF76: return sizeof(struct art_Port_97EF76); // art.Port[uav_project_extern.SW.Mission]
    case Tart_TimeTriggered: return sizeof(struct art_TimeTriggered); // art.TimeTriggered
    case Tuav_project_extern_Base_Types_Boolean_Payload: return sizeof(struct uav_project_extern_Base_Types_Boolean_Payload); // uav_project_extern.Base_Types.Boolean_Payload
    case Tuav_project_extern_Base_Types_Integer_64_Payload: return sizeof(struct uav_project_extern_Base_Types_Integer_64_Payload); // uav_project_extern.Base_Types.Integer_64_Payload
    case Tuav_project_extern_SW_Command_Impl: return sizeof(struct uav_project_extern_SW_Command_Impl); // uav_project_extern.SW.Command_Impl
    case Tuav_project_extern_SW_Command_Impl_Payload: return sizeof(struct uav_project_extern_SW_Command_Impl_Payload); // uav_project_extern.SW.Command_Impl_Payload
    case Tuav_project_extern_SW_Coordinate_Impl: return sizeof(struct uav_project_extern_SW_Coordinate_Impl); // uav_project_extern.SW.Coordinate_Impl
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge: return sizeof(struct uav_project_extern_SW_FlightPlanner_Impl_Bridge); // uav_project_extern.SW.FlightPlanner_Impl_Bridge
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_Api: return sizeof(struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api); // uav_project_extern.SW.FlightPlanner_Impl_Bridge.Api
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints: return sizeof(struct uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints); // uav_project_extern.SW.FlightPlanner_Impl_Bridge.EntryPoints
    case Tuav_project_extern_SW_FlightPlanner_Impl_Impl: return sizeof(struct uav_project_extern_SW_FlightPlanner_Impl_Impl); // uav_project_extern.SW.FlightPlanner_Impl_Impl
    case Tuav_project_extern_SW_Map: return sizeof(struct uav_project_extern_SW_Map); // uav_project_extern.SW.Map
    case Tuav_project_extern_SW_Mission: return sizeof(struct uav_project_extern_SW_Mission); // uav_project_extern.SW.Mission
    case Tuav_project_extern_SW_MissionWindow: return sizeof(struct uav_project_extern_SW_MissionWindow); // uav_project_extern.SW.MissionWindow
    case Tuav_project_extern_SW_MissionWindow_Payload: return sizeof(struct uav_project_extern_SW_MissionWindow_Payload); // uav_project_extern.SW.MissionWindow_Payload
    case Tuav_project_extern_SW_Mission_Payload: return sizeof(struct uav_project_extern_SW_Mission_Payload); // uav_project_extern.SW.Mission_Payload
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge: return sizeof(struct uav_project_extern_SW_RadioDriver_Impl_Bridge); // uav_project_extern.SW.RadioDriver_Impl_Bridge
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge_Api: return sizeof(struct uav_project_extern_SW_RadioDriver_Impl_Bridge_Api); // uav_project_extern.SW.RadioDriver_Impl_Bridge.Api
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints: return sizeof(struct uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints); // uav_project_extern.SW.RadioDriver_Impl_Bridge.EntryPoints
    case Tuav_project_extern_SW_RadioDriver_Impl_Impl: return sizeof(struct uav_project_extern_SW_RadioDriver_Impl_Impl); // uav_project_extern.SW.RadioDriver_Impl_Impl
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge: return sizeof(struct uav_project_extern_SW_UARTDriver_Impl_Bridge); // uav_project_extern.SW.UARTDriver_Impl_Bridge
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge_Api: return sizeof(struct uav_project_extern_SW_UARTDriver_Impl_Bridge_Api); // uav_project_extern.SW.UARTDriver_Impl_Bridge.Api
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints: return sizeof(struct uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints); // uav_project_extern.SW.UARTDriver_Impl_Bridge.EntryPoints
    case Tuav_project_extern_SW_UARTDriver_Impl_Impl: return sizeof(struct uav_project_extern_SW_UARTDriver_Impl_Impl); // uav_project_extern.SW.UARTDriver_Impl_Impl
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge: return sizeof(struct uav_project_extern_SW_WaypointManager_Impl_Bridge); // uav_project_extern.SW.WaypointManager_Impl_Bridge
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge_Api: return sizeof(struct uav_project_extern_SW_WaypointManager_Impl_Bridge_Api); // uav_project_extern.SW.WaypointManager_Impl_Bridge.Api
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints: return sizeof(struct uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints); // uav_project_extern.SW.WaypointManager_Impl_Bridge.EntryPoints
    case Tuav_project_extern_SW_WaypointManager_Impl_Impl: return sizeof(struct uav_project_extern_SW_WaypointManager_Impl_Impl); // uav_project_extern.SW.WaypointManager_Impl_Impl
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize);

#endif