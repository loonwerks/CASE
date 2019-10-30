#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.Api

B ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api__eq(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->flight_plan_Id, other->flight_plan_Id)) return F;
  if (Z__ne(this->mission_rcv_Id, other->mission_rcv_Id)) return F;
  if (Z__ne(this->recv_map_Id, other->recv_map_Id)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.Api", "string", 0);
  String_string(SF result, string("Api("));
  String sep = string(", ");
  Z_string(SF result, this->id);
  String_string(SF result, sep);
  Z_string(SF result, this->flight_plan_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->mission_rcv_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->recv_map_Id);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_cprint(ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->flight_plan_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_rcv_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api this, Z id, Z flight_plan_Id, Z mission_rcv_Id, Z recv_map_Id) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->flight_plan_Id = flight_plan_Id;
  this->mission_rcv_Id = mission_rcv_Id;
  this->recv_map_Id = recv_map_Id;
}

Unit ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_logInfo_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(86);
  art_Art_logInfo(SF ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_id_(this), (String) msg);
}

Unit ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_sendflight_plan_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_Mission value) {
  DeclNewStackFrame(caller, "FlightPlanner_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.FlightPlanner_Impl_Bridge.Api", "sendflight_plan", 0);

  sfUpdateLoc(65);
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Mission_Payload(t_0);
  ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload_apply(SF &t_0, (ACT_Demo_Dec2018__camkes_X_SW_Mission) value);
  art_Art_putValue(SF ACT_Demo_Dec2018__camkes_X_SW_FlightPlanner_Impl_Bridge_Api_flight_plan_Id_(this), (art_DataContent) (&t_0));
}