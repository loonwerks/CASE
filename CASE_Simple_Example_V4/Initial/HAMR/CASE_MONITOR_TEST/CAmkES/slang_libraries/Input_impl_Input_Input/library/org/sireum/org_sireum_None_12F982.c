#include <all.h>

// None[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api]

B None_12F982__eq(None_12F982 this, None_12F982 other) {
  return T;
}

B None_12F982__ne(None_12F982 this, None_12F982 other);

void None_12F982_string_(STACK_FRAME String result, None_12F982 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_12F982_cprint(None_12F982 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_12F982__is(STACK_FRAME void* this);
None_12F982 None_12F982__as(STACK_FRAME void *this);

void None_12F982_apply(STACK_FRAME None_12F982 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_12F982", "apply", 0);
}