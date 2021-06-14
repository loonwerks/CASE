#include <all.h>

// None[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api]

B None_B2E40A__eq(None_B2E40A this, None_B2E40A other) {
  return T;
}

B None_B2E40A__ne(None_B2E40A this, None_B2E40A other);

void None_B2E40A_string_(STACK_FRAME String result, None_B2E40A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_B2E40A_cprint(None_B2E40A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_B2E40A__is(STACK_FRAME void* this);
None_B2E40A None_B2E40A__as(STACK_FRAME void *this);

void None_B2E40A_apply(STACK_FRAME None_B2E40A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_B2E40A", "apply", 0);
}