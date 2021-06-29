#include <all.h>

// None[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]

B None_43D596__eq(None_43D596 this, None_43D596 other) {
  return T;
}

B None_43D596__ne(None_43D596 this, None_43D596 other);

void None_43D596_string_(STACK_FRAME String result, None_43D596 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_43D596_cprint(None_43D596 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_43D596__is(STACK_FRAME void* this);
None_43D596 None_43D596__as(STACK_FRAME void *this);

void None_43D596_apply(STACK_FRAME None_43D596 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_43D596", "apply", 0);
}