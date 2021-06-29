#include <all.h>

// Some[Z]

B Some_488F47__eq(Some_488F47 this, Some_488F47 other) {
  if (Z__ne(this->value, other->value)) return F;
  return T;
}

B Some_488F47__ne(Some_488F47 this, Some_488F47 other);

void Some_488F47_string_(STACK_FRAME String result, Some_488F47 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  Z_string_(SF result, this->value);
  String_string_(SF result, string(")"));
}

void Some_488F47_cprint(Some_488F47 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  Z_cprint(this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_488F47__is(STACK_FRAME void* this);
Some_488F47 Some_488F47__as(STACK_FRAME void *this);

void Some_488F47_apply(STACK_FRAME Some_488F47 this, Z value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_488F47", "apply", 0);
  this->value = value;
}