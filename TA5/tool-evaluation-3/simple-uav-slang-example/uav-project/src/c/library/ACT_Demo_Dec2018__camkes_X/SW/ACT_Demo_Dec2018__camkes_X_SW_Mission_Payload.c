#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.Mission_Payload

B ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload__eq(ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload this, ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_Mission__ne((ACT_Demo_Dec2018__camkes_X_SW_Mission) &this->value, (ACT_Demo_Dec2018__camkes_X_SW_Mission) &other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload this) {
  DeclNewStackFrame(caller, "Mission.scala", "ACT_Demo_Dec2018__camkes_X.SW.Mission_Payload", "string", 0);
  String_string(SF result, string("Mission_Payload("));
  ACT_Demo_Dec2018__camkes_X_SW_Mission_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_Mission) &this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload_cprint(ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Mission_Payload("), isOut);
  ACT_Demo_Dec2018__camkes_X_SW_Mission_cprint((ACT_Demo_Dec2018__camkes_X_SW_Mission) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload this, ACT_Demo_Dec2018__camkes_X_SW_Mission value) {
  DeclNewStackFrame(caller, "Mission.scala", "ACT_Demo_Dec2018__camkes_X.SW.Mission_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Mission));
}