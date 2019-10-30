#ifndef SIREUM_GEN_H
#define SIREUM_GEN_H

#include <misc.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Arch.h>
#include <type-ACT_Demo_Dec2018__camkes_X_ArtNix.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_FlightPlanner_Impl_App.h>
#include <type-ACT_Demo_Dec2018__camkes_X_IPCPorts.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints.h>
#include <type-ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Main.h>
#include <type-ACT_Demo_Dec2018__camkes_X_PlatformNix.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Process.h>
#include <type-ACT_Demo_Dec2018__camkes_X_RadioDriver_Impl_App.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Radio_Impl_App.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Command_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_FlightPattern.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Mission.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_MissionWindow.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_SW__Map.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SharedMemory.h>
#include <type-ACT_Demo_Dec2018__camkes_X_UARTDriver_Impl_App.h>
#include <type-ACT_Demo_Dec2018__camkes_X_UART_Impl_App.h>
#include <type-ACT_Demo_Dec2018__camkes_X_WaypointManager_Impl_App.h>
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
#include <type-art_art_Connection_112F4D.h>
#include <type-art_art_Connection_2D82C4.h>
#include <type-art_art_Connection_A24F1E.h>
#include <type-art_art_Connection_CAF041.h>
#include <type-art_art_Connection_E82682.h>
#include <type-art_art_Port_2C63FD.h>
#include <type-art_art_Port_2D3735.h>
#include <type-art_art_Port_446859.h>
#include <type-art_art_Port_695448.h>
#include <type-art_art_Port_9D6F5D.h>
#include <type-art_art_Port_D7D05E.h>
#include <type-art_art_Port_FD6239.h>
#include <type-org_sireum_IS_08117A.h>
#include <type-org_sireum_IS_5D0BE7.h>
#include <type-org_sireum_IS_820232.h>
#include <type-org_sireum_IS_82ABD8.h>
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
#include <type-org_sireum_None_0CCA05.h>
#include <type-org_sireum_None_39BC5F.h>
#include <type-org_sireum_None_76463B.h>
#include <type-org_sireum_None_93AA2B.h>
#include <type-org_sireum_None_964667.h>
#include <type-org_sireum_Nothing.h>
#include <type-org_sireum_Option_02FA6D.h>
#include <type-org_sireum_Option_6239DB.h>
#include <type-org_sireum_Option_6B846D.h>
#include <type-org_sireum_Option_882048.h>
#include <type-org_sireum_Option_8E9F45.h>
#include <type-org_sireum_Some.h>
#include <type-org_sireum_Some_3B09D7.h>
#include <type-org_sireum_Some_3E197E.h>
#include <type-org_sireum_Some_488F47.h>
#include <type-org_sireum_Some_D29615.h>
#include <type-org_sireum_Some_E9D1E5.h>
#include <type-org_sireum_Tuple2_D0E3BB.h>
#include <type-org_sireum_Tuple2_EC3B57.h>
#include <type-org_sireum_Z32.h>
#include <type-org_sireum_Z64.h>
#include <type-org_sireum_conversions_Z64.h>

#if defined(static_assert)
#define STATIC_ASSERT static_assert
#define GLOBAL_STATIC_ASSERT(a, b, c) static_assert(b, c)
#else
#define STATIC_ASSERT(pred, explanation); {char assert[1/(pred)];(void)assert;}
#define GLOBAL_STATIC_ASSERT(unique, pred, explanation); namespace ASSERTION {char unique[1/(pred)];}
#endif

