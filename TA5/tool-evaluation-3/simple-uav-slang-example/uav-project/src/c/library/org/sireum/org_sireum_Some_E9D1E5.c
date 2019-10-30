#include <all.h>

// Some[(Z, art.DataContent)]

B Some_E9D1E5__eq(Some_E9D1E5 this, Some_E9D1E5 other) {
  if (Tuple2_D0E3BB__ne((Tuple2_D0E3BB) &this->value, (Tuple2_D0E3BB) &other->value)) return F;
  return T;
}

void Some_E9D1E5_string(STACK_FRAME String result, Some_E9D1E5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string(SF result, string("Some("));
  Tuple2_D0E3BB_string(SF result, (Tuple2_D0E3BB) &this->value);
  String_string(SF result, string(")"));
}

void Some_E9D1E5_cprint(Some_E9D1E5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  Tuple2_D0E3BB_cprint((Tuple2_D0E3BB) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Some_E9D1E5_apply(STACK_FRAME Some_E9D1E5 this, Tuple2_D0E3BB value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E9D1E5", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct Tuple2_D0E3BB));
}