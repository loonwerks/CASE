#include <all.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]

B art_Connection_CAF041__eq(art_Connection_CAF041 this, art_Connection_CAF041 other) {
  if (art_Port_446859__ne((art_Port_446859) &this->from, (art_Port_446859) &other->from)) return F;
  if (art_Port_446859__ne((art_Port_446859) &this->to, (art_Port_446859) &other->to)) return F;
  return T;
}

void art_Connection_CAF041_string(STACK_FRAME String result, art_Connection_CAF041 this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Connection", "string", 0);
  String_string(SF result, string("Connection("));
  String sep = string(", ");
  art_Port_446859_string(SF result, (art_Port_446859) &this->from);
  String_string(SF result, sep);
  art_Port_446859_string(SF result, (art_Port_446859) &this->to);
  String_string(SF result, string(")"));
}

void art_Connection_CAF041_cprint(art_Connection_CAF041 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Connection("), isOut);
  String sep = string(", ");
  art_Port_446859_cprint((art_Port_446859) &this->from, isOut);
  String_cprint(sep, isOut);
  art_Port_446859_cprint((art_Port_446859) &this->to, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Connection_CAF041_apply(STACK_FRAME art_Connection_CAF041 this, art_Port_446859 from, art_Port_446859 to) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Connection_CAF041", "apply", 0);
  Type_assign(&this->from, from, sizeof(struct art_Port_446859));
  Type_assign(&this->to, to, sizeof(struct art_Port_446859));
}