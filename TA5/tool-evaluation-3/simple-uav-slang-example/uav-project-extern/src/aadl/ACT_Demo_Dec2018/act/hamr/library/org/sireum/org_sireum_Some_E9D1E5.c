#include <all.h>

// Some[(Z, art.DataContent)]

B Some_E9D1E5__eq(Some_E9D1E5 this, Some_E9D1E5 other) {
  if (Tuple2_D0E3BB__ne((Tuple2_D0E3BB) &this->value, (Tuple2_D0E3BB) &other->value)) return F;
  return T;
}

B Some_E9D1E5__ne(Some_E9D1E5 this, Some_E9D1E5 other);

void Some_E9D1E5_string_(STACK_FRAME String result, Some_E9D1E5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  Tuple2_D0E3BB_string_(SF result, (Tuple2_D0E3BB) &this->value);
  String_string_(SF result, string(")"));
}

void Some_E9D1E5_cprint(Some_E9D1E5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  Tuple2_D0E3BB_cprint((Tuple2_D0E3BB) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_E9D1E5__is(STACK_FRAME void* this);
Some_E9D1E5 Some_E9D1E5__as(STACK_FRAME void *this);

void Some_E9D1E5_apply(STACK_FRAME Some_E9D1E5 this, Tuple2_D0E3BB value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E9D1E5", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct Tuple2_D0E3BB));
}