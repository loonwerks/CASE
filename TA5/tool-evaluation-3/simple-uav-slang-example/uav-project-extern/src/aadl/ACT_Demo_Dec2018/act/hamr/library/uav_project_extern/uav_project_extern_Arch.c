#include <all.h>

B uav_project_extern_Arch_initialized_ = F;

struct uav_project_extern_SW_RadioDriver_Impl_Bridge _uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO;
struct uav_project_extern_SW_FlightPlanner_Impl_Bridge _uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN;
struct uav_project_extern_SW_WaypointManager_Impl_Bridge _uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM;
struct uav_project_extern_SW_UARTDriver_Impl_Bridge _uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART;
struct art_ArchitectureDescription _uav_project_extern_Arch_ad;

void uav_project_extern_Arch_init(STACK_FRAME_ONLY) {
  if (uav_project_extern_Arch_initialized_) return;
  uav_project_extern_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "uav_project_extern.Arch", "<init>", 0);
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_1);
  art_DispatchPropertyProtocol_Sporadic_apply(SF &t_1, Z_C(1));
  DeclNewart_Port_311EA2(t_2);
  art_Port_311EA2_apply(SF &t_2, Z_C(0), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_recv_map_out"), art_PortMode_EventOut);
  DeclNewuav_project_extern_SW_RadioDriver_Impl_Bridge(t_0);
  uav_project_extern_SW_RadioDriver_Impl_Bridge_apply(SF &t_0, Z_C(0), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO"), (art_DispatchPropertyProtocol) (&t_1), (art_Port_311EA2) (&t_2));
  Type_assign(&_uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO, (&t_0), sizeof(struct uav_project_extern_SW_RadioDriver_Impl_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_4);
  art_DispatchPropertyProtocol_Sporadic_apply(SF &t_4, Z_C(1));
  DeclNewart_Port_C0524D(t_5);
  art_Port_C0524D_apply(SF &t_5, Z_C(1), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FPLN_mission_rcv"), art_PortMode_EventIn);
  DeclNewart_Port_311EA2(t_6);
  art_Port_311EA2_apply(SF &t_6, Z_C(2), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FPLN_recv_map"), art_PortMode_EventIn);
  DeclNewart_Port_97EF76(t_7);
  art_Port_97EF76_apply(SF &t_7, Z_C(3), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FPLN_flight_plan"), art_PortMode_EventOut);
  DeclNewuav_project_extern_SW_FlightPlanner_Impl_Bridge(t_3);
  uav_project_extern_SW_FlightPlanner_Impl_Bridge_apply(SF &t_3, Z_C(1), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FPLN"), (art_DispatchPropertyProtocol) (&t_4), (art_Port_C0524D) (&t_5), (art_Port_311EA2) (&t_6), (art_Port_97EF76) (&t_7));
  Type_assign(&_uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN, (&t_3), sizeof(struct uav_project_extern_SW_FlightPlanner_Impl_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_9);
  art_DispatchPropertyProtocol_Sporadic_apply(SF &t_9, Z_C(1));
  DeclNewart_Port_97EF76(t_10);
  art_Port_97EF76_apply(SF &t_10, Z_C(4), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_flight_plan"), art_PortMode_EventIn);
  DeclNewart_Port_CBF210(t_11);
  art_Port_CBF210_apply(SF &t_11, Z_C(5), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_tracking_id"), art_PortMode_EventIn);
  DeclNewart_Port_C0524D(t_12);
  art_Port_C0524D_apply(SF &t_12, Z_C(6), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_mission_rcv"), art_PortMode_EventOut);
  DeclNewart_Port_65F60A(t_13);
  art_Port_65F60A_apply(SF &t_13, Z_C(7), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_mission_window"), art_PortMode_EventOut);
  DeclNewuav_project_extern_SW_WaypointManager_Impl_Bridge(t_8);
  uav_project_extern_SW_WaypointManager_Impl_Bridge_apply(SF &t_8, Z_C(2), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM"), (art_DispatchPropertyProtocol) (&t_9), (art_Port_97EF76) (&t_10), (art_Port_CBF210) (&t_11), (art_Port_C0524D) (&t_12), (art_Port_65F60A) (&t_13));
  Type_assign(&_uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM, (&t_8), sizeof(struct uav_project_extern_SW_WaypointManager_Impl_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_15);
  art_DispatchPropertyProtocol_Sporadic_apply(SF &t_15, Z_C(1));
  DeclNewart_Port_65F60A(t_16);
  art_Port_65F60A_apply(SF &t_16, Z_C(8), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UART_mission_window"), art_PortMode_EventIn);
  DeclNewart_Port_CBF210(t_17);
  art_Port_CBF210_apply(SF &t_17, Z_C(9), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UART_tracking_id"), art_PortMode_EventOut);
  DeclNewuav_project_extern_SW_UARTDriver_Impl_Bridge(t_14);
  uav_project_extern_SW_UARTDriver_Impl_Bridge_apply(SF &t_14, Z_C(3), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UART"), (art_DispatchPropertyProtocol) (&t_15), (art_Port_65F60A) (&t_16), (art_Port_CBF210) (&t_17));
  Type_assign(&_uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART, (&t_14), sizeof(struct uav_project_extern_SW_UARTDriver_Impl_Bridge));
  STATIC_ASSERT(4 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  DeclNewMS_852149(t_19);
  t_19.size = (int8_t) 4;
  MS_852149_up(&t_19, 0, (art_Bridge) uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST));
  MS_852149_up(&t_19, 1, (art_Bridge) uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST));
  MS_852149_up(&t_19, 2, (art_Bridge) uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST));
  MS_852149_up(&t_19, 3, (art_Bridge) uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST));
  STATIC_ASSERT(5 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_20);
  t_20.size = (int8_t) 5;
  DeclNewart_Connection_210187(t_21);
  art_Connection_210187_apply(SF &t_21, (art_Port_311EA2) uav_project_extern_SW_RadioDriver_Impl_Bridge_recv_map_out_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST)), (art_Port_311EA2) uav_project_extern_SW_FlightPlanner_Impl_Bridge_recv_map_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  IS_08117A_up(&t_20, 0, (art_UConnection) (&t_21));
  DeclNewart_Connection_C6DC10(t_22);
  art_Connection_C6DC10_apply(SF &t_22, (art_Port_97EF76) uav_project_extern_SW_FlightPlanner_Impl_Bridge_flight_plan_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)), (art_Port_97EF76) uav_project_extern_SW_WaypointManager_Impl_Bridge_flight_plan_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  IS_08117A_up(&t_20, 1, (art_UConnection) (&t_22));
  DeclNewart_Connection_F3A765(t_23);
  art_Connection_F3A765_apply(SF &t_23, (art_Port_C0524D) uav_project_extern_SW_WaypointManager_Impl_Bridge_mission_rcv_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)), (art_Port_C0524D) uav_project_extern_SW_FlightPlanner_Impl_Bridge_mission_rcv_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  IS_08117A_up(&t_20, 2, (art_UConnection) (&t_23));
  DeclNewart_Connection_B6057D(t_24);
  art_Connection_B6057D_apply(SF &t_24, (art_Port_65F60A) uav_project_extern_SW_WaypointManager_Impl_Bridge_mission_window_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)), (art_Port_65F60A) uav_project_extern_SW_UARTDriver_Impl_Bridge_mission_window_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)));
  IS_08117A_up(&t_20, 3, (art_UConnection) (&t_24));
  DeclNewart_Connection_A6262C(t_25);
  art_Connection_A6262C_apply(SF &t_25, (art_Port_CBF210) uav_project_extern_SW_UARTDriver_Impl_Bridge_tracking_id_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)), (art_Port_CBF210) uav_project_extern_SW_WaypointManager_Impl_Bridge_tracking_id_(uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  IS_08117A_up(&t_20, 4, (art_UConnection) (&t_25));
  DeclNewart_ArchitectureDescription(t_18);
  art_ArchitectureDescription_apply(SF &t_18, (MS_852149) (&t_19), (IS_08117A) (&t_20));
  Type_assign(&_uav_project_extern_Arch_ad, (&t_18), sizeof(struct art_ArchitectureDescription));
}

uav_project_extern_SW_RadioDriver_Impl_Bridge uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(STACK_FRAME_ONLY) {
  uav_project_extern_Arch_init(CALLER_LAST);
  return (uav_project_extern_SW_RadioDriver_Impl_Bridge) &_uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO;
}

uav_project_extern_SW_FlightPlanner_Impl_Bridge uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(STACK_FRAME_ONLY) {
  uav_project_extern_Arch_init(CALLER_LAST);
  return (uav_project_extern_SW_FlightPlanner_Impl_Bridge) &_uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN;
}

uav_project_extern_SW_WaypointManager_Impl_Bridge uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(STACK_FRAME_ONLY) {
  uav_project_extern_Arch_init(CALLER_LAST);
  return (uav_project_extern_SW_WaypointManager_Impl_Bridge) &_uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM;
}

uav_project_extern_SW_UARTDriver_Impl_Bridge uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(STACK_FRAME_ONLY) {
  uav_project_extern_Arch_init(CALLER_LAST);
  return (uav_project_extern_SW_UARTDriver_Impl_Bridge) &_uav_project_extern_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART;
}

art_ArchitectureDescription uav_project_extern_Arch_ad(STACK_FRAME_ONLY) {
  uav_project_extern_Arch_init(CALLER_LAST);
  return (art_ArchitectureDescription) &_uav_project_extern_Arch_ad;
}