#include <all.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64_Payload

B ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload__eq(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload other) {
  if (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64__ne((ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) &this->value, (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) &other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this) {
  DeclNewStackFrame(caller, "Integer_64.scala", "ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64_Payload", "string", 0);
  String_string(SF result, string("Integer_64_Payload("));
  ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_string(SF result, (ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) &this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_cprint(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Integer_64_Payload("), isOut);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_cprint((ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 value) {
  DeclNewStackFrame(caller, "Integer_64.scala", "ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64));
}