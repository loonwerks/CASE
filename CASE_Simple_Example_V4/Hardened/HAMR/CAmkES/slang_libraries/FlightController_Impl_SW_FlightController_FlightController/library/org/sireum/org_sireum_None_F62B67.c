#include <all.h>

// None[HAMR.SW.FlightController_Impl_Operational_Api]

B None_F62B67__eq(None_F62B67 this, None_F62B67 other) {
  return T;
}

B None_F62B67__ne(None_F62B67 this, None_F62B67 other);

void None_F62B67_string_(STACK_FRAME String result, None_F62B67 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_F62B67_cprint(None_F62B67 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_F62B67__is(STACK_FRAME void* this);
None_F62B67 None_F62B67__as(STACK_FRAME void *this);

void None_F62B67_apply(STACK_FRAME None_F62B67 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_F62B67", "apply", 0);
}