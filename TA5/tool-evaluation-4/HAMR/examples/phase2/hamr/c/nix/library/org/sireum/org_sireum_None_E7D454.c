#include <all.h>

// None[hamr.Drivers.UARTDriver_Impl_Initialization_Api]

B None_E7D454__eq(None_E7D454 this, None_E7D454 other) {
  return T;
}

B None_E7D454__ne(None_E7D454 this, None_E7D454 other);

void None_E7D454_string_(STACK_FRAME String result, None_E7D454 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_E7D454_cprint(None_E7D454 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_E7D454__is(STACK_FRAME void* this);
None_E7D454 None_E7D454__as(STACK_FRAME void *this);

void None_E7D454_apply(STACK_FRAME None_E7D454 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_E7D454", "apply", 0);
}