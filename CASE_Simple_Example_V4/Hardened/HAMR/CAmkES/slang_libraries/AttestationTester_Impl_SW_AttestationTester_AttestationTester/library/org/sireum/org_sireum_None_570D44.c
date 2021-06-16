#include <all.h>

// None[HAMR.SW.AttestationTester_Impl_Initialization_Api]

B None_570D44__eq(None_570D44 this, None_570D44 other) {
  return T;
}

B None_570D44__ne(None_570D44 this, None_570D44 other);

void None_570D44_string_(STACK_FRAME String result, None_570D44 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_570D44_cprint(None_570D44 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_570D44__is(STACK_FRAME void* this);
None_570D44 None_570D44__as(STACK_FRAME void *this);

void None_570D44_apply(STACK_FRAME None_570D44 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_570D44", "apply", 0);
}