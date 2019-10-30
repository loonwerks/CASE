#include <all.h>

// ACT_Demo_Dec2018__camkes_X.SW.SW__Map

B ACT_Demo_Dec2018__camkes_X_SW_SW__Map__eq(ACT_Demo_Dec2018__camkes_X_SW_SW__Map this, ACT_Demo_Dec2018__camkes_X_SW_SW__Map other) {
  if (IS_5D0BE7__ne((IS_5D0BE7) &this->value, (IS_5D0BE7) &other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_SW_SW__Map_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_SW_SW__Map this) {
  DeclNewStackFrame(caller, "SW__Map.scala", "ACT_Demo_Dec2018__camkes_X.SW.SW__Map", "string", 0);
  String_string(SF result, string("SW__Map("));
  IS_5D0BE7_string(SF result, (IS_5D0BE7) &this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_SW_SW__Map_cprint(ACT_Demo_Dec2018__camkes_X_SW_SW__Map this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("SW__Map("), isOut);
  IS_5D0BE7_cprint((IS_5D0BE7) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_SW_SW__Map_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_SW_SW__Map this, IS_5D0BE7 value) {
  DeclNewStackFrame(caller, "SW__Map.scala", "ACT_Demo_Dec2018__camkes_X.SW.SW__Map", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_5D0BE7));
}