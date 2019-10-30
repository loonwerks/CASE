#include <all.h>
#include <errno.h>

B Type__eq(void *t1, void *t2) {
  TYPE type = ((Type) t1)->type;
  if (type != ((Type) t2)->type) return F;
  switch (type) {
    case TTuple2_EC3B57: return Tuple2_EC3B57__eq((Tuple2_EC3B57) t1, (Tuple2_EC3B57) t2);
    case TTuple2_D0E3BB: return Tuple2_D0E3BB__eq((Tuple2_D0E3BB) t1, (Tuple2_D0E3BB) t2);
    case TIS_AA0F82: return IS_AA0F82__eq((IS_AA0F82) t1, (IS_AA0F82) t2);
    case TIS_948B60: return IS_948B60__eq((IS_948B60) t1, (IS_948B60) t2);
    case TIS_82ABD8: return IS_82ABD8__eq((IS_82ABD8) t1, (IS_82ABD8) t2);
    case TIS_08117A: return IS_08117A__eq((IS_08117A) t1, (IS_08117A) t2);
    case TIS_820232: return IS_820232__eq((IS_820232) t1, (IS_820232) t2);
    case TIS_83A978: return IS_83A978__eq((IS_83A978) t1, (IS_83A978) t2);
    case TMNone_2A2E1D: return MNone_2A2E1D__eq((MNone_2A2E1D) t1, (MNone_2A2E1D) t2);
    case TMS_B5E3E6: return MS_B5E3E6__eq((MS_B5E3E6) t1, (MS_B5E3E6) t2);
    case TMS_E444B2: return MS_E444B2__eq((MS_E444B2) t1, (MS_E444B2) t2);
    case TMS_94FFA9: return MS_94FFA9__eq((MS_94FFA9) t1, (MS_94FFA9) t2);
    case TMS_2590FE: return MS_2590FE__eq((MS_2590FE) t1, (MS_2590FE) t2);
    case TMS_F55A18: return MS_F55A18__eq((MS_F55A18) t1, (MS_F55A18) t2);
    case TMS_30A5B4: return MS_30A5B4__eq((MS_30A5B4) t1, (MS_30A5B4) t2);
    case TMS_852149: return MS_852149__eq((MS_852149) t1, (MS_852149) t2);
    case TMSome_D3D128: return MSome_D3D128__eq((MSome_D3D128) t1, (MSome_D3D128) t2);
    case TNone_93AA2B: return None_93AA2B__eq((None_93AA2B) t1, (None_93AA2B) t2);
    case TNone_76463B: return None_76463B__eq((None_76463B) t1, (None_76463B) t2);
    case TNone_964667: return None_964667__eq((None_964667) t1, (None_964667) t2);
    case TNone_39BC5F: return None_39BC5F__eq((None_39BC5F) t1, (None_39BC5F) t2);
    case TNone_AABCDB: return None_AABCDB__eq((None_AABCDB) t1, (None_AABCDB) t2);
    case TSome_E9D1E5: return Some_E9D1E5__eq((Some_E9D1E5) t1, (Some_E9D1E5) t2);
    case TSome_488F47: return Some_488F47__eq((Some_488F47) t1, (Some_488F47) t2);
    case TSome_D29615: return Some_D29615__eq((Some_D29615) t1, (Some_D29615) t2);
    case TSome_3E197E: return Some_3E197E__eq((Some_3E197E) t1, (Some_3E197E) t2);
    case TSome_C19C7E: return Some_C19C7E__eq((Some_C19C7E) t1, (Some_C19C7E) t2);
    case TString: return String__eq((String) t1, (String) t2);
    case Tart_ArchitectureDescription: return art_ArchitectureDescription__eq((art_ArchitectureDescription) t1, (art_ArchitectureDescription) t2);
    case Tart_Bridge_Ports: return art_Bridge_Ports__eq((art_Bridge_Ports) t1, (art_Bridge_Ports) t2);
    case Tart_Connection_F3A765: return art_Connection_F3A765__eq((art_Connection_F3A765) t1, (art_Connection_F3A765) t2);
    case Tart_Connection_A6262C: return art_Connection_A6262C__eq((art_Connection_A6262C) t1, (art_Connection_A6262C) t2);
    case Tart_Connection_210187: return art_Connection_210187__eq((art_Connection_210187) t1, (art_Connection_210187) t2);
    case Tart_Connection_B6057D: return art_Connection_B6057D__eq((art_Connection_B6057D) t1, (art_Connection_B6057D) t2);
    case Tart_Connection_C6DC10: return art_Connection_C6DC10__eq((art_Connection_C6DC10) t1, (art_Connection_C6DC10) t2);
    case Tart_DispatchPropertyProtocol_Periodic: return art_DispatchPropertyProtocol_Periodic__eq((art_DispatchPropertyProtocol_Periodic) t1, (art_DispatchPropertyProtocol_Periodic) t2);
    case Tart_DispatchPropertyProtocol_Sporadic: return art_DispatchPropertyProtocol_Sporadic__eq((art_DispatchPropertyProtocol_Sporadic) t1, (art_DispatchPropertyProtocol_Sporadic) t2);
    case Tart_Empty: return art_Empty__eq((art_Empty) t1, (art_Empty) t2);
    case Tart_EventTriggered: return art_EventTriggered__eq((art_EventTriggered) t1, (art_EventTriggered) t2);
    case Tart_Port_C0524D: return art_Port_C0524D__eq((art_Port_C0524D) t1, (art_Port_C0524D) t2);
    case Tart_Port_CBF210: return art_Port_CBF210__eq((art_Port_CBF210) t1, (art_Port_CBF210) t2);
    case Tart_Port_311EA2: return art_Port_311EA2__eq((art_Port_311EA2) t1, (art_Port_311EA2) t2);
    case Tart_Port_65F60A: return art_Port_65F60A__eq((art_Port_65F60A) t1, (art_Port_65F60A) t2);
    case Tart_Port_97EF76: return art_Port_97EF76__eq((art_Port_97EF76) t1, (art_Port_97EF76) t2);
    case Tart_TimeTriggered: return art_TimeTriggered__eq((art_TimeTriggered) t1, (art_TimeTriggered) t2);
    case Tuav_project_extern_Base_Types_Boolean_Payload: return uav_project_extern_Base_Types_Boolean_Payload__eq((uav_project_extern_Base_Types_Boolean_Payload) t1, (uav_project_extern_Base_Types_Boolean_Payload) t2);
    case Tuav_project_extern_Base_Types_Integer_64_Payload: return uav_project_extern_Base_Types_Integer_64_Payload__eq((uav_project_extern_Base_Types_Integer_64_Payload) t1, (uav_project_extern_Base_Types_Integer_64_Payload) t2);
    case Tuav_project_extern_SW_Command_Impl: return uav_project_extern_SW_Command_Impl__eq((uav_project_extern_SW_Command_Impl) t1, (uav_project_extern_SW_Command_Impl) t2);
    case Tuav_project_extern_SW_Command_Impl_Payload: return uav_project_extern_SW_Command_Impl_Payload__eq((uav_project_extern_SW_Command_Impl_Payload) t1, (uav_project_extern_SW_Command_Impl_Payload) t2);
    case Tuav_project_extern_SW_Coordinate_Impl: return uav_project_extern_SW_Coordinate_Impl__eq((uav_project_extern_SW_Coordinate_Impl) t1, (uav_project_extern_SW_Coordinate_Impl) t2);
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge: return uav_project_extern_SW_FlightPlanner_Impl_Bridge__eq((uav_project_extern_SW_FlightPlanner_Impl_Bridge) t1, (uav_project_extern_SW_FlightPlanner_Impl_Bridge) t2);
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_Api: return uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api__eq((uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api) t1, (uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api) t2);
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints: return uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints__eq((uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints) t1, (uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints) t2);
    case Tuav_project_extern_SW_FlightPlanner_Impl_Impl: return uav_project_extern_SW_FlightPlanner_Impl_Impl__eq((uav_project_extern_SW_FlightPlanner_Impl_Impl) t1, (uav_project_extern_SW_FlightPlanner_Impl_Impl) t2);
    case Tuav_project_extern_SW_Map: return uav_project_extern_SW_Map__eq((uav_project_extern_SW_Map) t1, (uav_project_extern_SW_Map) t2);
    case Tuav_project_extern_SW_Mission: return uav_project_extern_SW_Mission__eq((uav_project_extern_SW_Mission) t1, (uav_project_extern_SW_Mission) t2);
    case Tuav_project_extern_SW_MissionWindow: return uav_project_extern_SW_MissionWindow__eq((uav_project_extern_SW_MissionWindow) t1, (uav_project_extern_SW_MissionWindow) t2);
    case Tuav_project_extern_SW_MissionWindow_Payload: return uav_project_extern_SW_MissionWindow_Payload__eq((uav_project_extern_SW_MissionWindow_Payload) t1, (uav_project_extern_SW_MissionWindow_Payload) t2);
    case Tuav_project_extern_SW_Mission_Payload: return uav_project_extern_SW_Mission_Payload__eq((uav_project_extern_SW_Mission_Payload) t1, (uav_project_extern_SW_Mission_Payload) t2);
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge: return uav_project_extern_SW_RadioDriver_Impl_Bridge__eq((uav_project_extern_SW_RadioDriver_Impl_Bridge) t1, (uav_project_extern_SW_RadioDriver_Impl_Bridge) t2);
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge_Api: return uav_project_extern_SW_RadioDriver_Impl_Bridge_Api__eq((uav_project_extern_SW_RadioDriver_Impl_Bridge_Api) t1, (uav_project_extern_SW_RadioDriver_Impl_Bridge_Api) t2);
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints: return uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints__eq((uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints) t1, (uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints) t2);
    case Tuav_project_extern_SW_RadioDriver_Impl_Impl: return uav_project_extern_SW_RadioDriver_Impl_Impl__eq((uav_project_extern_SW_RadioDriver_Impl_Impl) t1, (uav_project_extern_SW_RadioDriver_Impl_Impl) t2);
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge: return uav_project_extern_SW_UARTDriver_Impl_Bridge__eq((uav_project_extern_SW_UARTDriver_Impl_Bridge) t1, (uav_project_extern_SW_UARTDriver_Impl_Bridge) t2);
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge_Api: return uav_project_extern_SW_UARTDriver_Impl_Bridge_Api__eq((uav_project_extern_SW_UARTDriver_Impl_Bridge_Api) t1, (uav_project_extern_SW_UARTDriver_Impl_Bridge_Api) t2);
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints: return uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints__eq((uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints) t1, (uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints) t2);
    case Tuav_project_extern_SW_UARTDriver_Impl_Impl: return uav_project_extern_SW_UARTDriver_Impl_Impl__eq((uav_project_extern_SW_UARTDriver_Impl_Impl) t1, (uav_project_extern_SW_UARTDriver_Impl_Impl) t2);
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge: return uav_project_extern_SW_WaypointManager_Impl_Bridge__eq((uav_project_extern_SW_WaypointManager_Impl_Bridge) t1, (uav_project_extern_SW_WaypointManager_Impl_Bridge) t2);
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge_Api: return uav_project_extern_SW_WaypointManager_Impl_Bridge_Api__eq((uav_project_extern_SW_WaypointManager_Impl_Bridge_Api) t1, (uav_project_extern_SW_WaypointManager_Impl_Bridge_Api) t2);
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints: return uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints__eq((uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints) t1, (uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints) t2);
    case Tuav_project_extern_SW_WaypointManager_Impl_Impl: return uav_project_extern_SW_WaypointManager_Impl_Impl__eq((uav_project_extern_SW_WaypointManager_Impl_Impl) t1, (uav_project_extern_SW_WaypointManager_Impl_Impl) t2);
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Type_cprint(void *this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TTuple2_EC3B57: Tuple2_EC3B57_cprint((Tuple2_EC3B57) this, isOut); return;
    case TTuple2_D0E3BB: Tuple2_D0E3BB_cprint((Tuple2_D0E3BB) this, isOut); return;
    case TIS_AA0F82: IS_AA0F82_cprint((IS_AA0F82) this, isOut); return;
    case TIS_948B60: IS_948B60_cprint((IS_948B60) this, isOut); return;
    case TIS_82ABD8: IS_82ABD8_cprint((IS_82ABD8) this, isOut); return;
    case TIS_08117A: IS_08117A_cprint((IS_08117A) this, isOut); return;
    case TIS_820232: IS_820232_cprint((IS_820232) this, isOut); return;
    case TIS_83A978: IS_83A978_cprint((IS_83A978) this, isOut); return;
    case TMNone_2A2E1D: MNone_2A2E1D_cprint((MNone_2A2E1D) this, isOut); return;
    case TMS_B5E3E6: MS_B5E3E6_cprint((MS_B5E3E6) this, isOut); return;
    case TMS_E444B2: MS_E444B2_cprint((MS_E444B2) this, isOut); return;
    case TMS_94FFA9: MS_94FFA9_cprint((MS_94FFA9) this, isOut); return;
    case TMS_2590FE: MS_2590FE_cprint((MS_2590FE) this, isOut); return;
    case TMS_F55A18: MS_F55A18_cprint((MS_F55A18) this, isOut); return;
    case TMS_30A5B4: MS_30A5B4_cprint((MS_30A5B4) this, isOut); return;
    case TMS_852149: MS_852149_cprint((MS_852149) this, isOut); return;
    case TMSome_D3D128: MSome_D3D128_cprint((MSome_D3D128) this, isOut); return;
    case TNone_93AA2B: None_93AA2B_cprint((None_93AA2B) this, isOut); return;
    case TNone_76463B: None_76463B_cprint((None_76463B) this, isOut); return;
    case TNone_964667: None_964667_cprint((None_964667) this, isOut); return;
    case TNone_39BC5F: None_39BC5F_cprint((None_39BC5F) this, isOut); return;
    case TNone_AABCDB: None_AABCDB_cprint((None_AABCDB) this, isOut); return;
    case TSome_E9D1E5: Some_E9D1E5_cprint((Some_E9D1E5) this, isOut); return;
    case TSome_488F47: Some_488F47_cprint((Some_488F47) this, isOut); return;
    case TSome_D29615: Some_D29615_cprint((Some_D29615) this, isOut); return;
    case TSome_3E197E: Some_3E197E_cprint((Some_3E197E) this, isOut); return;
    case TSome_C19C7E: Some_C19C7E_cprint((Some_C19C7E) this, isOut); return;
    case TString: String_cprint((String) this, isOut); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_cprint((art_ArchitectureDescription) this, isOut); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_cprint((art_Bridge_Ports) this, isOut); return;
    case Tart_Connection_F3A765: art_Connection_F3A765_cprint((art_Connection_F3A765) this, isOut); return;
    case Tart_Connection_A6262C: art_Connection_A6262C_cprint((art_Connection_A6262C) this, isOut); return;
    case Tart_Connection_210187: art_Connection_210187_cprint((art_Connection_210187) this, isOut); return;
    case Tart_Connection_B6057D: art_Connection_B6057D_cprint((art_Connection_B6057D) this, isOut); return;
    case Tart_Connection_C6DC10: art_Connection_C6DC10_cprint((art_Connection_C6DC10) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_cprint((art_DispatchPropertyProtocol_Periodic) this, isOut); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_cprint((art_DispatchPropertyProtocol_Sporadic) this, isOut); return;
    case Tart_Empty: art_Empty_cprint((art_Empty) this, isOut); return;
    case Tart_EventTriggered: art_EventTriggered_cprint((art_EventTriggered) this, isOut); return;
    case Tart_Port_C0524D: art_Port_C0524D_cprint((art_Port_C0524D) this, isOut); return;
    case Tart_Port_CBF210: art_Port_CBF210_cprint((art_Port_CBF210) this, isOut); return;
    case Tart_Port_311EA2: art_Port_311EA2_cprint((art_Port_311EA2) this, isOut); return;
    case Tart_Port_65F60A: art_Port_65F60A_cprint((art_Port_65F60A) this, isOut); return;
    case Tart_Port_97EF76: art_Port_97EF76_cprint((art_Port_97EF76) this, isOut); return;
    case Tart_TimeTriggered: art_TimeTriggered_cprint((art_TimeTriggered) this, isOut); return;
    case Tuav_project_extern_Base_Types_Boolean_Payload: uav_project_extern_Base_Types_Boolean_Payload_cprint((uav_project_extern_Base_Types_Boolean_Payload) this, isOut); return;
    case Tuav_project_extern_Base_Types_Integer_64_Payload: uav_project_extern_Base_Types_Integer_64_Payload_cprint((uav_project_extern_Base_Types_Integer_64_Payload) this, isOut); return;
    case Tuav_project_extern_SW_Command_Impl: uav_project_extern_SW_Command_Impl_cprint((uav_project_extern_SW_Command_Impl) this, isOut); return;
    case Tuav_project_extern_SW_Command_Impl_Payload: uav_project_extern_SW_Command_Impl_Payload_cprint((uav_project_extern_SW_Command_Impl_Payload) this, isOut); return;
    case Tuav_project_extern_SW_Coordinate_Impl: uav_project_extern_SW_Coordinate_Impl_cprint((uav_project_extern_SW_Coordinate_Impl) this, isOut); return;
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge: uav_project_extern_SW_FlightPlanner_Impl_Bridge_cprint((uav_project_extern_SW_FlightPlanner_Impl_Bridge) this, isOut); return;
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_Api: uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_cprint((uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api) this, isOut); return;
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints: uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_cprint((uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints) this, isOut); return;
    case Tuav_project_extern_SW_FlightPlanner_Impl_Impl: uav_project_extern_SW_FlightPlanner_Impl_Impl_cprint((uav_project_extern_SW_FlightPlanner_Impl_Impl) this, isOut); return;
    case Tuav_project_extern_SW_Map: uav_project_extern_SW_Map_cprint((uav_project_extern_SW_Map) this, isOut); return;
    case Tuav_project_extern_SW_Mission: uav_project_extern_SW_Mission_cprint((uav_project_extern_SW_Mission) this, isOut); return;
    case Tuav_project_extern_SW_MissionWindow: uav_project_extern_SW_MissionWindow_cprint((uav_project_extern_SW_MissionWindow) this, isOut); return;
    case Tuav_project_extern_SW_MissionWindow_Payload: uav_project_extern_SW_MissionWindow_Payload_cprint((uav_project_extern_SW_MissionWindow_Payload) this, isOut); return;
    case Tuav_project_extern_SW_Mission_Payload: uav_project_extern_SW_Mission_Payload_cprint((uav_project_extern_SW_Mission_Payload) this, isOut); return;
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge: uav_project_extern_SW_RadioDriver_Impl_Bridge_cprint((uav_project_extern_SW_RadioDriver_Impl_Bridge) this, isOut); return;
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge_Api: uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_cprint((uav_project_extern_SW_RadioDriver_Impl_Bridge_Api) this, isOut); return;
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints: uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_cprint((uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints) this, isOut); return;
    case Tuav_project_extern_SW_RadioDriver_Impl_Impl: uav_project_extern_SW_RadioDriver_Impl_Impl_cprint((uav_project_extern_SW_RadioDriver_Impl_Impl) this, isOut); return;
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge: uav_project_extern_SW_UARTDriver_Impl_Bridge_cprint((uav_project_extern_SW_UARTDriver_Impl_Bridge) this, isOut); return;
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge_Api: uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_cprint((uav_project_extern_SW_UARTDriver_Impl_Bridge_Api) this, isOut); return;
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints: uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_cprint((uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints) this, isOut); return;
    case Tuav_project_extern_SW_UARTDriver_Impl_Impl: uav_project_extern_SW_UARTDriver_Impl_Impl_cprint((uav_project_extern_SW_UARTDriver_Impl_Impl) this, isOut); return;
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge: uav_project_extern_SW_WaypointManager_Impl_Bridge_cprint((uav_project_extern_SW_WaypointManager_Impl_Bridge) this, isOut); return;
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge_Api: uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_cprint((uav_project_extern_SW_WaypointManager_Impl_Bridge_Api) this, isOut); return;
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints: uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_cprint((uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints) this, isOut); return;
    case Tuav_project_extern_SW_WaypointManager_Impl_Impl: uav_project_extern_SW_WaypointManager_Impl_Impl_cprint((uav_project_extern_SW_WaypointManager_Impl_Impl) this, isOut); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
  #endif
}

void Type_string_(STACK_FRAME String result, void *this) {
  TYPE type = ((Type) this)->type;
  switch (type) {
    case TTuple2_EC3B57: Tuple2_EC3B57_string_(CALLER result, (Tuple2_EC3B57) this); return;
    case TTuple2_D0E3BB: Tuple2_D0E3BB_string_(CALLER result, (Tuple2_D0E3BB) this); return;
    case TIS_AA0F82: IS_AA0F82_string_(CALLER result, (IS_AA0F82) this); return;
    case TIS_948B60: IS_948B60_string_(CALLER result, (IS_948B60) this); return;
    case TIS_82ABD8: IS_82ABD8_string_(CALLER result, (IS_82ABD8) this); return;
    case TIS_08117A: IS_08117A_string_(CALLER result, (IS_08117A) this); return;
    case TIS_820232: IS_820232_string_(CALLER result, (IS_820232) this); return;
    case TIS_83A978: IS_83A978_string_(CALLER result, (IS_83A978) this); return;
    case TMNone_2A2E1D: MNone_2A2E1D_string_(CALLER result, (MNone_2A2E1D) this); return;
    case TMS_B5E3E6: MS_B5E3E6_string_(CALLER result, (MS_B5E3E6) this); return;
    case TMS_E444B2: MS_E444B2_string_(CALLER result, (MS_E444B2) this); return;
    case TMS_94FFA9: MS_94FFA9_string_(CALLER result, (MS_94FFA9) this); return;
    case TMS_2590FE: MS_2590FE_string_(CALLER result, (MS_2590FE) this); return;
    case TMS_F55A18: MS_F55A18_string_(CALLER result, (MS_F55A18) this); return;
    case TMS_30A5B4: MS_30A5B4_string_(CALLER result, (MS_30A5B4) this); return;
    case TMS_852149: MS_852149_string_(CALLER result, (MS_852149) this); return;
    case TMSome_D3D128: MSome_D3D128_string_(CALLER result, (MSome_D3D128) this); return;
    case TNone_93AA2B: None_93AA2B_string_(CALLER result, (None_93AA2B) this); return;
    case TNone_76463B: None_76463B_string_(CALLER result, (None_76463B) this); return;
    case TNone_964667: None_964667_string_(CALLER result, (None_964667) this); return;
    case TNone_39BC5F: None_39BC5F_string_(CALLER result, (None_39BC5F) this); return;
    case TNone_AABCDB: None_AABCDB_string_(CALLER result, (None_AABCDB) this); return;
    case TSome_E9D1E5: Some_E9D1E5_string_(CALLER result, (Some_E9D1E5) this); return;
    case TSome_488F47: Some_488F47_string_(CALLER result, (Some_488F47) this); return;
    case TSome_D29615: Some_D29615_string_(CALLER result, (Some_D29615) this); return;
    case TSome_3E197E: Some_3E197E_string_(CALLER result, (Some_3E197E) this); return;
    case TSome_C19C7E: Some_C19C7E_string_(CALLER result, (Some_C19C7E) this); return;
    case TString: String_string_(CALLER result, (String) this); return;
    case Tart_ArchitectureDescription: art_ArchitectureDescription_string_(CALLER result, (art_ArchitectureDescription) this); return;
    case Tart_Bridge_Ports: art_Bridge_Ports_string_(CALLER result, (art_Bridge_Ports) this); return;
    case Tart_Connection_F3A765: art_Connection_F3A765_string_(CALLER result, (art_Connection_F3A765) this); return;
    case Tart_Connection_A6262C: art_Connection_A6262C_string_(CALLER result, (art_Connection_A6262C) this); return;
    case Tart_Connection_210187: art_Connection_210187_string_(CALLER result, (art_Connection_210187) this); return;
    case Tart_Connection_B6057D: art_Connection_B6057D_string_(CALLER result, (art_Connection_B6057D) this); return;
    case Tart_Connection_C6DC10: art_Connection_C6DC10_string_(CALLER result, (art_Connection_C6DC10) this); return;
    case Tart_DispatchPropertyProtocol_Periodic: art_DispatchPropertyProtocol_Periodic_string_(CALLER result, (art_DispatchPropertyProtocol_Periodic) this); return;
    case Tart_DispatchPropertyProtocol_Sporadic: art_DispatchPropertyProtocol_Sporadic_string_(CALLER result, (art_DispatchPropertyProtocol_Sporadic) this); return;
    case Tart_Empty: art_Empty_string_(CALLER result, (art_Empty) this); return;
    case Tart_EventTriggered: art_EventTriggered_string_(CALLER result, (art_EventTriggered) this); return;
    case Tart_Port_C0524D: art_Port_C0524D_string_(CALLER result, (art_Port_C0524D) this); return;
    case Tart_Port_CBF210: art_Port_CBF210_string_(CALLER result, (art_Port_CBF210) this); return;
    case Tart_Port_311EA2: art_Port_311EA2_string_(CALLER result, (art_Port_311EA2) this); return;
    case Tart_Port_65F60A: art_Port_65F60A_string_(CALLER result, (art_Port_65F60A) this); return;
    case Tart_Port_97EF76: art_Port_97EF76_string_(CALLER result, (art_Port_97EF76) this); return;
    case Tart_TimeTriggered: art_TimeTriggered_string_(CALLER result, (art_TimeTriggered) this); return;
    case Tuav_project_extern_Base_Types_Boolean_Payload: uav_project_extern_Base_Types_Boolean_Payload_string_(CALLER result, (uav_project_extern_Base_Types_Boolean_Payload) this); return;
    case Tuav_project_extern_Base_Types_Integer_64_Payload: uav_project_extern_Base_Types_Integer_64_Payload_string_(CALLER result, (uav_project_extern_Base_Types_Integer_64_Payload) this); return;
    case Tuav_project_extern_SW_Command_Impl: uav_project_extern_SW_Command_Impl_string_(CALLER result, (uav_project_extern_SW_Command_Impl) this); return;
    case Tuav_project_extern_SW_Command_Impl_Payload: uav_project_extern_SW_Command_Impl_Payload_string_(CALLER result, (uav_project_extern_SW_Command_Impl_Payload) this); return;
    case Tuav_project_extern_SW_Coordinate_Impl: uav_project_extern_SW_Coordinate_Impl_string_(CALLER result, (uav_project_extern_SW_Coordinate_Impl) this); return;
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge: uav_project_extern_SW_FlightPlanner_Impl_Bridge_string_(CALLER result, (uav_project_extern_SW_FlightPlanner_Impl_Bridge) this); return;
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_Api: uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api_string_(CALLER result, (uav_project_extern_SW_FlightPlanner_Impl_Bridge_Api) this); return;
    case Tuav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints: uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints_string_(CALLER result, (uav_project_extern_SW_FlightPlanner_Impl_Bridge_EntryPoints) this); return;
    case Tuav_project_extern_SW_FlightPlanner_Impl_Impl: uav_project_extern_SW_FlightPlanner_Impl_Impl_string_(CALLER result, (uav_project_extern_SW_FlightPlanner_Impl_Impl) this); return;
    case Tuav_project_extern_SW_Map: uav_project_extern_SW_Map_string_(CALLER result, (uav_project_extern_SW_Map) this); return;
    case Tuav_project_extern_SW_Mission: uav_project_extern_SW_Mission_string_(CALLER result, (uav_project_extern_SW_Mission) this); return;
    case Tuav_project_extern_SW_MissionWindow: uav_project_extern_SW_MissionWindow_string_(CALLER result, (uav_project_extern_SW_MissionWindow) this); return;
    case Tuav_project_extern_SW_MissionWindow_Payload: uav_project_extern_SW_MissionWindow_Payload_string_(CALLER result, (uav_project_extern_SW_MissionWindow_Payload) this); return;
    case Tuav_project_extern_SW_Mission_Payload: uav_project_extern_SW_Mission_Payload_string_(CALLER result, (uav_project_extern_SW_Mission_Payload) this); return;
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge: uav_project_extern_SW_RadioDriver_Impl_Bridge_string_(CALLER result, (uav_project_extern_SW_RadioDriver_Impl_Bridge) this); return;
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge_Api: uav_project_extern_SW_RadioDriver_Impl_Bridge_Api_string_(CALLER result, (uav_project_extern_SW_RadioDriver_Impl_Bridge_Api) this); return;
    case Tuav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints: uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints_string_(CALLER result, (uav_project_extern_SW_RadioDriver_Impl_Bridge_EntryPoints) this); return;
    case Tuav_project_extern_SW_RadioDriver_Impl_Impl: uav_project_extern_SW_RadioDriver_Impl_Impl_string_(CALLER result, (uav_project_extern_SW_RadioDriver_Impl_Impl) this); return;
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge: uav_project_extern_SW_UARTDriver_Impl_Bridge_string_(CALLER result, (uav_project_extern_SW_UARTDriver_Impl_Bridge) this); return;
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge_Api: uav_project_extern_SW_UARTDriver_Impl_Bridge_Api_string_(CALLER result, (uav_project_extern_SW_UARTDriver_Impl_Bridge_Api) this); return;
    case Tuav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints: uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints_string_(CALLER result, (uav_project_extern_SW_UARTDriver_Impl_Bridge_EntryPoints) this); return;
    case Tuav_project_extern_SW_UARTDriver_Impl_Impl: uav_project_extern_SW_UARTDriver_Impl_Impl_string_(CALLER result, (uav_project_extern_SW_UARTDriver_Impl_Impl) this); return;
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge: uav_project_extern_SW_WaypointManager_Impl_Bridge_string_(CALLER result, (uav_project_extern_SW_WaypointManager_Impl_Bridge) this); return;
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge_Api: uav_project_extern_SW_WaypointManager_Impl_Bridge_Api_string_(CALLER result, (uav_project_extern_SW_WaypointManager_Impl_Bridge_Api) this); return;
    case Tuav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints: uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints_string_(CALLER result, (uav_project_extern_SW_WaypointManager_Impl_Bridge_EntryPoints) this); return;
    case Tuav_project_extern_SW_WaypointManager_Impl_Impl: uav_project_extern_SW_WaypointManager_Impl_Impl_string_(CALLER result, (uav_project_extern_SW_WaypointManager_Impl_Impl) this); return;
    default: fprintf(stderr, "%s: %d\n", "Unexpected TYPE: ", type); exit(1);
  }
}

void Z_apply(Option_882048 result, String s) {
  char *endptr;
  errno = 0;
  long long n = strtoll(s->value, &endptr, 0);
  if (errno) {
    errno = 0;
    Type_assign(result, &((struct None_76463B) { .type = TNone_76463B }), sizeof(struct None_76463B));
    return;
  }
  if (&s->value[s->size] - endptr == 0 && INT64_MIN <= n && n <= INT64_MAX)
    Type_assign(result, &((struct Some_488F47) { .type = TSome_488F47, .value = (Z) n }), sizeof(struct Some_488F47));
  else Type_assign(result, &((struct None_76463B) { .type = TNone_76463B }), sizeof(struct None_76463B));
}