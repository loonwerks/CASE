#include <all.h>

// None[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]

B None_3A40F5__eq(None_3A40F5 this, None_3A40F5 other) {
  return T;
}

B None_3A40F5__ne(None_3A40F5 this, None_3A40F5 other);

void None_3A40F5_string_(STACK_FRAME String result, None_3A40F5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3A40F5_cprint(None_3A40F5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3A40F5__is(STACK_FRAME void* this);
None_3A40F5 None_3A40F5__as(STACK_FRAME void *this);

void None_3A40F5_apply(STACK_FRAME None_3A40F5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3A40F5", "apply", 0);
}