#include <all.h>

// None[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]

B None_6557E1__eq(None_6557E1 this, None_6557E1 other) {
  return T;
}

B None_6557E1__ne(None_6557E1 this, None_6557E1 other);

void None_6557E1_string_(STACK_FRAME String result, None_6557E1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_6557E1_cprint(None_6557E1 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_6557E1__is(STACK_FRAME void* this);
None_6557E1 None_6557E1__as(STACK_FRAME void *this);

void None_6557E1_apply(STACK_FRAME None_6557E1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_6557E1", "apply", 0);
}