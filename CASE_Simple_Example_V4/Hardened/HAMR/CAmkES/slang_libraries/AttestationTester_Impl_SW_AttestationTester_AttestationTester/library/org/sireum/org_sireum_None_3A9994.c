#include <all.h>

// None[HAMR.SW.AttestationTester_Impl_Operational_Api]

B None_3A9994__eq(None_3A9994 this, None_3A9994 other) {
  return T;
}

B None_3A9994__ne(None_3A9994 this, None_3A9994 other);

void None_3A9994_string_(STACK_FRAME String result, None_3A9994 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3A9994_cprint(None_3A9994 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3A9994__is(STACK_FRAME void* this);
None_3A9994 None_3A9994__as(STACK_FRAME void *this);

void None_3A9994_apply(STACK_FRAME None_3A9994 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3A9994", "apply", 0);
}