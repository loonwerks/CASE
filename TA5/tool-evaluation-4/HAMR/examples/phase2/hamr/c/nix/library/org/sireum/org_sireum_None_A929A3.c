#include <all.h>

// None[hamr.Drivers.UARTDriver_Impl_Operational_Api]

B None_A929A3__eq(None_A929A3 this, None_A929A3 other) {
  return T;
}

B None_A929A3__ne(None_A929A3 this, None_A929A3 other);

void None_A929A3_string_(STACK_FRAME String result, None_A929A3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_A929A3_cprint(None_A929A3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_A929A3__is(STACK_FRAME void* this);
None_A929A3 None_A929A3__as(STACK_FRAME void *this);

void None_A929A3_apply(STACK_FRAME None_A929A3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_A929A3", "apply", 0);
}