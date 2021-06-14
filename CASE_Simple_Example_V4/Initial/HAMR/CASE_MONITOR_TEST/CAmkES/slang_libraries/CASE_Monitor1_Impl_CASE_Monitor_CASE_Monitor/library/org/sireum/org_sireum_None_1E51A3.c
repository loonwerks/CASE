#include <all.h>

// None[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

B None_1E51A3__eq(None_1E51A3 this, None_1E51A3 other) {
  return T;
}

B None_1E51A3__ne(None_1E51A3 this, None_1E51A3 other);

void None_1E51A3_string_(STACK_FRAME String result, None_1E51A3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_1E51A3_cprint(None_1E51A3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_1E51A3__is(STACK_FRAME void* this);
None_1E51A3 None_1E51A3__as(STACK_FRAME void *this);

void None_1E51A3_apply(STACK_FRAME None_1E51A3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_1E51A3", "apply", 0);
}