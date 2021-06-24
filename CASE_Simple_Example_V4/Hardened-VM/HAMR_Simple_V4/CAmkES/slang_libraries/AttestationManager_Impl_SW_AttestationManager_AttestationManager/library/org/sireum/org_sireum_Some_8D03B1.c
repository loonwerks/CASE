#include <all.h>

// Some[IS[Z, B]]

B Some_8D03B1__eq(Some_8D03B1 this, Some_8D03B1 other) {
  if (IS_C4F575__ne((IS_C4F575) &this->value, (IS_C4F575) &other->value)) return F;
  return T;
}

B Some_8D03B1__ne(Some_8D03B1 this, Some_8D03B1 other);

void Some_8D03B1_string_(STACK_FRAME String result, Some_8D03B1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  IS_C4F575_string_(SF result, (IS_C4F575) &this->value);
  String_string_(SF result, string(")"));
}

void Some_8D03B1_cprint(Some_8D03B1 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  IS_C4F575_cprint((IS_C4F575) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_8D03B1__is(STACK_FRAME void* this);
Some_8D03B1 Some_8D03B1__as(STACK_FRAME void *this);

void Some_8D03B1_apply(STACK_FRAME Some_8D03B1 this, IS_C4F575 value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_8D03B1", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct IS_C4F575));
}