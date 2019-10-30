#include <all.h>

B ACT_Demo_Dec2018__camkes_X_IPCPorts_initialized_ = F;

Z _ACT_Demo_Dec2018__camkes_X_IPCPorts_UART_Impl_App;
Z _ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App;
Z _ACT_Demo_Dec2018__camkes_X_IPCPorts_Radio_Impl_App;
Z _ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App;
Z _ACT_Demo_Dec2018__camkes_X_IPCPorts_UARTDriver_Impl_App;
Z _ACT_Demo_Dec2018__camkes_X_IPCPorts_RadioDriver_Impl_App;
Z _ACT_Demo_Dec2018__camkes_X_IPCPorts_Main;

void ACT_Demo_Dec2018__camkes_X_IPCPorts_init(STACK_FRAME_LAST) {
  if (ACT_Demo_Dec2018__camkes_X_IPCPorts_initialized_) return;
  ACT_Demo_Dec2018__camkes_X_IPCPorts_initialized_ = T;
  DeclNewStackFrame(caller, "IPC.scala", "ACT_Demo_Dec2018__camkes_X.IPCPorts", "<init>", 0);
  _ACT_Demo_Dec2018__camkes_X_IPCPorts_UART_Impl_App = Z_C(17);
  _ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App = Z_C(18);
  _ACT_Demo_Dec2018__camkes_X_IPCPorts_Radio_Impl_App = Z_C(19);
  _ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App = Z_C(20);
  _ACT_Demo_Dec2018__camkes_X_IPCPorts_UARTDriver_Impl_App = Z_C(21);
  _ACT_Demo_Dec2018__camkes_X_IPCPorts_RadioDriver_Impl_App = Z_C(22);
  _ACT_Demo_Dec2018__camkes_X_IPCPorts_Main = Z_C(23);
}

Z ACT_Demo_Dec2018__camkes_X_IPCPorts_UART_Impl_App(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_IPCPorts_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_IPCPorts_UART_Impl_App;
}

Z ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_IPCPorts_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_IPCPorts_WaypointManager_Impl_App;
}

Z ACT_Demo_Dec2018__camkes_X_IPCPorts_Radio_Impl_App(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_IPCPorts_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_IPCPorts_Radio_Impl_App;
}

Z ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_IPCPorts_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_IPCPorts_FlightPlanner_Impl_App;
}

Z ACT_Demo_Dec2018__camkes_X_IPCPorts_UARTDriver_Impl_App(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_IPCPorts_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_IPCPorts_UARTDriver_Impl_App;
}

Z ACT_Demo_Dec2018__camkes_X_IPCPorts_RadioDriver_Impl_App(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_IPCPorts_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_IPCPorts_RadioDriver_Impl_App;
}

Z ACT_Demo_Dec2018__camkes_X_IPCPorts_Main(STACK_FRAME_LAST) {
  ACT_Demo_Dec2018__camkes_X_IPCPorts_init(CALLER_LAST);
  return _ACT_Demo_Dec2018__camkes_X_IPCPorts_Main;
}