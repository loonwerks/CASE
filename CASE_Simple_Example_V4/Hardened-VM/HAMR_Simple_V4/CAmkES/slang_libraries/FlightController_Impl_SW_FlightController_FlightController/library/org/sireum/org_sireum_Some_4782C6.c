#include <all.h>

// Some[art.Empty]

B Some_4782C6__eq(Some_4782C6 this, Some_4782C6 other) {
  if (art_Empty__ne((art_Empty) &this->value, (art_Empty) &other->value)) return F;
  return T;
}

B Some_4782C6__ne(Some_4782C6 this, Some_4782C6 other);

void Some_4782C6_string_(STACK_FRAME String result, Some_4782C6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  art_Empty_string_(SF result, (art_Empty) &this->value);
  String_string_(SF result, string(")"));
}

void Some_4782C6_cprint(Some_4782C6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  art_Empty_cprint((art_Empty) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_4782C6__is(STACK_FRAME void* this);
Some_4782C6 Some_4782C6__as(STACK_FRAME void *this);

void Some_4782C6_apply(STACK_FRAME Some_4782C6 this, art_Empty value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_4782C6", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct art_Empty));
}