#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.Command_Impl

B ACT_Demo_Dec2018__camkes_X_SW_Command_Impl__eq(ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_SW__Map__ne((ACT_Demo_Dec2018__camkes_X_SW_SW__Map) &this->theMap, (ACT_Demo_Dec2018__camkes_X_SW_SW__Map) &other->theMap)) return F;
  if (ACT_Demo_Dec2018__camkes_X_SW_FlightPattern__ne(this->Pattern, other->Pattern)) return F;
  if (B__ne(this->HMAC, other->HMAC)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this) {
  DeclNewStackFrame(caller, "Command_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.Command_Impl", "string", 0);
  String_string(SF result, string("Command_Impl("));
  String sep = string(", ");
  ACT_Demo_Dec2018__camkes_X_SW_SW__Map_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_SW__Map) &this->theMap);
  String_string(SF result, sep);
  ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_string(SF result, this->Pattern);
  String_string(SF result, sep);
  B_string(SF result, this->HMAC);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_cprint(ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Command_Impl("), isOut);
  String sep = string(", ");
  ACT_Demo_Dec2018__camkes_X_SW_SW__Map_cprint((ACT_Demo_Dec2018__camkes_X_SW_SW__Map) &this->theMap, isOut);
  String_cprint(sep, isOut);
  ACT_Demo_Dec2018__camkes_X_SW_FlightPattern_cprint(this->Pattern, isOut);
  String_cprint(sep, isOut);
  B_cprint(this->HMAC, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Command_Impl this, ACT_Demo_Dec2018__camkes_X_SW_SW__Map theMap, ACT_Demo_Dec2018__camkes_X_SW_FlightPattern Pattern, B HMAC) {
  DeclNewStackFrame(caller, "Command_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.Command_Impl", "apply", 0);
  Type_assign(&this->theMap, theMap, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_SW__Map));
  this->Pattern = Pattern;
  this->HMAC = HMAC;
}