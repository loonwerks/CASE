#include <all.h>

// art.Port[ACT_Demo_Dec2018__camkes_X.Base_Types.Boolean]

B art_Port_9D6F5D__eq(art_Port_9D6F5D this, art_Port_9D6F5D other) {
  if (Z__ne(this->id, other->id)) return F;
  if (String__ne((String) &this->name, (String) &other->name)) return F;
  if (art_PortMode__ne(this->mode, other->mode)) return F;
  return T;
}

void art_Port_9D6F5D_string(STACK_FRAME String result, art_Port_9D6F5D this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.Port", "string", 0);
  String_string(SF result, string("Port("));
  String sep = string(", ");
  Z_string(SF result, this->id);
  String_string(SF result, sep);
  String_string(SF result, (String) &this->name);
  String_string(SF result, sep);
  art_PortMode_string(SF result, this->mode);
  String_string(SF result, string(")"));
}

void art_Port_9D6F5D_cprint(art_Port_9D6F5D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Port("), isOut);
  String sep = string(", ");
  Z_cprint(this->id, isOut);
  String_cprint(sep, isOut);
  String_cprint((String) &this->name, isOut);
  String_cprint(sep, isOut);
  art_PortMode_cprint(this->mode, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_Port_9D6F5D_apply(STACK_FRAME art_Port_9D6F5D this, Z id, String name, art_PortMode mode) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.art_Port_9D6F5D", "apply", 0);
  this->id = id;
  Type_assign(&this->name, name, sizeof(struct StaticString));
  this->mode = mode;
}