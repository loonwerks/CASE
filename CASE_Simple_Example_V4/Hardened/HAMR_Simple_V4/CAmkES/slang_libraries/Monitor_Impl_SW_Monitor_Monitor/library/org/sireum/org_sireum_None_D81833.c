#include <all.h>

// None[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]

B None_D81833__eq(None_D81833 this, None_D81833 other) {
  return T;
}

B None_D81833__ne(None_D81833 this, None_D81833 other);

void None_D81833_string_(STACK_FRAME String result, None_D81833 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_D81833_cprint(None_D81833 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_D81833__is(STACK_FRAME void* this);
None_D81833 None_D81833__as(STACK_FRAME void *this);

void None_D81833_apply(STACK_FRAME None_D81833 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_D81833", "apply", 0);
}