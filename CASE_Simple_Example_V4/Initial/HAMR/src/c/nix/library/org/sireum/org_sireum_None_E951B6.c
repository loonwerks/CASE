#include <all.h>

// None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]

B None_E951B6__eq(None_E951B6 this, None_E951B6 other) {
  return T;
}

B None_E951B6__ne(None_E951B6 this, None_E951B6 other);

void None_E951B6_string_(STACK_FRAME String result, None_E951B6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_E951B6_cprint(None_E951B6 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_E951B6__is(STACK_FRAME void* this);
None_E951B6 None_E951B6__as(STACK_FRAME void *this);

void None_E951B6_apply(STACK_FRAME None_E951B6 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_E951B6", "apply", 0);
}