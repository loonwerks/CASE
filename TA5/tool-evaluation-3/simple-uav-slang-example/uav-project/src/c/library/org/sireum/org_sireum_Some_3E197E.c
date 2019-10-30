#include <all.h>

// Some[art.UPort]

B Some_3E197E__eq(Some_3E197E this, Some_3E197E other) {
  if (art_UPort__ne((art_UPort) &this->value, (art_UPort) &other->value)) return F;
  return T;
}

void Some_3E197E_string(STACK_FRAME String result, Some_3E197E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string(SF result, string("Some("));
  art_UPort_string(SF result, (art_UPort) &this->value);
  String_string(SF result, string(")"));
}

void Some_3E197E_cprint(Some_3E197E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  art_UPort_cprint((art_UPort) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void Some_3E197E_apply(STACK_FRAME Some_3E197E this, art_UPort value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_3E197E", "apply", 0);
  Type_assign(&this->value, value, sizeof(union art_UPort));
}