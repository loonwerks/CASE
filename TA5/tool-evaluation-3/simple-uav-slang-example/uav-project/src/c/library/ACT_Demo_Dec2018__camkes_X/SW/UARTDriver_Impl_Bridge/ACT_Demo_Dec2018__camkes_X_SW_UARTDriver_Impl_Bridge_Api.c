#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api

B ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api__eq(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api other) {
  if (Z__ne(this->id, other->id)) return F;
  if (Z__ne(this->mission_window_Id, other->mission_window_Id)) return F;
  if (Z__ne(this->tracking_id_Id, other->tracking_id_Id)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api", "string", 0);
  String_string(SF result, string("Api("));
  String sep = string(", ");
  Z_string(SF result, this->id);
  String_string(SF result, sep);
  Z_string(SF result, this->mission_window_Id);
  String_string(SF result, sep);
  Z_string(SF result, this->tracking_id_Id);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_cprint(ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Api("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->mission_window_Id, isOut);
  String_cprint(sep, isOut);
  Z_cprint(this->tracking_id_Id, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, Z id, Z mission_window_Id, Z tracking_id_Id) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api", "apply", 0);
  this->id = id;
  this->mission_window_Id = mission_window_Id;
  this->tracking_id_Id = tracking_id_Id;
}

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_logInfo_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, String msg) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api", "logInfo", 0);

  sfUpdateLoc(72);
  art_Art_logInfo(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_id_(this), (String) msg);
}

Unit ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_sendtracking_id_(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 value) {
  DeclNewStackFrame(caller, "UARTDriver_Impl_Bridge.scala", "ACT_Demo_Dec2018__camkes_X.SW.UARTDriver_Impl_Bridge.Api", "sendtracking_id", 0);

  sfUpdateLoc(67);
  DeclNewACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload(t_0);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_apply(SF &t_0, (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) value);
  art_Art_putValue(SF ACT_Demo_Dec2018__camkes_X_SW_UARTDriver_Impl_Bridge_Api_tracking_id_Id_(this), (art_DataContent) (&t_0));
}