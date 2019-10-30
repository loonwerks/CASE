#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.Command_Impl_Payload

B ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload__eq(ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload this, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl__ne((ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) &this->value, (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) &other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload this) {
  DeclNewStackFrame(caller, "Command_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.Command_Impl_Payload", "string", 0);
  String_string(SF result, string("Command_Impl_Payload("));
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) &this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload_cprint(ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Command_Impl_Payload("), isOut);
  ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_cprint((ACT_Demo_Dec2018__camkes_X_SW_Command_Impl) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload this, ACT_Demo_Dec2018__camkes_X_SW_Command_Impl value) {
  DeclNewStackFrame(caller, "Command_Impl.scala", "ACT_Demo_Dec2018__camkes_X.SW.Command_Impl_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl));
}