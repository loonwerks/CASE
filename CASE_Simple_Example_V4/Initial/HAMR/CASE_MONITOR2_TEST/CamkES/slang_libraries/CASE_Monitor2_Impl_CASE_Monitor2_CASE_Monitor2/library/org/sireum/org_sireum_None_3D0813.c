#include <all.h>

// None[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api]

B None_3D0813__eq(None_3D0813 this, None_3D0813 other) {
  return T;
}

B None_3D0813__ne(None_3D0813 this, None_3D0813 other);

void None_3D0813_string_(STACK_FRAME String result, None_3D0813 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3D0813_cprint(None_3D0813 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3D0813__is(STACK_FRAME void* this);
None_3D0813 None_3D0813__as(STACK_FRAME void *this);

void None_3D0813_apply(STACK_FRAME None_3D0813 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3D0813", "apply", 0);
}