#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api

B ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api__eq(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->flight_plan_Id, other->flight_plan_Id)) return F;
  if (Z__ne(this->mission_rcv_Id, other->mission_rcv_Id)) return F;
  if (Z__ne(this->mission_window_Id, other->mission_window_Id)) return F;
  if (Z__ne(this->tracking_id_Id, other->tracking_id_Id)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api", "string", 0);
  String_string(SF result, string("Api("));
  String sep = string(", ");
  Z_string(SF result, this->id);
  String_string(SF result, sep);
  Z_string(SF result, this->flight_plan_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->mission_rcv_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->mission_window_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->tracking_id_Id);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_cprint(ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->flight_plan_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_rcv_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_window_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->tracking_id_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api this, Z id, Z flight_plan_Id, Z mission_rcv_Id, Z mission_window_Id, Z tracking_id_Id) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->flight_plan_Id = flight_plan_Id;
  this->mission_rcv_Id = mission_rcv_Id;
  this->mission_window_Id = mission_window_Id;
  this->tracking_id_Id = tracking_id_Id;
}

Unit ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_logInfo_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(96);
  art_Art_logInfo(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_id_(this), (String) msg);
}

Unit ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_sendmission_rcv_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean value) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api", "sendmission_rcv", 0);

  sfUpdateLoc(79);
  DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload(t_0);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload_apply(SF &t_0, (ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean) value);
  art_Art_putValue(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_mission_rcv_Id_(this), (art_DataContent) (&t_0));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_sendmission_window_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow value) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api", "sendmission_window", 0);

  sfUpdateLoc(83);
  DeclNewACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload(t_0);
  ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload_apply(SF &t_0, (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) value);
  art_Art_putValue(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_mission_window_Id_(this), (art_DataContent) (&t_0));
}

Unit ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_logError_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "WaypointManager_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.WaypointManager_Impl_Bridge.Api", "logError", 0);

  sfUpdateLoc(104);
  art_Art_logError(SF ACT_Demo_Dec2018__camkes_X_SW_WaypointManager_Impl_Bridge_Api_id_(this), (String) msg);
}