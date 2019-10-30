#include <all.h>

B uav_project_extern_IPCPorts_initialized_ = F;

Z _uav_project_extern_IPCPorts_WaypointManager_Impl_App;
Z _uav_project_extern_IPCPorts_FlightPlanner_Impl_App;
Z _uav_project_extern_IPCPorts_UARTDriver_Impl_App;
Z _uav_project_extern_IPCPorts_RadioDriver_Impl_App;
Z _uav_project_extern_IPCPorts_Main;

void uav_project_extern_IPCPorts_init(STACK_FRAME_ONLY) {
  if (uav_project_extern_IPCPorts_initialized_) return;
  uav_project_extern_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "uav_project_extern.IPCPorts", "<init>", 0);
  _uav_project_extern_IPCPorts_WaypointManager_Impl_App = Z_C(10);
  _uav_project_extern_IPCPorts_FlightPlanner_Impl_App = Z_C(11);
  _uav_project_extern_IPCPorts_UARTDriver_Impl_App = Z_C(12);
  _uav_project_extern_IPCPorts_RadioDriver_Impl_App = Z_C(13);
  _uav_project_extern_IPCPorts_Main = Z_C(14);
}

Z uav_project_extern_IPCPorts_WaypointManager_Impl_App(STACK_FRAME_ONLY) {
  uav_project_extern_IPCPorts_init(CALLER_LAST);
  return _uav_project_extern_IPCPorts_WaypointManager_Impl_App;
}

Z uav_project_extern_IPCPorts_FlightPlanner_Impl_App(STACK_FRAME_ONLY) {
  uav_project_extern_IPCPorts_init(CALLER_LAST);
  return _uav_project_extern_IPCPorts_FlightPlanner_Impl_App;
}

Z uav_project_extern_IPCPorts_UARTDriver_Impl_App(STACK_FRAME_ONLY) {
  uav_project_extern_IPCPorts_init(CALLER_LAST);
  return _uav_project_extern_IPCPorts_UARTDriver_Impl_App;
}

Z uav_project_extern_IPCPorts_RadioDriver_Impl_App(STACK_FRAME_ONLY) {
  uav_project_extern_IPCPorts_init(CALLER_LAST);
  return _uav_project_extern_IPCPorts_RadioDriver_Impl_App;
}

Z uav_project_extern_IPCPorts_Main(STACK_FRAME_ONLY) {
  uav_project_extern_IPCPorts_init(CALLER_LAST);
  return _uav_project_extern_IPCPorts_Main;
}