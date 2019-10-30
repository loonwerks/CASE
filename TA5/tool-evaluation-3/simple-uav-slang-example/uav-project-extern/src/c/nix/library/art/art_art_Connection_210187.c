#include <all.h>

// art.Connection[uav_project_extern.SW.Command_Impl]

B art_Connection_210187__eq(art_Connection_210187 this, art_Connection_210187 other) {
  if (art_Port_311EA2__ne((art_Port_311EA2) &this->from, (art_Port_311EA2) &other->from)) return F;
  if (art_Port_311EA2__ne((art_Port_311EA2) &this->to, (art_Port_311EA2) &other->to)) return F;
  return T;
}

B art_Connection_210187__ne(art_Connection_210187 this, art_Connection_210187 other);

void art_Connection_210187_string_(STACK_FRAME String result, art_Connection_210187 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string_(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_311EA2_string_(SF result, (art_Port_311EA2) &this->from);
  String_string_(SF result, sep);
  art_Port_311EA2_string_(SF result, (art_Port_311EA2) &this->to);
  String_string_(SF result, string(")"));
}

void art_Connection_210187_cprint(art_Connection_210187 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_311EA2_cprint((art_Port_311EA2) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_311EA2_cprint((art_Port_311EA2) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_Connection_210187__is(STACK_FRAME void* this);
art_Connection_210187 art_Connection_210187__as(STACK_FRAME void *this);

void art_Connection_210187_apply(STACK_FRAME art_Connection_210187 this, art_Port_311EA2 from, art_Port_311EA2 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_210187", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_311EA2));
  Type_assign(&this->to, to, sizeof(struct art_Port_311EA2));
}