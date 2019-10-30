#include <all.h>

// ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints

B ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints__eq(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints this, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints other) {
  if (Z__ne(this->Radio_Impl_BridgeId, other->Radio_Impl_BridgeId)) return F;
  if (Z__ne(this->recv_map_inn_Id, other->recv_map_inn_Id)) return F;
  if (Z__ne(this->recv_map_out_Id, other->recv_map_out_Id)) return F;
  if (Z__ne(this->send_status_inn_Id, other->send_status_inn_Id)) return F;
  if (Z__ne(this->send_status_out_Id, other->send_status_out_Id)) return F;
  if (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl__ne((ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl) &this->component, (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl) &other->component)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints", "string", 0);
  String_string(SF result, string("EntryPoints("));
  String sep = string(", ");
  Z_string(SF result, this->Radio_Impl_BridgeId);
  String_string(SF result, sep);
  Z_string(SF result, this->recv_map_inn_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->recv_map_out_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->send_status_inn_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->send_status_out_Id);
  String_string(SF result, sep);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_string(SF result, (ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl) &this->component);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_cprint(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("EntryPoints("), isOut);
  String sep = string(", ");
  Z_cprint(this->Radio_Impl_BridgeId, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_inn_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_status_inn_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_status_out_Id, isOut);
  String_cprint(sep, isOut);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_cprint((ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl) &this->component, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints this, Z Radio_Impl_BridgeId, Z recv_map_inn_Id, Z recv_map_out_Id, Z send_status_inn_Id, Z send_status_out_Id, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl component) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints", "apply", 0);
  this->Radio_Impl_BridgeId = Radio_Impl_BridgeId;
  this->recv_map_inn_Id = recv_map_inn_Id;
  this->recv_map_out_Id = recv_map_out_Id;
  this->send_status_inn_Id = send_status_inn_Id;
  this->send_status_out_Id = send_status_out_Id;
  Type_assign(&this->component, component, sizeof(struct ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_0);
  t_0.size = (int8_t) 0;
  Type_assign(&this->dataInPortIds, (&t_0), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_1);
  t_1.size = (int8_t) 2;
  t_1.value[0] = ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_recv_map_inn_Id_(this);
  t_1.value[1] = ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_send_status_inn_Id_(this);
  Type_assign(&this->eventInPortIds, (&t_1), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(0 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_2);
  t_2.size = (int8_t) 0;
  Type_assign(&this->dataOutPortIds, (&t_2), sizeof(struct IS_82ABD8));
  STATIC_ASSERT(2 <= MaxIS_82ABD8, "Insufficient maximum for IS[Z, Z] elements.");
  DeclNewIS_82ABD8(t_3);
  t_3.size = (int8_t) 2;
  t_3.value[0] = ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_recv_map_out_Id_(this);
  t_3.value[1] = ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_send_status_out_Id_(this);
  Type_assign(&this->eventOutPortIds, (&t_3), sizeof(struct IS_82ABD8));
}

Unit ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_initialise_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints", "initialise", 0);

  sfUpdateLoc(129);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_initialise_(SF ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_component_(this));
}

Unit ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_compute_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints", "compute", 0);

  sfUpdateLoc(133);
  art_Art_receiveInput(SF (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_eventInPortIds_(this), (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_dataInPortIds_(this));

  sfUpdateLoc(134);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_timeTriggered_(SF ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_component_(this));

  sfUpdateLoc(135);
  art_Art_sendOutput(SF (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_eventOutPortIds_(this), (IS_82ABD8) ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_dataOutPortIds_(this));
}

Unit ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_finalise_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints this) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.EntryPoints", "finalise", 0);

  sfUpdateLoc(151);
  ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Impl_finalise_(SF ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_EntryPoints_component_(this));
}