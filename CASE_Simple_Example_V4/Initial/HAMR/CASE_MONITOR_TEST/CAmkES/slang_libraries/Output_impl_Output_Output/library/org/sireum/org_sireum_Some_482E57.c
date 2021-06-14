#include <all.h>

// Some[art.Bridge]

B Some_482E57__eq(Some_482E57 this, Some_482E57 other) {
  if (art_Bridge__ne((art_Bridge) &this->value, (art_Bridge) &other->value)) return F;
  return T;
}

B Some_482E57__ne(Some_482E57 this, Some_482E57 other);

void Some_482E57_string_(STACK_FRAME String result, Some_482E57 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  art_Bridge_string_(SF result, (art_Bridge) &this->value);
  String_string_(SF result, string(")"));
}

void Some_482E57_cprint(Some_482E57 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  art_Bridge_cprint((art_Bridge) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_482E57__is(STACK_FRAME void* this);
Some_482E57 Some_482E57__as(STACK_FRAME void *this);

void Some_482E57_apply(STACK_FRAME Some_482E57 this, art_Bridge value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_482E57", "apply", 0);
  Type_assign(&this->value, value, sizeof(union art_Bridge));
}