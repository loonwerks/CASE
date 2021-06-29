#include <all.h>

// None[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]

B None_600AAD__eq(None_600AAD this, None_600AAD other) {
  return T;
}

B None_600AAD__ne(None_600AAD this, None_600AAD other);

void None_600AAD_string_(STACK_FRAME String result, None_600AAD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_600AAD_cprint(None_600AAD this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_600AAD__is(STACK_FRAME void* this);
None_600AAD None_600AAD__as(STACK_FRAME void *this);

void None_600AAD_apply(STACK_FRAME None_600AAD this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_600AAD", "apply", 0);
}