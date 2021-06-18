#include <all.h>

// None[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]

B None_FE10D0__eq(None_FE10D0 this, None_FE10D0 other) {
  return T;
}

B None_FE10D0__ne(None_FE10D0 this, None_FE10D0 other);

void None_FE10D0_string_(STACK_FRAME String result, None_FE10D0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_FE10D0_cprint(None_FE10D0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_FE10D0__is(STACK_FRAME void* this);
None_FE10D0 None_FE10D0__as(STACK_FRAME void *this);

void None_FE10D0_apply(STACK_FRAME None_FE10D0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_FE10D0", "apply", 0);
}