#include <all.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.SW.MissionWindow]

B art_Connection_112F4D__eq(art_Connection_112F4D this, art_Connection_112F4D other) {
  if (art_Port_2D3735__ne((art_Port_2D3735) &this->from, (art_Port_2D3735) &other->from)) return F;
  if (art_Port_2D3735__ne((art_Port_2D3735) &this->to, (art_Port_2D3735) &other->to)) return F;
  return T;
}

void art_Connection_112F4D_string(STACK_FRAME String result, art_Connection_112F4D this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_2D3735_string(SF result, (art_Port_2D3735) &this->from);
  String_string(SF result, sep);
  art_Port_2D3735_string(SF result, (art_Port_2D3735) &this->to);
  String_string(SF result, string(")"));
}

void art_Connection_112F4D_cprint(art_Connection_112F4D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_2D3735_cprint((art_Port_2D3735) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_2D3735_cprint((art_Port_2D3735) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Connection_112F4D_apply(STACK_FRAME art_Connection_112F4D this, art_Port_2D3735 from, art_Port_2D3735 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_112F4D", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_2D3735));
  Type_assign(&this->to, to, sizeof(struct art_Port_2D3735));
}