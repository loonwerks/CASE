#include <all.h>

// None[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api]

B None_3F8D24__eq(None_3F8D24 this, None_3F8D24 other) {
  return T;
}

B None_3F8D24__ne(None_3F8D24 this, None_3F8D24 other);

void None_3F8D24_string_(STACK_FRAME String result, None_3F8D24 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3F8D24_cprint(None_3F8D24 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3F8D24__is(STACK_FRAME void* this);
None_3F8D24 None_3F8D24__as(STACK_FRAME void *this);

void None_3F8D24_apply(STACK_FRAME None_3F8D24 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3F8D24", "apply", 0);
}