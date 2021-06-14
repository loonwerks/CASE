#include <all.h>

// None[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]

B None_05FEAD__eq(None_05FEAD this, None_05FEAD other) {
  return T;
}

B None_05FEAD__ne(None_05FEAD this, None_05FEAD other);

void None_05FEAD_string_(STACK_FRAME String result, None_05FEAD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_05FEAD_cprint(None_05FEAD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_05FEAD__is(STACK_FRAME void* this);
None_05FEAD None_05FEAD__as(STACK_FRAME void *this);

void None_05FEAD_apply(STACK_FRAME None_05FEAD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_05FEAD", "apply", 0);
}