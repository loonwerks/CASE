#include <all.h>

// None[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

B None_C84E72__eq(None_C84E72 this, None_C84E72 other) {
  return T;
}

B None_C84E72__ne(None_C84E72 this, None_C84E72 other);

void None_C84E72_string_(STACK_FRAME String result, None_C84E72 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_C84E72_cprint(None_C84E72 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_C84E72__is(STACK_FRAME void* this);
None_C84E72 None_C84E72__as(STACK_FRAME void *this);

void None_C84E72_apply(STACK_FRAME None_C84E72 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_C84E72", "apply", 0);
}