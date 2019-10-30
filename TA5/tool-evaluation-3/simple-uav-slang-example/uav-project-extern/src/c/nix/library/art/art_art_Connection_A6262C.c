#include <all.h>

// art.Connection[S64]

B art_Connection_A6262C__eq(art_Connection_A6262C this, art_Connection_A6262C other) {
  if (art_Port_CBF210__ne((art_Port_CBF210) &this->from, (art_Port_CBF210) &other->from)) return F;
  if (art_Port_CBF210__ne((art_Port_CBF210) &this->to, (art_Port_CBF210) &other->to)) return F;
  return T;
}

B art_Connection_A6262C__ne(art_Connection_A6262C this, art_Connection_A6262C other);

void art_Connection_A6262C_string_(STACK_FRAME String result, art_Connection_A6262C this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string_(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_CBF210_string_(SF result, (art_Port_CBF210) &this->from);
  String_string_(SF result, sep);
  art_Port_CBF210_string_(SF result, (art_Port_CBF210) &this->to);
  String_string_(SF result, string(")"));
}

void art_Connection_A6262C_cprint(art_Connection_A6262C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_CBF210_cprint((art_Port_CBF210) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_CBF210_cprint((art_Port_CBF210) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Connection_A6262C__is(STACK_FRAME void* this);
art_Connection_A6262C art_Connection_A6262C__as(STACK_FRAME void *this);

void art_Connection_A6262C_apply(STACK_FRAME art_Connection_A6262C this, art_Port_CBF210 from, art_Port_CBF210 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_A6262C", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_CBF210));
  Type_assign(&this->to, to, sizeof(struct art_Port_CBF210));
}