#include <all.h>

// art.Connection[uav_project_extern.SW.MissionWindow]

B art_Connection_B6057D__eq(art_Connection_B6057D this, art_Connection_B6057D other) {
  if (art_Port_65F60A__ne((art_Port_65F60A) &this->from, (art_Port_65F60A) &other->from)) return F;
  if (art_Port_65F60A__ne((art_Port_65F60A) &this->to, (art_Port_65F60A) &other->to)) return F;
  return T;
}

B art_Connection_B6057D__ne(art_Connection_B6057D this, art_Connection_B6057D other);

void art_Connection_B6057D_string_(STACK_FRAME String result, art_Connection_B6057D this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string_(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_65F60A_string_(SF result, (art_Port_65F60A) &this->from);
  String_string_(SF result, sep);
  art_Port_65F60A_string_(SF result, (art_Port_65F60A) &this->to);
  String_string_(SF result, string(")"));
}

void art_Connection_B6057D_cprint(art_Connection_B6057D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_65F60A_cprint((art_Port_65F60A) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_65F60A_cprint((art_Port_65F60A) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Connection_B6057D__is(STACK_FRAME void* this);
art_Connection_B6057D art_Connection_B6057D__as(STACK_FRAME void *this);

void art_Connection_B6057D_apply(STACK_FRAME art_Connection_B6057D this, art_Port_65F60A from, art_Port_65F60A to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_B6057D", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_65F60A));
  Type_assign(&this->to, to, sizeof(struct art_Port_65F60A));
}