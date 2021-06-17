#include <all.h>

// None[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]

B None_78A1D4__eq(None_78A1D4 this, None_78A1D4 other) {
  return T;
}

B None_78A1D4__ne(None_78A1D4 this, None_78A1D4 other);

void None_78A1D4_string_(STACK_FRAME String result, None_78A1D4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_78A1D4_cprint(None_78A1D4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_78A1D4__is(STACK_FRAME void* this);
None_78A1D4 None_78A1D4__as(STACK_FRAME void *this);

void None_78A1D4_apply(STACK_FRAME None_78A1D4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_78A1D4", "apply", 0);
}