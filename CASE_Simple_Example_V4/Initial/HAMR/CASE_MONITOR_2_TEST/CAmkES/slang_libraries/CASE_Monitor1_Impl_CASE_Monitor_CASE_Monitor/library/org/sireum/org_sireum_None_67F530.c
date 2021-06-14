#include <all.h>

// None[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

B None_67F530__eq(None_67F530 this, None_67F530 other) {
  return T;
}

B None_67F530__ne(None_67F530 this, None_67F530 other);

void None_67F530_string_(STACK_FRAME String result, None_67F530 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_67F530_cprint(None_67F530 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_67F530__is(STACK_FRAME void* this);
None_67F530 None_67F530__as(STACK_FRAME void *this);

void None_67F530_apply(STACK_FRAME None_67F530 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_67F530", "apply", 0);
}