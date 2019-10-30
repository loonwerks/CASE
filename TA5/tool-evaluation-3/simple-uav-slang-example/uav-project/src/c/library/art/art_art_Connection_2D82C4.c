#include <all.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.Command_Impl]

B art_Connection_2D82C4__eq(art_Connection_2D82C4 this, art_Connection_2D82C4 other) {
  if (art_Port_695448__ne((art_Port_695448) &this->from, (art_Port_695448) &other->from)) return F;
  if (art_Port_695448__ne((art_Port_695448) &this->to, (art_Port_695448) &other->to)) return F;
  return T;
}

void art_Connection_2D82C4_string(STACK_FRAME String result, art_Connection_2D82C4 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_695448_string(SF result, (art_Port_695448) &this->from);
  String_string(SF result, sep);
  art_Port_695448_string(SF result, (art_Port_695448) &this->to);
  String_string(SF result, string(")"));
}

void art_Connection_2D82C4_cprint(art_Connection_2D82C4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_695448_cprint((art_Port_695448) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_695448_cprint((art_Port_695448) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Connection_2D82C4_apply(STACK_FRAME art_Connection_2D82C4 this, art_Port_695448 from, art_Port_695448 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_2D82C4", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_695448));
  Type_assign(&this->to, to, sizeof(struct art_Port_695448));
}