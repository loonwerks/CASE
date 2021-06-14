#include <all.h>

// None[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api]

B None_1328AE__eq(None_1328AE this, None_1328AE other) {
  return T;
}

B None_1328AE__ne(None_1328AE this, None_1328AE other);

void None_1328AE_string_(STACK_FRAME String result, None_1328AE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_1328AE_cprint(None_1328AE this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_1328AE__is(STACK_FRAME void* this);
None_1328AE None_1328AE__as(STACK_FRAME void *this);

void None_1328AE_apply(STACK_FRAME None_1328AE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_1328AE", "apply", 0);
}