#include <all.h>

// None[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api]

B None_A19CD9__eq(None_A19CD9 this, None_A19CD9 other) {
  return T;
}

B None_A19CD9__ne(None_A19CD9 this, None_A19CD9 other);

void None_A19CD9_string_(STACK_FRAME String result, None_A19CD9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_A19CD9_cprint(None_A19CD9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_A19CD9__is(STACK_FRAME void* this);
None_A19CD9 None_A19CD9__as(STACK_FRAME void *this);

void None_A19CD9_apply(STACK_FRAME None_A19CD9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_A19CD9", "apply", 0);
}