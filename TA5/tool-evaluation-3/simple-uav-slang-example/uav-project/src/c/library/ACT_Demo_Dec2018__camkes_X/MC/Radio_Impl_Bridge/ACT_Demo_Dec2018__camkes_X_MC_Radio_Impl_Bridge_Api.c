#include <all.h>

// ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.Api

B ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api__eq(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->recv_map_inn_Id, other->recv_map_inn_Id)) return F;
  if (Z__ne(this->recv_map_out_Id, other->recv_map_out_Id)) return F;
  if (Z__ne(this->send_status_inn_Id, other->send_status_inn_Id)) return F;
  if (Z__ne(this->send_status_out_Id, other->send_status_out_Id)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.Api", "string", 0);
  String_string(SF result, string("Api("));
  String sep = string(", ");
  Z_string(SF result, this->id);
  String_string(SF result, sep);
  Z_string(SF result, this->recv_map_inn_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->recv_map_out_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->send_status_inn_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->send_status_out_Id);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_cprint(ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_inn_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_out_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_status_inn_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->send_status_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_MC_Radio_Impl_Bridge_Api this, Z id, Z recv_map_inn_Id, Z recv_map_out_Id, Z send_status_inn_Id, Z send_status_out_Id) {
  DeclNewStackFrame(caller, "Radio_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.MC.Radio_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->recv_map_inn_Id = recv_map_inn_Id;
  this->recv_map_out_Id = recv_map_out_Id;
  this->send_status_inn_Id = send_status_inn_Id;
  this->send_status_out_Id = send_status_out_Id;
}