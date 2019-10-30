#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.Mission

B ACT_Demo_Dec2018__camkes_X_SW_Mission__eq(ACT_Demo_Dec2018__camkes_X_SW_Mission this, ACT_Demo_Dec2018__camkes_X_SW_Mission other) {
  if (IS_5D0BE7__ne((IS_5D0BE7) &this->value, (IS_5D0BE7) &other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_Mission_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_Mission this) {
  DeclNewStackFrame(caller, "Mission.scala", "ACT_Demo_Dec2018__camkes_X.SW.Mission", "string", 0);
  String_string(SF result, string("Mission("));
  IS_5D0BE7_string(SF result, (IS_5D0BE7) &this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_Mission_cprint(ACT_Demo_Dec2018__camkes_X_SW_Mission this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Mission("), isOut);
  IS_5D0BE7_cprint((IS_5D0BE7) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_Mission_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_Mission this, IS_5D0BE7 value) {
  DeclNewStackFrame(caller, "Mission.scala", "ACT_Demo_Dec2018__camkes_X.SW.Mission", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_5D0BE7));
}