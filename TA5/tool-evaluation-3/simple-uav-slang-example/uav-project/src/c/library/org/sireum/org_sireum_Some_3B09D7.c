#include <all.h>

// Some[ACT_Demo_Dec2018__camkes_X.SW.Mission]

B Some_3B09D7__eq(Some_3B09D7 this, Some_3B09D7 other) {
  if (ACT_Demo_Dec2018__camkes_X_SW_Mission__ne((ACT_Demo_Dec2018__camkes_X_SW_Mission) &this->value, (ACT_Demo_Dec2018__camkes_X_SW_Mission) &other->value)) return F;
  return T;
}

void Some_3B09D7_string(STACK_FRAME String result, Some_3B09D7 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string(SF result, string("Some("));
  ACT_Demo_Dec2018__camkes_X_SW_Mission_string(SF result, (ACT_Demo_Dec2018__camkes_X_SW_Mission) &this->value);
  String_string(SF result, string(")"));
}

void Some_3B09D7_cprint(Some_3B09D7 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  ACT_Demo_Dec2018__camkes_X_SW_Mission_cprint((ACT_Demo_Dec2018__camkes_X_SW_Mission) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Some_3B09D7_apply(STACK_FRAME Some_3B09D7 this, ACT_Demo_Dec2018__camkes_X_SW_Mission value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_3B09D7", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct ACT_Demo_Dec2018__camkes_X_SW_Mission));
}