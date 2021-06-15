#include <all.h>

// None[HAMR.SW.FlightPlanner_Impl_Operational_Api]

B None_3EE2E0__eq(None_3EE2E0 this, None_3EE2E0 other) {
  return T;
}

B None_3EE2E0__ne(None_3EE2E0 this, None_3EE2E0 other);

void None_3EE2E0_string_(STACK_FRAME String result, None_3EE2E0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3EE2E0_cprint(None_3EE2E0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3EE2E0__is(STACK_FRAME void* this);
None_3EE2E0 None_3EE2E0__as(STACK_FRAME void *this);

void None_3EE2E0_apply(STACK_FRAME None_3EE2E0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3EE2E0", "apply", 0);
}