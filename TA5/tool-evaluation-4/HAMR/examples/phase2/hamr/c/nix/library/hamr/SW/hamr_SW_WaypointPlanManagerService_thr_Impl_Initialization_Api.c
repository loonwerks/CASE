#include <all.h>

// hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api

B hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api__eq(hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this, hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->AutomationResponse_Id, other->AutomationResponse_Id)) return F;
  if (Z__ne(this->AirVehicleState_Id, other->AirVehicleState_Id)) return F;
  if (Z__ne(this->MissionCommand_Id, other->MissionCommand_Id)) return F;
  if (Z__ne(this->ReturnHome_Id, other->ReturnHome_Id)) return F;
  return T;
}

B hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api__ne(hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this, hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api other);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_string_(STACK_FRAME String result, hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Api.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api", "string", 0);
  String_string_(SF result, string("WaypointPlanManagerService_thr_Impl_Initialization_Api("));
  String sep = string(", ");
  Z_string_(SF result, this->id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AutomationResponse_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->AirVehicleState_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->MissionCommand_Id);
  String_string_(SF result, sep);
  Z_string_(SF result, this->ReturnHome_Id);
  String_string_(SF result, string(")"));
}

void hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_cprint(hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("WaypointPlanManagerService_thr_Impl_Initialization_Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AutomationResponse_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->AirVehicleState_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->MissionCommand_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->ReturnHome_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api__is(STACK_FRAME void* this);
hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api__as(STACK_FRAME void *this);

void hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_apply(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api this, Z id, Z AutomationResponse_Id, Z AirVehicleState_Id, Z MissionCommand_Id, Z ReturnHome_Id) {
  DeclNewStackFrame(caller, "WaypointPlanManagerService_thr_Impl_Api.scala", "hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api", "apply", 0);
  this->id = id;
  this->AutomationResponse_Id = AutomationResponse_Id;
  this->AirVehicleState_Id = AirVehicleState_Id;
  this->MissionCommand_Id = MissionCommand_Id;
  this->ReturnHome_Id = ReturnHome_Id;
}