#include <all.h>

// None[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]

B None_04B2B5__eq(None_04B2B5 this, None_04B2B5 other) {
  return T;
}

B None_04B2B5__ne(None_04B2B5 this, None_04B2B5 other);

void None_04B2B5_string_(STACK_FRAME String result, None_04B2B5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_04B2B5_cprint(None_04B2B5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_04B2B5__is(STACK_FRAME void* this);
None_04B2B5 None_04B2B5__as(STACK_FRAME void *this);

void None_04B2B5_apply(STACK_FRAME None_04B2B5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_04B2B5", "apply", 0);
}