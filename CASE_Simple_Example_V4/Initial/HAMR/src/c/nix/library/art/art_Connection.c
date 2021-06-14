#include <all.h>

// art.Connection

B art_Connection__eq(art_Connection this, art_Connection other) {
  if (art_UPort__ne((art_UPort) &this->from, (art_UPort) &other->from)) return F;
  if (art_UPort__ne((art_UPort) &this->to, (art_UPort) &other->to)) return F;
  return T;
}

B art_Connection__ne(art_Connection this, art_Connection other);

void art_Connection_string_(STACK_FRAME String result, art_Connection this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string_(SF result, string("Connection("));
  String sep = string(", ");
  art_UPort_string_(SF result, (art_UPort) &this->from);
  String_string_(SF result, sep);
  art_UPort_string_(SF result, (art_UPort) &this->to);
  String_string_(SF result, string(")"));
}

void art_Connection_cprint(art_Connection this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_UPort_cprint((art_UPort) &this->from, isOut);
  String_cprint(sep, isOut);
  art_UPort_cprint((art_UPort) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Connection__is(STACK_FRAME void* this);
art_Connection art_Connection__as(STACK_FRAME void *this);

void art_Connection_apply(STACK_FRAME art_Connection this, art_UPort from, art_UPort to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "apply", 0);
  Type_assign(&this->from, from, sizeof(union art_UPort));
  Type_assign(&this->to, to, sizeof(union art_UPort));
}