#include <all.h>

B hamr_Arch_initialized_ = F;

struct hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver;
struct hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation;
struct hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase;
struct hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS;
struct hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService;
struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate;
struct hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST;
struct hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req;
struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge _hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo;
struct art_ArchitectureDescription _hamr_Arch_ad;

void hamr_Arch_init(STACK_FRAME_ONLY) {
  if (hamr_Arch_initialized_) return;
  hamr_Arch_initialized_ = T;
  DeclNewStackFrame(caller, "Arch.scala", "hamr.Arch", "<init>", 0);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF_LAST);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF_LAST);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF_LAST);
  hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST);
  hamr_Arch_init_ad(SF_LAST);
}

hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver;
}

hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation;
}

hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase;
}

hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS;
}

hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService;
}

hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate;
}

hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST;
}

hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req;
}

hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge) &_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo;
}

art_ArchitectureDescription hamr_Arch_ad(STACK_FRAME_ONLY) {
  hamr_Arch_init(CALLER_LAST);
  return (art_ArchitectureDescription) &_hamr_Arch_ad;
}

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  {

    sfUpdateLoc(14);
    art_Port_45E54D recv_data;
    DeclNewart_Port_45E54D(t_0);
    art_Port_45E54D_apply(SF &t_0, Z_C(0), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_recv_data"), art_PortMode_Type_EventIn);
    recv_data = (art_Port_45E54D) (&t_0);

    sfUpdateLoc(15);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_1);
    art_Port_45E54D_apply(SF &t_1, Z_C(1), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_MissionCommand"), art_PortMode_Type_EventIn);
    MissionCommand = (art_Port_45E54D) (&t_1);

    sfUpdateLoc(16);
    art_Port_45E54D send_data;
    DeclNewart_Port_45E54D(t_2);
    art_Port_45E54D_apply(SF &t_2, Z_C(2), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_send_data"), art_PortMode_Type_EventOut);
    send_data = (art_Port_45E54D) (&t_2);

    sfUpdateLoc(17);
    art_Port_45E54D AirVehicleState_WPM;
    DeclNewart_Port_45E54D(t_3);
    art_Port_45E54D_apply(SF &t_3, Z_C(3), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_AirVehicleState_WPM"), art_PortMode_Type_EventOut);
    AirVehicleState_WPM = (art_Port_45E54D) (&t_3);

    sfUpdateLoc(18);
    art_Port_45E54D AirVehicleState_UXAS;
    DeclNewart_Port_45E54D(t_4);
    art_Port_45E54D_apply(SF &t_4, Z_C(4), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver_AirVehicleState_UXAS"), art_PortMode_Type_EventOut);
    AirVehicleState_UXAS = (art_Port_45E54D) (&t_4);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_6);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_6, Z_C(500));
    DeclNewNone_5C1355(t_7);
    None_5C1355_apply(SF &t_7);
    DeclNewhamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge(t_5);
    hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_apply(SF &t_5, Z_C(0), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver"), (art_DispatchPropertyProtocol) (&t_6), (Option_9AF35E) (&t_7), (art_Port_45E54D) recv_data, (art_Port_45E54D) MissionCommand, (art_Port_45E54D) send_data, (art_Port_45E54D) AirVehicleState_WPM, (art_Port_45E54D) AirVehicleState_UXAS);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver, (&t_5), sizeof(struct hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge));
  }
};

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(33);
  {

    sfUpdateLoc(34);
    art_Port_45E54D recv_data;
    DeclNewart_Port_45E54D(t_8);
    art_Port_45E54D_apply(SF &t_8, Z_C(5), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_recv_data"), art_PortMode_Type_EventIn);
    recv_data = (art_Port_45E54D) (&t_8);

    sfUpdateLoc(35);
    art_Port_45E54D send_data;
    DeclNewart_Port_45E54D(t_9);
    art_Port_45E54D_apply(SF &t_9, Z_C(6), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_send_data"), art_PortMode_Type_EventOut);
    send_data = (art_Port_45E54D) (&t_9);

    sfUpdateLoc(36);
    art_Port_45E54D trusted_ids;
    DeclNewart_Port_45E54D(t_10);
    art_Port_45E54D_apply(SF &t_10, Z_C(7), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_trusted_ids"), art_PortMode_Type_EventOut);
    trusted_ids = (art_Port_45E54D) (&t_10);

    sfUpdateLoc(37);
    art_Port_45E54D AutomationRequest;
    DeclNewart_Port_45E54D(t_11);
    art_Port_45E54D_apply(SF &t_11, Z_C(8), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_AutomationRequest"), art_PortMode_Type_EventOut);
    AutomationRequest = (art_Port_45E54D) (&t_11);

    sfUpdateLoc(38);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_12);
    art_Port_45E54D_apply(SF &t_12, Z_C(9), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_OperatingRegion"), art_PortMode_Type_EventOut);
    OperatingRegion = (art_Port_45E54D) (&t_12);

    sfUpdateLoc(39);
    art_Port_45E54D LineSearchTask;
    DeclNewart_Port_45E54D(t_13);
    art_Port_45E54D_apply(SF &t_13, Z_C(10), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_LineSearchTask"), art_PortMode_Type_EventOut);
    LineSearchTask = (art_Port_45E54D) (&t_13);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_15);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_15, Z_C(500));
    DeclNewNone_5C1355(t_16);
    None_5C1355_apply(SF &t_16);
    DeclNewhamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge(t_14);
    hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_apply(SF &t_14, Z_C(1), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation"), (art_DispatchPropertyProtocol) (&t_15), (Option_9AF35E) (&t_16), (art_Port_45E54D) recv_data, (art_Port_45E54D) send_data, (art_Port_45E54D) trusted_ids, (art_Port_45E54D) AutomationRequest, (art_Port_45E54D) OperatingRegion, (art_Port_45E54D) LineSearchTask);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation, (&t_14), sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge));
  }
};

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(55);
  {

    sfUpdateLoc(56);
    art_Port_45E54D keep_in_zones;
    DeclNewart_Port_45E54D(t_17);
    art_Port_45E54D_apply(SF &t_17, Z_C(11), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_keep_in_zones"), art_PortMode_Type_DataOut);
    keep_in_zones = (art_Port_45E54D) (&t_17);

    sfUpdateLoc(57);
    art_Port_45E54D keep_out_zones;
    DeclNewart_Port_45E54D(t_18);
    art_Port_45E54D_apply(SF &t_18, Z_C(12), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_keep_out_zones"), art_PortMode_Type_DataOut);
    keep_out_zones = (art_Port_45E54D) (&t_18);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_20);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_20, Z_C(500));
    DeclNewNone_5C1355(t_21);
    None_5C1355_apply(SF &t_21);
    DeclNewhamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge(t_19);
    hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_apply(SF &t_19, Z_C(2), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase"), (art_DispatchPropertyProtocol) (&t_20), (Option_9AF35E) (&t_21), (art_Port_45E54D) keep_in_zones, (art_Port_45E54D) keep_out_zones);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase, (&t_19), sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge));
  }
};

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(69);
  {

    sfUpdateLoc(70);
    art_Port_45E54D AutomationRequest;
    DeclNewart_Port_45E54D(t_22);
    art_Port_45E54D_apply(SF &t_22, Z_C(13), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationRequest"), art_PortMode_Type_EventIn);
    AutomationRequest = (art_Port_45E54D) (&t_22);

    sfUpdateLoc(71);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_23);
    art_Port_45E54D_apply(SF &t_23, Z_C(14), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AirVehicleState"), art_PortMode_Type_EventIn);
    AirVehicleState = (art_Port_45E54D) (&t_23);

    sfUpdateLoc(72);
    art_Port_45E54D OperatingRegion;
    DeclNewart_Port_45E54D(t_24);
    art_Port_45E54D_apply(SF &t_24, Z_C(15), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_OperatingRegion"), art_PortMode_Type_EventIn);
    OperatingRegion = (art_Port_45E54D) (&t_24);

    sfUpdateLoc(73);
    art_Port_45E54D LineSearchTask;
    DeclNewart_Port_45E54D(t_25);
    art_Port_45E54D_apply(SF &t_25, Z_C(16), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_LineSearchTask"), art_PortMode_Type_EventIn);
    LineSearchTask = (art_Port_45E54D) (&t_25);

    sfUpdateLoc(74);
    art_Port_45E54D AutomationResponse_MON_GEO;
    DeclNewart_Port_45E54D(t_26);
    art_Port_45E54D_apply(SF &t_26, Z_C(17), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationResponse_MON_GEO"), art_PortMode_Type_EventOut);
    AutomationResponse_MON_GEO = (art_Port_45E54D) (&t_26);

    sfUpdateLoc(75);
    art_Port_45E54D AutomationResponse_MON_REQ;
    DeclNewart_Port_45E54D(t_27);
    art_Port_45E54D_apply(SF &t_27, Z_C(18), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS_AutomationResponse_MON_REQ"), art_PortMode_Type_EventOut);
    AutomationResponse_MON_REQ = (art_Port_45E54D) (&t_27);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_29);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_29, Z_C(500));
    DeclNewNone_5C1355(t_30);
    None_5C1355_apply(SF &t_30);
    DeclNewhamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge(t_28);
    hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_apply(SF &t_28, Z_C(3), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS"), (art_DispatchPropertyProtocol) (&t_29), (Option_9AF35E) (&t_30), (art_Port_45E54D) AutomationRequest, (art_Port_45E54D) AirVehicleState, (art_Port_45E54D) OperatingRegion, (art_Port_45E54D) LineSearchTask, (art_Port_45E54D) AutomationResponse_MON_GEO, (art_Port_45E54D) AutomationResponse_MON_REQ);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS, (&t_28), sizeof(struct hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge));
  }
};

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(91);
  {

    sfUpdateLoc(92);
    art_Port_45E54D AutomationResponse;
    DeclNewart_Port_45E54D(t_31);
    art_Port_45E54D_apply(SF &t_31, Z_C(19), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_AutomationResponse"), art_PortMode_Type_EventIn);
    AutomationResponse = (art_Port_45E54D) (&t_31);

    sfUpdateLoc(93);
    art_Port_45E54D AirVehicleState;
    DeclNewart_Port_45E54D(t_32);
    art_Port_45E54D_apply(SF &t_32, Z_C(20), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_AirVehicleState"), art_PortMode_Type_EventIn);
    AirVehicleState = (art_Port_45E54D) (&t_32);

    sfUpdateLoc(94);
    art_Port_45E54D MissionCommand;
    DeclNewart_Port_45E54D(t_33);
    art_Port_45E54D_apply(SF &t_33, Z_C(21), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_MissionCommand"), art_PortMode_Type_EventOut);
    MissionCommand = (art_Port_45E54D) (&t_33);

    sfUpdateLoc(95);
    art_Port_9CBF18 ReturnHome;
    DeclNewart_Port_9CBF18(t_34);
    art_Port_9CBF18_apply(SF &t_34, Z_C(22), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService_ReturnHome"), art_PortMode_Type_EventIn);
    ReturnHome = (art_Port_9CBF18) (&t_34);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_36);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_36, Z_C(500));
    DeclNewNone_5C1355(t_37);
    None_5C1355_apply(SF &t_37);
    DeclNewhamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge(t_35);
    hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_apply(SF &t_35, Z_C(4), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService"), (art_DispatchPropertyProtocol) (&t_36), (Option_9AF35E) (&t_37), (art_Port_45E54D) AutomationResponse, (art_Port_45E54D) AirVehicleState, (art_Port_45E54D) MissionCommand, (art_Port_9CBF18) ReturnHome);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService, (&t_35), sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge));
  }
};

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(109);
  {

    sfUpdateLoc(110);
    art_Port_45E54D trusted_ids;
    DeclNewart_Port_45E54D(t_38);
    art_Port_45E54D_apply(SF &t_38, Z_C(23), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_trusted_ids"), art_PortMode_Type_EventIn);
    trusted_ids = (art_Port_45E54D) (&t_38);

    sfUpdateLoc(111);
    art_Port_45E54D AutomationRequest_in;
    DeclNewart_Port_45E54D(t_39);
    art_Port_45E54D_apply(SF &t_39, Z_C(24), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_in"), art_PortMode_Type_EventIn);
    AutomationRequest_in = (art_Port_45E54D) (&t_39);

    sfUpdateLoc(112);
    art_Port_45E54D AutomationRequest_out_UXAS;
    DeclNewart_Port_45E54D(t_40);
    art_Port_45E54D_apply(SF &t_40, Z_C(25), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_out_UXAS"), art_PortMode_Type_EventOut);
    AutomationRequest_out_UXAS = (art_Port_45E54D) (&t_40);

    sfUpdateLoc(113);
    art_Port_45E54D AutomationRequest_out_MON_REQ;
    DeclNewart_Port_45E54D(t_41);
    art_Port_45E54D_apply(SF &t_41, Z_C(26), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_AutomationRequest_out_MON_REQ"), art_PortMode_Type_EventOut);
    AutomationRequest_out_MON_REQ = (art_Port_45E54D) (&t_41);

    sfUpdateLoc(114);
    art_Port_45E54D OperatingRegion_in;
    DeclNewart_Port_45E54D(t_42);
    art_Port_45E54D_apply(SF &t_42, Z_C(27), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_OperatingRegion_in"), art_PortMode_Type_EventIn);
    OperatingRegion_in = (art_Port_45E54D) (&t_42);

    sfUpdateLoc(115);
    art_Port_45E54D OperatingRegion_out;
    DeclNewart_Port_45E54D(t_43);
    art_Port_45E54D_apply(SF &t_43, Z_C(28), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_OperatingRegion_out"), art_PortMode_Type_EventOut);
    OperatingRegion_out = (art_Port_45E54D) (&t_43);

    sfUpdateLoc(116);
    art_Port_45E54D LineSearchTask_in;
    DeclNewart_Port_45E54D(t_44);
    art_Port_45E54D_apply(SF &t_44, Z_C(29), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_LineSearchTask_in"), art_PortMode_Type_EventIn);
    LineSearchTask_in = (art_Port_45E54D) (&t_44);

    sfUpdateLoc(117);
    art_Port_45E54D LineSearchTask_out;
    DeclNewart_Port_45E54D(t_45);
    art_Port_45E54D_apply(SF &t_45, Z_C(30), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_LineSearchTask_out"), art_PortMode_Type_EventOut);
    LineSearchTask_out = (art_Port_45E54D) (&t_45);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_47);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_47, Z_C(500));
    DeclNewNone_5C1355(t_48);
    None_5C1355_apply(SF &t_48);
    DeclNewhamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge(t_46);
    hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_apply(SF &t_46, Z_C(5), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate"), (art_DispatchPropertyProtocol) (&t_47), (Option_9AF35E) (&t_48), (art_Port_45E54D) trusted_ids, (art_Port_45E54D) AutomationRequest_in, (art_Port_45E54D) AutomationRequest_out_UXAS, (art_Port_45E54D) AutomationRequest_out_MON_REQ, (art_Port_45E54D) OperatingRegion_in, (art_Port_45E54D) OperatingRegion_out, (art_Port_45E54D) LineSearchTask_in, (art_Port_45E54D) LineSearchTask_out);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate, (&t_46), sizeof(struct hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge));
  }
};

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(135);
  {

    sfUpdateLoc(136);
    art_Port_45E54D filter_in;
    DeclNewart_Port_45E54D(t_49);
    art_Port_45E54D_apply(SF &t_49, Z_C(31), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_filter_in"), art_PortMode_Type_EventIn);
    filter_in = (art_Port_45E54D) (&t_49);

    sfUpdateLoc(137);
    art_Port_45E54D filter_out;
    DeclNewart_Port_45E54D(t_50);
    art_Port_45E54D_apply(SF &t_50, Z_C(32), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_filter_out"), art_PortMode_Type_EventOut);
    filter_out = (art_Port_45E54D) (&t_50);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_52);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_52, Z_C(500));
    DeclNewNone_5C1355(t_53);
    None_5C1355_apply(SF &t_53);
    DeclNewhamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge(t_51);
    hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_apply(SF &t_51, Z_C(6), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST"), (art_DispatchPropertyProtocol) (&t_52), (Option_9AF35E) (&t_53), (art_Port_45E54D) filter_in, (art_Port_45E54D) filter_out);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST, (&t_51), sizeof(struct hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge));
  }
};

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(149);
  {

    sfUpdateLoc(150);
    art_Port_45E54D observed;
    DeclNewart_Port_45E54D(t_54);
    art_Port_45E54D_apply(SF &t_54, Z_C(33), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_observed"), art_PortMode_Type_EventIn);
    observed = (art_Port_45E54D) (&t_54);

    sfUpdateLoc(151);
    art_Port_45E54D reference_1;
    DeclNewart_Port_45E54D(t_55);
    art_Port_45E54D_apply(SF &t_55, Z_C(34), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_reference_1"), art_PortMode_Type_EventIn);
    reference_1 = (art_Port_45E54D) (&t_55);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_57);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_57, Z_C(500));
    DeclNewNone_5C1355(t_58);
    None_5C1355_apply(SF &t_58);
    DeclNewhamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge(t_56);
    hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_apply(SF &t_56, Z_C(7), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req"), (art_DispatchPropertyProtocol) (&t_57), (Option_9AF35E) (&t_58), (art_Port_45E54D) observed, (art_Port_45E54D) reference_1);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req, (&t_56), sizeof(struct hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge));
  }
};

void hamr_Arch_init_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(163);
  {

    sfUpdateLoc(164);
    art_Port_45E54D keep_in_zones;
    DeclNewart_Port_45E54D(t_59);
    art_Port_45E54D_apply(SF &t_59, Z_C(35), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_keep_in_zones"), art_PortMode_Type_DataIn);
    keep_in_zones = (art_Port_45E54D) (&t_59);

    sfUpdateLoc(165);
    art_Port_45E54D keep_out_zones;
    DeclNewart_Port_45E54D(t_60);
    art_Port_45E54D_apply(SF &t_60, Z_C(36), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_keep_out_zones"), art_PortMode_Type_DataIn);
    keep_out_zones = (art_Port_45E54D) (&t_60);

    sfUpdateLoc(166);
    art_Port_45E54D observed;
    DeclNewart_Port_45E54D(t_61);
    art_Port_45E54D_apply(SF &t_61, Z_C(37), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_observed"), art_PortMode_Type_EventIn);
    observed = (art_Port_45E54D) (&t_61);

    sfUpdateLoc(167);
    art_Port_45E54D output;
    DeclNewart_Port_45E54D(t_62);
    art_Port_45E54D_apply(SF &t_62, Z_C(38), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_output"), art_PortMode_Type_EventOut);
    output = (art_Port_45E54D) (&t_62);

    sfUpdateLoc(168);
    art_Port_9CBF18 alert;
    DeclNewart_Port_9CBF18(t_63);
    art_Port_9CBF18_apply(SF &t_63, Z_C(39), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_alert"), art_PortMode_Type_EventOut);
    alert = (art_Port_9CBF18) (&t_63);
    DeclNewart_DispatchPropertyProtocol_Periodic(t_65);
    art_DispatchPropertyProtocol_Periodic_apply(SF &t_65, Z_C(500));
    DeclNewNone_5C1355(t_66);
    None_5C1355_apply(SF &t_66);
    DeclNewhamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge(t_64);
    hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_apply(SF &t_64, Z_C(8), (String) string("UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo"), (art_DispatchPropertyProtocol) (&t_65), (Option_9AF35E) (&t_66), (art_Port_45E54D) keep_in_zones, (art_Port_45E54D) keep_out_zones, (art_Port_45E54D) observed, (art_Port_45E54D) output, (art_Port_9CBF18) alert);
    Type_assign(&_hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo, (&t_64), sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge));
  }
};

void hamr_Arch_init_ad(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(184);
  {
    STATIC_ASSERT(9 <= MaxIS_7E8796, "Insufficient maximum for IS[Z, art.Bridge] elements.");
    DeclNewIS_7E8796(t_68);
    t_68.size = (int8_t) 9;
    IS_7E8796_up(&t_68, 0, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST));
    IS_7E8796_up(&t_68, 1, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST));
    IS_7E8796_up(&t_68, 2, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF_LAST));
    IS_7E8796_up(&t_68, 3, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST));
    IS_7E8796_up(&t_68, 4, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST));
    IS_7E8796_up(&t_68, 5, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST));
    IS_7E8796_up(&t_68, 6, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF_LAST));
    IS_7E8796_up(&t_68, 7, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF_LAST));
    IS_7E8796_up(&t_68, 8, (art_Bridge) hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST));
    STATIC_ASSERT(18 <= MaxIS_08117A, "Insufficient maximum for IS[Z, art.UConnection] elements.");
    DeclNewIS_08117A(t_69);
    t_69.size = (int8_t) 18;
    DeclNewart_Connection(t_70);
    art_Connection_apply(SF &t_70, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_WPM_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_AirVehicleState_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_69, 0, (art_UConnection) (&t_70));
    DeclNewart_Connection(t_71);
    art_Connection_apply(SF &t_71, (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_AirVehicleState_UXAS_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AirVehicleState_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_69, 1, (art_UConnection) (&t_71));
    DeclNewart_Connection(t_72);
    art_Connection_apply(SF &t_72, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_trusted_ids_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_trusted_ids_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_69, 2, (art_UConnection) (&t_72));
    DeclNewart_Connection(t_73);
    art_Connection_apply(SF &t_73, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_AutomationRequest_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_in_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_69, 3, (art_UConnection) (&t_73));
    DeclNewart_Connection(t_74);
    art_Connection_apply(SF &t_74, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_OperatingRegion_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_in_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_69, 4, (art_UConnection) (&t_74));
    DeclNewart_Connection(t_75);
    art_Connection_apply(SF &t_75, (art_UPort) hamr_SW_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_Bridge_LineSearchTask_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_RADIO_RadioDriver_Attestation(SF_LAST)), (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_in_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)));
    IS_08117A_up(&t_69, 5, (art_UConnection) (&t_75));
    DeclNewart_Connection(t_76);
    art_Connection_apply(SF &t_76, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_keep_in_zones_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_keep_in_zones_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_69, 6, (art_UConnection) (&t_76));
    DeclNewart_Connection(t_77);
    art_Connection_apply(SF &t_77, (art_UPort) hamr_SW_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_Bridge_keep_out_zones_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FlyZones_FlyZonesDatabase(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_keep_out_zones_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_69, 7, (art_UConnection) (&t_77));
    DeclNewart_Connection(t_78);
    art_Connection_apply(SF &t_78, (art_UPort) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AutomationResponse_MON_GEO_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_observed_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)));
    IS_08117A_up(&t_69, 8, (art_UConnection) (&t_78));
    DeclNewart_Connection(t_79);
    art_Connection_apply(SF &t_79, (art_UPort) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AutomationResponse_MON_REQ_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_observed_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF_LAST)));
    IS_08117A_up(&t_69, 9, (art_UConnection) (&t_79));
    DeclNewart_Connection(t_80);
    art_Connection_apply(SF &t_80, (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_MissionCommand_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST)), (art_UPort) hamr_Drivers_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_Bridge_MissionCommand_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FC_UART_UARTDriver(SF_LAST)));
    IS_08117A_up(&t_69, 10, (art_UConnection) (&t_80));
    DeclNewart_Connection(t_81);
    art_Connection_apply(SF &t_81, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_UXAS_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_AutomationRequest_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_69, 11, (art_UConnection) (&t_81));
    DeclNewart_Connection(t_82);
    art_Connection_apply(SF &t_82, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_AutomationRequest_out_MON_REQ_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_Bridge_reference_1_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req(SF_LAST)));
    IS_08117A_up(&t_69, 12, (art_UConnection) (&t_82));
    DeclNewart_Connection(t_83);
    art_Connection_apply(SF &t_83, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_OperatingRegion_out_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_OperatingRegion_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_69, 13, (art_UConnection) (&t_83));
    DeclNewart_Connection(t_84);
    art_Connection_apply(SF &t_84, (art_UPort) hamr_SW_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_Bridge_LineSearchTask_out_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate(SF_LAST)), (art_UPort) hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_filter_in_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF_LAST)));
    IS_08117A_up(&t_69, 14, (art_UConnection) (&t_84));
    DeclNewart_Connection(t_85);
    art_Connection_apply(SF &t_85, (art_UPort) hamr_SW_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_Bridge_filter_out_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST(SF_LAST)), (art_UPort) hamr_SW_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_Bridge_LineSearchTask_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_UXAS_UxAS(SF_LAST)));
    IS_08117A_up(&t_69, 15, (art_UConnection) (&t_85));
    DeclNewart_Connection(t_86);
    art_Connection_apply(SF &t_86, (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_output_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_AutomationResponse_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_69, 16, (art_UConnection) (&t_86));
    DeclNewart_Connection(t_87);
    art_Connection_apply(SF &t_87, (art_UPort) hamr_SW_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_Bridge_alert_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo(SF_LAST)), (art_UPort) hamr_SW_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_Bridge_ReturnHome_(hamr_Arch_UAV_Impl_Instance_MCMP_PROC_SW_WPM_WaypointPlanManagerService(SF_LAST)));
    IS_08117A_up(&t_69, 17, (art_UConnection) (&t_87));
    DeclNewart_ArchitectureDescription(t_67);
    art_ArchitectureDescription_apply(SF &t_67, (IS_7E8796) (&t_68), (IS_08117A) (&t_69));
    Type_assign(&_hamr_Arch_ad, (&t_67), sizeof(struct art_ArchitectureDescription));
  }
};