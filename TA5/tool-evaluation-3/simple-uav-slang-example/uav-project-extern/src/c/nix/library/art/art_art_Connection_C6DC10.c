#include <all.h>

// art.Connection[uav_project_extern.SW.Mission]

B art_Connection_C6DC10__eq(art_Connection_C6DC10 this, art_Connection_C6DC10 other) {
  if (art_Port_97EF76__ne((art_Port_97EF76) &this->from, (art_Port_97EF76) &other->from)) return F;
  if (art_Port_97EF76__ne((art_Port_97EF76) &this->to, (art_Port_97EF76) &other->to)) return F;
  return T;
}

B art_Connection_C6DC10__ne(art_Connection_C6DC10 this, art_Connection_C6DC10 other);

void art_Connection_C6DC10_string_(STACK_FRAME String result, art_Connection_C6DC10 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string_(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_97EF76_string_(SF result, (art_Port_97EF76) &this->from);
  String_string_(SF result, sep);
  art_Port_97EF76_string_(SF result, (art_Port_97EF76) &this->to);
  String_string_(SF result, string(")"));
}

void art_Connection_C6DC10_cprint(art_Connection_C6DC10 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_97EF76_cprint((art_Port_97EF76) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_97EF76_cprint((art_Port_97EF76) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Connection_C6DC10__is(STACK_FRAME void* this);
art_Connection_C6DC10 art_Connection_C6DC10__as(STACK_FRAME void *this);

void art_Connection_C6DC10_apply(STACK_FRAME art_Connection_C6DC10 this, art_Port_97EF76 from, art_Port_97EF76 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_C6DC10", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_97EF76));
  Type_assign(&this->to, to, sizeof(struct art_Port_97EF76));
}