#include <all.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Mission]

B art_Connection_E82682__eq(art_Connection_E82682 this, art_Connection_E82682 other) {
  if (art_Port_D7D05E__ne((art_Port_D7D05E) &this->from, (art_Port_D7D05E) &other->from)) return F;
  if (art_Port_D7D05E__ne((art_Port_D7D05E) &this->to, (art_Port_D7D05E) &other->to)) return F;
  return T;
}

void art_Connection_E82682_string(STACK_FRAME String result, art_Connection_E82682 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_D7D05E_string(SF result, (art_Port_D7D05E) &this->from);
  String_string(SF result, sep);
  art_Port_D7D05E_string(SF result, (art_Port_D7D05E) &this->to);
  String_string(SF result, string(")"));
}

void art_Connection_E82682_cprint(art_Connection_E82682 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_D7D05E_cprint((art_Port_D7D05E) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_D7D05E_cprint((art_Port_D7D05E) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Connection_E82682_apply(STACK_FRAME art_Connection_E82682 this, art_Port_D7D05E from, art_Port_D7D05E to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_E82682", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_D7D05E));
  Type_assign(&this->to, to, sizeof(struct art_Port_D7D05E));
}