#include <all.h>

// MNone[art.Bridge]

B MNone_2A2E1D__eq(MNone_2A2E1D this, MNone_2A2E1D other) {
  return T;
}

void MNone_2A2E1D_string(STACK_FRAME String result, MNone_2A2E1D this) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MNone", "string", 0);
  String_string(SF result, string("MNone("));
  String_string(SF result, string(")"));
}

void MNone_2A2E1D_cprint(MNone_2A2E1D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MNone("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void MNone_2A2E1D_apply(STACK_FRAME MNone_2A2E1D this) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MNone_2A2E1D", "apply", 0);
}