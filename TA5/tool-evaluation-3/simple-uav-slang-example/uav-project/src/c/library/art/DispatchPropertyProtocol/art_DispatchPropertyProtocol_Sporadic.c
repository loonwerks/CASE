#include <all.h>

// art.DispatchPropertyProtocol.Sporadic

B art_DispatchPropertyProtocol_Sporadic__eq(art_DispatchPropertyProtocol_Sporadic this, art_DispatchPropertyProtocol_Sporadic other) {
  if (Z__ne(this->min, other->min)) return F;
  return T;
}

void art_DispatchPropertyProtocol_Sporadic_string(STACK_FRAME String result, art_DispatchPropertyProtocol_Sporadic this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.DispatchPropertyProtocol.Sporadic", "string", 0);
  String_string(SF result, string("Sporadic("));
  Z_string(SF result, this->min);
  String_string(SF result, string(")"));
}

void art_DispatchPropertyProtocol_Sporadic_cprint(art_DispatchPropertyProtocol_Sporadic this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Sporadic("), isOut);
  Z_cprint(this->min, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void art_DispatchPropertyProtocol_Sporadic_apply(STACK_FRAME art_DispatchPropertyProtocol_Sporadic this, Z min) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.DispatchPropertyProtocol.Sporadic", "apply", 0);
  this->min = min;
}