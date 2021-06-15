#include <all.h>

// None[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]

B None_FF6291__eq(None_FF6291 this, None_FF6291 other) {
  return T;
}

B None_FF6291__ne(None_FF6291 this, None_FF6291 other);

void None_FF6291_string_(STACK_FRAME String result, None_FF6291 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_FF6291_cprint(None_FF6291 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_FF6291__is(STACK_FRAME void* this);
None_FF6291 None_FF6291__as(STACK_FRAME void *this);

void None_FF6291_apply(STACK_FRAME None_FF6291 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_FF6291", "apply", 0);
}