static inline size_t sizeOf(Type t) {
  TYPE type = t->type;
  switch (type) {
    case TTuple2_EC3B57: return sizeof(struct Tuple2_EC3B57); // (Z, Z)
    case TTuple2_D0E3BB: return sizeof(struct Tuple2_D0E3BB); // (Z, art.DataContent)
    case TACT_Demo_Dec2018__camkes_X_Base_Types_Boolean: return sizeof(struct ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean); // ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean
    case TACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload: return sizeof(struct ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload); // ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean_Payload
    case TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64: return sizeof(struct ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64); // ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64
    case TACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload: return sizeof(struct ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload); // ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64_Payload
    case TACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_MISSING_TYPE_Impl); // ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge); // ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api); // ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.Api
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints); // ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints
    case TACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl); // ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Impl
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge); // ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Bridge
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_Api); // ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Bridge.Api
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_EntryPoints); // ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Bridge.EntryPoints
    case TACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Impl); // ACT_Demo_Dec2018__camkes_X.MC.UART_Impl_Impl
    case TACT_Demo_Dec2018__camkes_X_SW_Command_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl); // ACT_Demo_Dec2018__camkes_X.SW.Command_Impl
    case TACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload); // ACT_Demo_Dec2018__camkes_X.SW.Command_Impl_Payload
    case TACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Coordinate_Impl); // ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge); // ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api); // ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.Api
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_EntryPoints); // ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.EntryPoints
    case TACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Impl); // ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Impl
    case TACT_Demo_Dec2018__camkes_X_SW_Mission: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Mission); // ACT_Demo_Dec2018__camkes_X.SW.Mission
    case TACT_Demo_Dec2018__camkes_X_SW_MissionWindow: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_MissionWindow); // ACT_Demo_Dec2018__camkes_X.SW.MissionWindow
    case TACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload); // ACT_Demo_Dec2018__camkes_X.SW.MissionWindow_Payload
    case TACT_Demo_Dec2018__camkes_X_SW_Mission_Payload: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload); // ACT_Demo_Dec2018__camkes_X.SW.Mission_Payload
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge); // ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api); // ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.Api
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_EntryPoints); // ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.EntryPoints
    case TACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Impl); // ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Impl
    case TACT_Demo_Dec2018__camkes_X_SW_SW__Map: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_SW__Map); // ACT_Demo_Dec2018__camkes_X.SW.SW__Map
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge); // ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api); // ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_EntryPoints); // ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.EntryPoints
    case TACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Impl); // ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Impl
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge); // ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api); // ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_EntryPoints); // ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.EntryPoints
    case TACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl: return sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Impl); // ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Impl
    case TIS_AA0F82: return sizeof(struct IS_AA0F82); // IS[Z, (Z, Z)]
    case TIS_5D0BE7: return sizeof(struct IS_5D0BE7); // IS[Z, ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]
    case TIS_948B60: return sizeof(struct IS_948B60); // IS[Z, String]
    case TIS_82ABD8: return sizeof(struct IS_82ABD8); // IS[Z, Z]
    case TIS_08117A: return sizeof(struct IS_08117A); // IS[Z, art.UConnection]
    case TIS_820232: return sizeof(struct IS_820232); // IS[Z, art.UPort]
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
    case TNone_0CCA05: return sizeof(struct None_0CCA05); // None[ACT_Demo_Dec2018__camkes_X.SW.Mission]
    case TNone_76463B: return sizeof(struct None_76463B); // None[Z]
    case TNone_964667: return sizeof(struct None_964667); // None[art.DataContent]
    case TNone_39BC5F: return sizeof(struct None_39BC5F); // None[art.UPort]
    case TSome_E9D1E5: return sizeof(struct Some_E9D1E5); // Some[(Z, art.DataContent)]
    case TSome_3B09D7: return sizeof(struct Some_3B09D7); // Some[ACT_Demo_Dec2018__camkes_X.SW.Mission]
    case TSome_488F47: return sizeof(struct Some_488F47); // Some[Z]
    case TSome_D29615: return sizeof(struct Some_D29615); // Some[art.DataContent]
    case TSome_3E197E: return sizeof(struct Some_3E197E); // Some[art.UPort]
    case Tart_ArchitectureDescription: return sizeof(struct art_ArchitectureDescription); // art.ArchitectureDescription
    case Tart_Bridge_Ports: return sizeof(struct art_Bridge_Ports); // art.Bridge.Ports
    case Tart_Connection_A24F1E: return sizeof(struct art_Connection_A24F1E); // art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]
    case Tart_Connection_CAF041: return sizeof(struct art_Connection_CAF041); // art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]
    case Tart_Connection_2D82C4: return sizeof(struct art_Connection_2D82C4); // art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]
    case Tart_Connection_112F4D: return sizeof(struct art_Connection_112F4D); // art.Connection[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]
    case Tart_Connection_E82682: return sizeof(struct art_Connection_E82682); // art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Mission]
    case Tart_DispatchPropertyProtocol_Periodic: return sizeof(struct art_DispatchPropertyProtocol_Periodic); // art.DispatchPropertyProtocol.Periodic
    case Tart_DispatchPropertyProtocol_Sporadic: return sizeof(struct art_DispatchPropertyProtocol_Sporadic); // art.DispatchPropertyProtocol.Sporadic
    case Tart_Empty: return sizeof(struct art_Empty); // art.Empty
    case Tart_EventTriggered: return sizeof(struct art_EventTriggered); // art.EventTriggered
    case Tart_Port_9D6F5D: return sizeof(struct art_Port_9D6F5D); // art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]
    case Tart_Port_446859: return sizeof(struct art_Port_446859); // art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]
    case Tart_Port_2C63FD: return sizeof(struct art_Port_2C63FD); // art.Port[ACT_Demo_Dec2018__camkes_X.MC.MISSING_TYPE_Impl]
    case Tart_Port_695448: return sizeof(struct art_Port_695448); // art.Port[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]
    case Tart_Port_FD6239: return sizeof(struct art_Port_FD6239); // art.Port[ACT_Demo_Dec2018__camkes_X.SW.Coordinate_Impl]
    case Tart_Port_2D3735: return sizeof(struct art_Port_2D3735); // art.Port[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]
    case Tart_Port_D7D05E: return sizeof(struct art_Port_D7D05E); // art.Port[ACT_Demo_Dec2018__camkes_X.SW.Mission]
    case Tart_TimeTriggered: return sizeof(struct art_TimeTriggered); // art.TimeTriggered
    case TString: return sizeof(struct String); // org.sireum.String
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_assign(void *dest, void *src, size_t destSize);

#endif