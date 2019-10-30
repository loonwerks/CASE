#include <all.h>

// art.Connection[B]

B art_Connection_F3A765__eq(art_Connection_F3A765 this, art_Connection_F3A765 other) {
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->from, (art_Port_C0524D) &other->from)) return F;
  if (art_Port_C0524D__ne((art_Port_C0524D) &this->to, (art_Port_C0524D) &other->to)) return F;
  return T;
}

B art_Connection_F3A765__ne(art_Connection_F3A765 this, art_Connection_F3A765 other);

void art_Connection_F3A765_string_(STACK_FRAME String result, art_Connection_F3A765 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string_(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->from);
  String_string_(SF result, sep);
  art_Port_C0524D_string_(SF result, (art_Port_C0524D) &this->to);
  String_string_(SF result, string(")"));
}

void art_Connection_F3A765_cprint(art_Connection_F3A765 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_C0524D_cprint((art_Port_C0524D) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_C0524D_cprint((art_Port_C0524D) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Connection_F3A765__is(STACK_FRAME void* this);
art_Connection_F3A765 art_Connection_F3A765__as(STACK_FRAME void *this);

void art_Connection_F3A765_apply(STACK_FRAME art_Connection_F3A765 this, art_Port_C0524D from, art_Port_C0524D to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_F3A765", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_C0524D));
  Type_assign(&this->to, to, sizeof(struct art_Port_C0524D));
}