#include <all.h>

// None[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api]

B None_32B473__eq(None_32B473 this, None_32B473 other) {
  return T;
}

B None_32B473__ne(None_32B473 this, None_32B473 other);

void None_32B473_string_(STACK_FRAME String result, None_32B473 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_32B473_cprint(None_32B473 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_32B473__is(STACK_FRAME void* this);
None_32B473 None_32B473__as(STACK_FRAME void *this);

void None_32B473_apply(STACK_FRAME None_32B473 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_32B473", "apply", 0);
}