#include <all.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean_Payload

B ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload__eq(ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload this, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload other) {
  if (ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean__ne((ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean) &this->value, (ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean) &other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload this) {
  DeclNewStackFrame(caller, "Boolean.scala", "ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean_Payload", "string", 0);
  String_string(SF result, string("Boolean_Payload("));
  ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_string(SF result, (ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean) &this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload_cprint(ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Boolean_Payload("), isOut);
  ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_cprint((ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload this, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean value) {
  DeclNewStackFrame(caller, "Boolean.scala", "ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean));
}