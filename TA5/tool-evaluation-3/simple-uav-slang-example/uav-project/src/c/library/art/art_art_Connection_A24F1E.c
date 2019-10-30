#include <all.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]

B art_Connection_A24F1E__eq(art_Connection_A24F1E this, art_Connection_A24F1E other) {
  if (art_Port_9D6F5D__ne((art_Port_9D6F5D) &this->from, (art_Port_9D6F5D) &other->from)) return F;
  if (art_Port_9D6F5D__ne((art_Port_9D6F5D) &this->to, (art_Port_9D6F5D) &other->to)) return F;
  return T;
}

void art_Connection_A24F1E_string(STACK_FRAME String result, art_Connection_A24F1E this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_9D6F5D_string(SF result, (art_Port_9D6F5D) &this->from);
  String_string(SF result, sep);
  art_Port_9D6F5D_string(SF result, (art_Port_9D6F5D) &this->to);
  String_string(SF result, string(")"));
}

void art_Connection_A24F1E_cprint(art_Connection_A24F1E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_9D6F5D_cprint((art_Port_9D6F5D) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_9D6F5D_cprint((art_Port_9D6F5D) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Connection_A24F1E_apply(STACK_FRAME art_Connection_A24F1E this, art_Port_9D6F5D from, art_Port_9D6F5D to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_A24F1E", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_9D6F5D));
  Type_assign(&this->to, to, sizeof(struct art_Port_9D6F5D));
}