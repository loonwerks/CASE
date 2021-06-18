#include <all.h>

B hamr_IPCPorts_initialized_ = F;

Z _hamr_IPCPorts_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App;
Z _hamr_IPCPorts_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App;
Z _hamr_IPCPorts_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App;
Z _hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App;
Z _hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App;
Z _hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App;
Z _hamr_IPCPorts_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App;
Z _hamr_IPCPorts_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App;
Z _hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App;
Z _hamr_IPCPorts_Main;

void hamr_IPCPorts_init(STACK_FRAME_ONLY) {
  if (hamr_IPCPorts_initialized_) return;
  hamr_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "hamr.IPCPorts", "<init>", 0);
  hamr_IPCPorts_init_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App(SF_LAST);
  hamr_IPCPorts_init_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App(SF_LAST);
  hamr_IPCPorts_init_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App(SF_LAST);
  hamr_IPCPorts_init_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(SF_LAST);
  hamr_IPCPorts_init_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App(SF_LAST);
  hamr_IPCPorts_init_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(SF_LAST);
  hamr_IPCPorts_init_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App(SF_LAST);
  hamr_IPCPorts_init_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App(SF_LAST);
  hamr_IPCPorts_init_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(SF_LAST);
  hamr_IPCPorts_init_Main(SF_LAST);
}

Z hamr_IPCPorts_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App;
}

Z hamr_IPCPorts_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App;
}

Z hamr_IPCPorts_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App;
}

Z hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App;
}

Z hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App;
}

Z hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App;
}

Z hamr_IPCPorts_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App;
}

Z hamr_IPCPorts_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App;
}

Z hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App;
}

Z hamr_IPCPorts_Main(STACK_FRAME_ONLY) {
  hamr_IPCPorts_init(CALLER_LAST);
  return _hamr_IPCPorts_Main;
}

void hamr_IPCPorts_emptyReceiveOut(STACK_FRAME MBox2_1CBFC4 result) {
  DeclNewStackFrame(caller, "IPC.scala", "hamr.IPCPorts", "emptyReceiveOut", 0);
  DeclNewart_Empty(t_1);
  art_Empty_apply(SF &t_1);
  DeclNewMBox2_1CBFC4(t_0);
  MBox2_1CBFC4_apply(SF &t_0, Z_C(-1), (art_DataContent) (&t_1));
  Type_assign(result, (&t_0), sizeof(struct MBox2_1CBFC4));
  return;
}

void hamr_IPCPorts_emptyReceiveAsyncOut(STACK_FRAME MBox2_1029D1 result) {
  DeclNewStackFrame(caller, "IPC.scala", "hamr.IPCPorts", "emptyReceiveAsyncOut", 0);
  DeclNewNone_964667(t_1);
  None_964667_apply(SF &t_1);
  DeclNewMBox2_1029D1(t_0);
  MBox2_1029D1_apply(SF &t_0, Z_C(-1), (Option_8E9F45) (&t_1));
  Type_assign(result, (&t_0), sizeof(struct MBox2_1029D1));
  return;
}

void hamr_IPCPorts_init_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(11);
  _hamr_IPCPorts_UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver_App = Z_C(40);
};

void hamr_IPCPorts_init_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  _hamr_IPCPorts_RadioDriver_Attestation_thr_Impl_MCMP_PROC_SW_RADIO_RadioDriver_Attestation_App = Z_C(41);
};

void hamr_IPCPorts_init_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _hamr_IPCPorts_FlyZonesDatabase_thr_Impl_MCMP_PROC_SW_FlyZones_FlyZonesDatabase_App = Z_C(42);
};

void hamr_IPCPorts_init_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  _hamr_IPCPorts_UxAS_thr_Impl_MCMP_PROC_SW_UXAS_UxAS_App = Z_C(43);
};

void hamr_IPCPorts_init_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(15);
  _hamr_IPCPorts_WaypointPlanManagerService_thr_Impl_MCMP_PROC_SW_WPM_WaypointPlanManagerService_App = Z_C(44);
};

void hamr_IPCPorts_init_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(16);
  _hamr_IPCPorts_CASE_AttestationGate_thr_Impl_MCMP_PROC_SW_AM_Gate_CASE_AttestationGate_App = Z_C(45);
};

void hamr_IPCPorts_init_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(17);
  _hamr_IPCPorts_CASE_Filter_LST_thr_Impl_MCMP_PROC_SW_FLT_LST_CASE_Filter_LST_App = Z_C(46);
};

void hamr_IPCPorts_init_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(18);
  _hamr_IPCPorts_CASE_Monitor_Req_thr_Impl_MCMP_PROC_SW_MON_REQ_CASE_Monitor_Req_App = Z_C(47);
};

void hamr_IPCPorts_init_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(19);
  _hamr_IPCPorts_CASE_Monitor_Geo_thr_Impl_MCMP_PROC_SW_MON_GEO_CASE_Monitor_Geo_App = Z_C(48);
};

void hamr_IPCPorts_init_Main(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(20);
  _hamr_IPCPorts_Main = Z_C(49);
};