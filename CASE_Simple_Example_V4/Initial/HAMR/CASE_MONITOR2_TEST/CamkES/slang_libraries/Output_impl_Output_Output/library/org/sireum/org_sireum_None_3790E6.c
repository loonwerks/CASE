#include <all.h>

// None[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api]

B None_3790E6__eq(None_3790E6 this, None_3790E6 other) {
  return T;
}

B None_3790E6__ne(None_3790E6 this, None_3790E6 other);

void None_3790E6_string_(STACK_FRAME String result, None_3790E6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3790E6_cprint(None_3790E6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3790E6__is(STACK_FRAME void* this);
None_3790E6 None_3790E6__as(STACK_FRAME void *this);

void None_3790E6_apply(STACK_FRAME None_3790E6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3790E6", "apply", 0);
}