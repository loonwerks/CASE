#include <all.h>

// art.DispatchPropertyProtocol.Periodic

B art_DispatchPropertyProtocol_Periodic__eq(art_DispatchPropertyProtocol_Periodic this, art_DispatchPropertyProtocol_Periodic other) {
  if (Z__ne(this->period, other->period)) return F;
  return T;
}

B art_DispatchPropertyProtocol_Periodic__ne(art_DispatchPropertyProtocol_Periodic this, art_DispatchPropertyProtocol_Periodic other);

void art_DispatchPropertyProtocol_Periodic_string_(STACK_FRAME String result, art_DispatchPropertyProtocol_Periodic this) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.DispatchPropertyProtocol.Periodic", "string", 0);
  String_string_(SF result, string("Periodic("));
  Z_string_(SF result, this->period);
  String_string_(SF result, string(")"));
}

void art_DispatchPropertyProtocol_Periodic_cprint(art_DispatchPropertyProtocol_Periodic this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Periodic("), isOut);
  Z_cprint(this->period, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B art_DispatchPropertyProtocol_Periodic__is(STACK_FRAME void* this);
art_DispatchPropertyProtocol_Periodic art_DispatchPropertyProtocol_Periodic__as(STACK_FRAME void *this);

void art_DispatchPropertyProtocol_Periodic_apply(STACK_FRAME art_DispatchPropertyProtocol_Periodic this, Z period) {
  DeclNewStackFrame(caller, "ArchitectureDescription.scala", "art.DispatchPropertyProtocol.Periodic", "apply", 0);
  this->period = period;
}