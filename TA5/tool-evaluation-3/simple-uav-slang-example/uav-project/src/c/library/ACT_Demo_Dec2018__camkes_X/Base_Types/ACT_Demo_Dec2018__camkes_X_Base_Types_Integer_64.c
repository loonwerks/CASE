#include <all.h>

// ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64

B ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64__eq(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 other) {
  if (Z64__ne(this->value, other->value)) return F;
  return T;
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_string(STACK_FRAME String result, ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this) {
  DeclNewStackFrame(caller, "Integer_64.scala", "ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64", "string", 0);
  String_string(SF result, string("Integer_64("));
  Z64_string(SF result, this->value);
  String_string(SF result, string(")"));
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_cprint(ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Integer_64("), isOut);
  Z64_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_apply(STACK_FRAME ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64 this, Z64 value) {
  DeclNewStackFrame(caller, "Integer_64.scala", "ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64", "apply", 0);
  this->value = value;
}