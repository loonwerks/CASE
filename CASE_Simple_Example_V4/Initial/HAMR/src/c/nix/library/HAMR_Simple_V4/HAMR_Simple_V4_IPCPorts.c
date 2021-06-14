#include <all.h>

B HAMR_Simple_V4_IPCPorts_initialized_ = F;

Z _HAMR_Simple_V4_IPCPorts_RadioDriver_Impl_SW_Radio_App;
Z _HAMR_Simple_V4_IPCPorts_FlightPlanner_Impl_SW_FlightPlanner_App;
Z _HAMR_Simple_V4_IPCPorts_FlightController_Impl_SW_FlightController_App;
Z _HAMR_Simple_V4_IPCPorts_Main;

void HAMR_Simple_V4_IPCPorts_init(STACK_FRAME_ONLY) {
  if (HAMR_Simple_V4_IPCPorts_initialized_) return;
  HAMR_Simple_V4_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "HAMR_Simple_V4.IPCPorts", "<init>", 0);
  HAMR_Simple_V4_IPCPorts_init_RadioDriver_Impl_SW_Radio_App(SF_LAST);
  HAMR_Simple_V4_IPCPorts_init_FlightPlanner_Impl_SW_FlightPlanner_App(SF_LAST);
  HAMR_Simple_V4_IPCPorts_init_FlightController_Impl_SW_FlightController_App(SF_LAST);
  HAMR_Simple_V4_IPCPorts_init_Main(SF_LAST);
}

Z HAMR_Simple_V4_IPCPorts_RadioDriver_Impl_SW_Radio_App(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_IPCPorts_init(CALLER_LAST);
  return _HAMR_Simple_V4_IPCPorts_RadioDriver_Impl_SW_Radio_App;
}

Z HAMR_Simple_V4_IPCPorts_FlightPlanner_Impl_SW_FlightPlanner_App(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_IPCPorts_init(CALLER_LAST);
  return _HAMR_Simple_V4_IPCPorts_FlightPlanner_Impl_SW_FlightPlanner_App;
}

Z HAMR_Simple_V4_IPCPorts_FlightController_Impl_SW_FlightController_App(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_IPCPorts_init(CALLER_LAST);
  return _HAMR_Simple_V4_IPCPorts_FlightController_Impl_SW_FlightController_App;
}

Z HAMR_Simple_V4_IPCPorts_Main(STACK_FRAME_ONLY) {
  HAMR_Simple_V4_IPCPorts_init(CALLER_LAST);
  return _HAMR_Simple_V4_IPCPorts_Main;
}

void HAMR_Simple_V4_IPCPorts_emptyReceiveOut(STACK_FRAME MBox2_1CBFC4 result) {
  DeclNewStackFrame(caller, "IPC.scala", "HAMR_Simple_V4.IPCPorts", "emptyReceiveOut", 0);
  DeclNewart_Empty(t_1);
  art_Empty_apply(SF &t_1);
  DeclNewMBox2_1CBFC4(t_0);
  MBox2_1CBFC4_apply(SF &t_0, Z_C(-1), (art_DataContent) (&t_1));
  Type_assign(result, (&t_0), sizeof(struct MBox2_1CBFC4));
  return;
}

void HAMR_Simple_V4_IPCPorts_emptyReceiveAsyncOut(STACK_FRAME MBox2_1029D1 result) {
  DeclNewStackFrame(caller, "IPC.scala", "HAMR_Simple_V4.IPCPorts", "emptyReceiveAsyncOut", 0);
  DeclNewNone_964667(t_1);
  None_964667_apply(SF &t_1);
  DeclNewMBox2_1029D1(t_0);
  MBox2_1029D1_apply(SF &t_0, Z_C(-1), (Option_8E9F45) (&t_1));
  Type_assign(result, (&t_0), sizeof(struct MBox2_1029D1));
  return;
}

void HAMR_Simple_V4_IPCPorts_init_RadioDriver_Impl_SW_Radio_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(11);
  _HAMR_Simple_V4_IPCPorts_RadioDriver_Impl_SW_Radio_App = Z_C(4);
};

void HAMR_Simple_V4_IPCPorts_init_FlightPlanner_Impl_SW_FlightPlanner_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(12);
  _HAMR_Simple_V4_IPCPorts_FlightPlanner_Impl_SW_FlightPlanner_App = Z_C(5);
};

void HAMR_Simple_V4_IPCPorts_init_FlightController_Impl_SW_FlightController_App(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(13);
  _HAMR_Simple_V4_IPCPorts_FlightController_Impl_SW_FlightController_App = Z_C(6);
};

void HAMR_Simple_V4_IPCPorts_init_Main(STACK_FRAME_ONLY) {
  #ifdef SIREUM_LOC
  StackFrame sf = caller;
  #endif
  sfUpdateLoc(14);
  _HAMR_Simple_V4_IPCPorts_Main = Z_C(7);
};