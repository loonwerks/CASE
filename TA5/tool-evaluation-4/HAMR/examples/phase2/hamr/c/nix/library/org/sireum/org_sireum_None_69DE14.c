#include <all.h>

// None[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]

B None_69DE14__eq(None_69DE14 this, None_69DE14 other) {
  return T;
}

B None_69DE14__ne(None_69DE14 this, None_69DE14 other);

void None_69DE14_string_(STACK_FRAME String result, None_69DE14 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_69DE14_cprint(None_69DE14 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_69DE14__is(STACK_FRAME void* this);
None_69DE14 None_69DE14__as(STACK_FRAME void *this);

void None_69DE14_apply(STACK_FRAME None_69DE14 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_69DE14", "apply", 0);
}