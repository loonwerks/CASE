#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.MissionWindow

B ACT_Demo_Dec2018__camkes_X_SW_MissionWindow__eq(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow other) {
  if (IS_5D0BE7__ne((IS_5D0BE7) &this->value, (IS_5D0BE7) &other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this) {
  DeclNewStackFrame(caller, "MissionWindow.scala", "ACT_Demo_Dec2018__camkes_X.SW.MissionWindow", "string", 0);
  String_string(SF result, string("MissionWindow("));
  IS_5D0BE7_string(SF result, (IS_5D0BE7) &this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_cprint(ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MissionWindow("), isOut);
  IS_5D0BE7_cprint((IS_5D0BE7) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_MissionWindow this, IS_5D0BE7 value) {
  DeclNewStackFrame(caller, "MissionWindow.scala", "ACT_Demo_Dec2018__camkes_X.SW.MissionWindow", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_5D0BE7));
}