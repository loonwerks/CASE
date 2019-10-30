#include <all.h>

// MNone[art.Bridge]

B MNone_2A2E1D__eq(MNone_2A2E1D this, MNone_2A2E1D other) {
  return T;
}

B MNone_2A2E1D__ne(MNone_2A2E1D this, MNone_2A2E1D other);

void MNone_2A2E1D_string_(STACK_FRAME String result, MNone_2A2E1D this) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MNone", "string", 0);
  String_string_(SF result, string("MNone("));
  String_string_(SF result, string(")"));
}

void MNone_2A2E1D_cprint(MNone_2A2E1D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("MNone("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B MNone_2A2E1D__is(STACK_FRAME void* this);
MNone_2A2E1D MNone_2A2E1D__as(STACK_FRAME void *this);

void MNone_2A2E1D_apply(STACK_FRAME MNone_2A2E1D this) {
  DeclNewStackFrame(caller, "MOption.scala", "org.sireum.MNone_2A2E1D", "apply", 0);
}