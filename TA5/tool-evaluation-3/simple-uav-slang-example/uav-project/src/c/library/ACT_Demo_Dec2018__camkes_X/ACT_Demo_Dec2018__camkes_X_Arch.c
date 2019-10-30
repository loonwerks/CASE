#include <all.h>

B ACT_Demo_Dec2018__camkes_X_Arch_initialized_ = F;

struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge _ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW;
struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge _ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW;
struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge _ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO;
struct ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge _ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN;
struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge _ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM;
struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge _ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART;
struct art_ArchitectureDescription _ACT_Demo_Dec2018__camkes_X_Arch_ad;

void ACT_Demo_Dec2018__camkes_X_Arch_init(STACK_FRAME_LAST) {
  if (ACT_Demo_Dec2018__camkes_X_Arch_initialized_) return;
  ACT_Demo_Dec2018__camkes_X_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "ACT_Demo_Dec2018__camkes_X.Arch", "<init>", 0);
  DeclNewart_DispatchPropertyProtocol_Periodic(t_1);
  art_DispatchPropertyProtocol_Periodic_apply(SF &t_1, Z_C(1));
  DeclNewart_Port_2C63FD(t_2);
  art_Port_2C63FD_apply(SF &t_2, Z_C(0), (String) string("UAV_Impl_Instance_MCMP_RADIO_HW_recv_map_inn"), art_PortMode_EventIn);
  DeclNewart_Port_695448(t_3);
  art_Port_695448_apply(SF &t_3, Z_C(1), (String) string("UAV_Impl_Instance_MCMP_RADIO_HW_recv_map_out"), art_PortMode_EventOut);
  DeclNewart_Port_FD6239(t_4);
  art_Port_FD6239_apply(SF &t_4, Z_C(2), (String) string("UAV_Impl_Instance_MCMP_RADIO_HW_send_status_inn"), art_PortMode_EventIn);
  DeclNewart_Port_2C63FD(t_5);
  art_Port_2C63FD_apply(SF &t_5, Z_C(3), (String) string("UAV_Impl_Instance_MCMP_RADIO_HW_send_status_out"), art_PortMode_EventOut);
  DeclNewACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge(t_0);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_apply(SF &t_0, Z_C(0), (String) string("UAV_Impl_Instance_MCMP_RADIO_HW"), (art_DispatchPropertyProtocol) (&t_1), (art_Port_2C63FD) (&t_2), (art_Port_695448) (&t_3), (art_Port_FD6239) (&t_4), (art_Port_2C63FD) (&t_5));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW, (&t_0), sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge));
  DeclNewart_DispatchPropertyProtocol_Periodic(t_7);
  art_DispatchPropertyProtocol_Periodic_apply(SF &t_7, Z_C(1));
  DeclNewart_Port_2C63FD(t_8);
  art_Port_2C63FD_apply(SF &t_8, Z_C(4), (String) string("UAV_Impl_Instance_MCMP_UART_HW_waypoint_out"), art_PortMode_EventOut);
  DeclNewart_Port_2C63FD(t_9);
  art_Port_2C63FD_apply(SF &t_9, Z_C(5), (String) string("UAV_Impl_Instance_MCMP_UART_HW_position_status_inn"), art_PortMode_EventIn);
  DeclNewart_Port_FD6239(t_10);
  art_Port_FD6239_apply(SF &t_10, Z_C(6), (String) string("UAV_Impl_Instance_MCMP_UART_HW_position_status_out"), art_PortMode_EventOut);
  DeclNewACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge(t_6);
  ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge_apply(SF &t_6, Z_C(1), (String) string("UAV_Impl_Instance_MCMP_UART_HW"), (art_DispatchPropertyProtocol) (&t_7), (art_Port_2C63FD) (&t_8), (art_Port_2C63FD) (&t_9), (art_Port_FD6239) (&t_10));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW, (&t_6), sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_12);
  art_DispatchPropertyProtocol_Sporadic_apply(SF &t_12, Z_C(1));
  DeclNewart_Port_695448(t_13);
  art_Port_695448_apply(SF &t_13, Z_C(7), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_recv_map_out"), art_PortMode_EventOut);
  DeclNewACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge(t_11);
  ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_apply(SF &t_11, Z_C(2), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO"), (art_DispatchPropertyProtocol) (&t_12), (art_Port_695448) (&t_13));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO, (&t_11), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_15);
  art_DispatchPropertyProtocol_Sporadic_apply(SF &t_15, Z_C(1));
  DeclNewart_Port_D7D05E(t_16);
  art_Port_D7D05E_apply(SF &t_16, Z_C(8), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FPLN_flight_plan"), art_PortMode_EventOut);
  DeclNewart_Port_9D6F5D(t_17);
  art_Port_9D6F5D_apply(SF &t_17, Z_C(9), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FPLN_mission_rcv"), art_PortMode_EventIn);
  DeclNewart_Port_695448(t_18);
  art_Port_695448_apply(SF &t_18, Z_C(10), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FPLN_recv_map"), art_PortMode_EventIn);
  DeclNewACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge(t_14);
  ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_apply(SF &t_14, Z_C(3), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FPLN"), (art_DispatchPropertyProtocol) (&t_15), (art_Port_D7D05E) (&t_16), (art_Port_9D6F5D) (&t_17), (art_Port_695448) (&t_18));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN, (&t_14), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_20);
  art_DispatchPropertyProtocol_Sporadic_apply(SF &t_20, Z_C(1));
  DeclNewart_Port_D7D05E(t_21);
  art_Port_D7D05E_apply(SF &t_21, Z_C(11), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_flight_plan"), art_PortMode_EventIn);
  DeclNewart_Port_9D6F5D(t_22);
  art_Port_9D6F5D_apply(SF &t_22, Z_C(12), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_mission_rcv"), art_PortMode_EventOut);
  DeclNewart_Port_2D3735(t_23);
  art_Port_2D3735_apply(SF &t_23, Z_C(13), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_mission_window"), art_PortMode_EventOut);
  DeclNewart_Port_446859(t_24);
  art_Port_446859_apply(SF &t_24, Z_C(14), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_tracking_id"), art_PortMode_EventIn);
  DeclNewACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge(t_19);
  ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_apply(SF &t_19, Z_C(4), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM"), (art_DispatchPropertyProtocol) (&t_20), (art_Port_D7D05E) (&t_21), (art_Port_9D6F5D) (&t_22), (art_Port_2D3735) (&t_23), (art_Port_446859) (&t_24));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM, (&t_19), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge));
  DeclNewart_DispatchPropertyProtocol_Sporadic(t_26);
  art_DispatchPropertyProtocol_Sporadic_apply(SF &t_26, Z_C(1));
  DeclNewart_Port_2D3735(t_27);
  art_Port_2D3735_apply(SF &t_27, Z_C(15), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UART_mission_window"), art_PortMode_EventIn);
  DeclNewart_Port_446859(t_28);
  art_Port_446859_apply(SF &t_28, Z_C(16), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UART_tracking_id"), art_PortMode_EventOut);
  DeclNewACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge(t_25);
  ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_apply(SF &t_25, Z_C(5), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UART"), (art_DispatchPropertyProtocol) (&t_26), (art_Port_2D3735) (&t_27), (art_Port_446859) (&t_28));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART, (&t_25), sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge));
  STATIC_ASSERT(6 <= MaxMS_852149, "Insufficient maximum for MS[Z, art.Bridge] elements.");
  DeclNewMS_852149(t_30);
  t_30.size = (int8_t) 6;
  Type_assign(&t_30.value[0], ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW(SF_LAST), sizeof(union art_Bridge));
  Type_assign(&t_30.value[1], ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW(SF_LAST), sizeof(union art_Bridge));
  Type_assign(&t_30.value[2], ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST), sizeof(union art_Bridge));
  Type_assign(&t_30.value[3], ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST), sizeof(union art_Bridge));
  Type_assign(&t_30.value[4], ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST), sizeof(union art_Bridge));
  Type_assign(&t_30.value[5], ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST), sizeof(union art_Bridge));
  STATIC_ASSERT(5 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
  DeclNewIS_08117A(t_31);
  t_31.size = (int8_t) 5;
  DeclNewart_Connection_2D82C4(t_32);
  art_Connection_2D82C4_apply(SF &t_32, (art_Port_695448) ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_recv_map_out_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(SF_LAST)), (art_Port_695448) ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_recv_map_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  Type_assign(&t_31.value[0], (&t_32), sizeof(union art_UConnection));
  DeclNewart_Connection_E82682(t_33);
  art_Connection_E82682_apply(SF &t_33, (art_Port_D7D05E) ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_flight_plan_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)), (art_Port_D7D05E) ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_flight_plan_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  Type_assign(&t_31.value[1], (&t_33), sizeof(union art_UConnection));
  DeclNewart_Connection_A24F1E(t_34);
  art_Connection_A24F1E_apply(SF &t_34, (art_Port_9D6F5D) ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_rcv_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)), (art_Port_9D6F5D) ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_mission_rcv_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(SF_LAST)));
  Type_assign(&t_31.value[2], (&t_34), sizeof(union art_UConnection));
  DeclNewart_Connection_112F4D(t_35);
  art_Connection_112F4D_apply(SF &t_35, (art_Port_2D3735) ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_mission_window_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)), (art_Port_2D3735) ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_mission_window_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)));
  Type_assign(&t_31.value[3], (&t_35), sizeof(union art_UConnection));
  DeclNewart_Connection_CAF041(t_36);
  art_Connection_CAF041_apply(SF &t_36, (art_Port_446859) ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_tracking_id_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(SF_LAST)), (art_Port_446859) ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_tracking_id_(ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(SF_LAST)));
  Type_assign(&t_31.value[4], (&t_36), sizeof(union art_UConnection));
  DeclNewart_ArchitectureDescription(t_29);
  art_ArchitectureDescription_apply(SF &t_29, (MS_852149) (&t_30), (IS_08117A) (&t_31));
  Type_assign(&_ACT_Demo_Dec2018__camkes_X_Arch_ad, (&t_29), sizeof(struct art_ArchitectureDescription));
}

ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_Arch_init(CALLER_LAST);
  return (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge) &_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_RADIO_HW;
}

ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_Arch_init(CALLER_LAST);
  return (ACT_Demo_Dec2018__camkes_X_MC_UART_Impl_Bridge) &_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_UART_HW;
}

ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_Arch_init(CALLER_LAST);
  return (ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge) &_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO;
}

ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_Arch_init(CALLER_LAST);
  return (ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge) &_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FPLN;
}

ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_Arch_init(CALLER_LAST);
  return (ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge) &_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM;
}

ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_Arch_init(CALLER_LAST);
  return (ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge) &_ACT_Demo_Dec2018__camkes_X_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UART;
}

art_ArchitectureDescription ACT_Demo_Dec2018__camkes_X_Arch_ad(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_Arch_init(CALLER_LAST);
  return (art_ArchitectureDescription) &_ACT_Demo_Dec2018__camkes_X_Arch_ad;
}