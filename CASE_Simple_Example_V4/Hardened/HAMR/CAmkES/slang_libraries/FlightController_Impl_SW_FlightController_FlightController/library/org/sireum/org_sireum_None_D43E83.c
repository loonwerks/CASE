#include <all.h>

// None[HAMR.SW.FlightController_Impl_Initialization_Api]

B None_D43E83__eq(None_D43E83 this, None_D43E83 other) {
  return T;
}

B None_D43E83__ne(None_D43E83 this, None_D43E83 other);

void None_D43E83_string_(STACK_FRAME String result, None_D43E83 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_D43E83_cprint(None_D43E83 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_D43E83__is(STACK_FRAME void* this);
None_D43E83 None_D43E83__as(STACK_FRAME void *this);

void None_D43E83_apply(STACK_FRAME None_D43E83 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_D43E83", "apply", 0);
}