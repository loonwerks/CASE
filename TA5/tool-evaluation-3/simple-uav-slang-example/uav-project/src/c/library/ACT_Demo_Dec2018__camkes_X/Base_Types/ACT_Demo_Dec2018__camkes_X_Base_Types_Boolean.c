#include <all.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean

B ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean__eq(ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean other) {
  if (B__ne(this->value, other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this) {
  DeclNewStackFrame(caller, "Boolean.scala", "ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean", "string", 0);
  String_string(SF result, string("Boolean("));
  B_string(SF result, this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_cprint(ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Boolean("), isOut);
  B_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean this, B value) {
  DeclNewStackFrame(caller, "Boolean.scala", "ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean", "apply", 0);
  this->value = value;
}