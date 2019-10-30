#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.Api

B ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api__eq(ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->recv_map_out_Id, other->recv_map_out_Id)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.Api", "string", 0);
  String_string(SF result, string("Api("));
  String sep = string(", ");
  Z_string(SF result, this->id);
  String_string(SF result, sep);
  Z_string(SF result, this->recv_map_out_Id);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_cprint(ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->recv_map_out_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api this, Z id, Z recv_map_out_Id) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->recv_map_out_Id = recv_map_out_Id;
}

Unit ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_logInfo_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(59);
  art_Art_logInfo(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_id_(this), (String) msg);
}

Unit ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_sendrecv_map_out_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl value) {
  DeclNewStackFrame(caller, "RadioDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.RadioDriver_Impl_Bridge.Api", "sendrecv_map_out", 0);

  sfUpdateLoc(54);
  DeclNewACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload(t_0);
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload_apply(SF &t_0, (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) value);
  art_Art_putValue(SF ACT_Demo_Dec2018__camkes_X_SW_RadioDriver_Impl_Bridge_Api_recv_map_out_Id_(this), (art_DataContent) (&t_0));
}