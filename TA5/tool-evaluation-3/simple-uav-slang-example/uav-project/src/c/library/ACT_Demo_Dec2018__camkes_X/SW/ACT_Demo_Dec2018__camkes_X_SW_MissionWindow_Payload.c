#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.MissionWindow_Payload

B ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload__eq(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload this, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow__ne((ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) &this->value, (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) &other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload this) {
  DeclNewStackFrame(caller, "MissionWindow.scala", "ACT_Demo_Dec2018__camkes_X.SW.MissionWindow_Payload", "string", 0);
  String_string(SF result, string("MissionWindow_Payload("));
  ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) &this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload_cprint(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MissionWindow_Payload("), isOut);
  ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_cprint((ACT_Demo_Dec2018__camkes_X_SW_MissionWindow) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload this, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow value) {
  DeclNewStackFrame(caller, "MissionWindow.scala", "ACT_Demo_Dec2018__camkes_X.SW.MissionWindow_Payload", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_MissionWindow));
}