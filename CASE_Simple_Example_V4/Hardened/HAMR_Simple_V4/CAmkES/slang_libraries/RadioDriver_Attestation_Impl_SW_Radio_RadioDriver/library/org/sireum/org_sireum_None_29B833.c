#include <all.h>

// None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]

B None_29B833__eq(None_29B833 this, None_29B833 other) {
  return T;
}

B None_29B833__ne(None_29B833 this, None_29B833 other);

void None_29B833_string_(STACK_FRAME String result, None_29B833 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_29B833_cprint(None_29B833 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_29B833__is(STACK_FRAME void* this);
None_29B833 None_29B833__as(STACK_FRAME void *this);

void None_29B833_apply(STACK_FRAME None_29B833 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_29B833", "apply", 0);
}