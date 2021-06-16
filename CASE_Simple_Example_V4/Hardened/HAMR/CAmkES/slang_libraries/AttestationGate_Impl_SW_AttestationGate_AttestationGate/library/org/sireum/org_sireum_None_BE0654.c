#include <all.h>

// None[HAMR.SW.AttestationGate_Impl_Initialization_Api]

B None_BE0654__eq(None_BE0654 this, None_BE0654 other) {
  return T;
}

B None_BE0654__ne(None_BE0654 this, None_BE0654 other);

void None_BE0654_string_(STACK_FRAME String result, None_BE0654 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_BE0654_cprint(None_BE0654 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_BE0654__is(STACK_FRAME void* this);
None_BE0654 None_BE0654__as(STACK_FRAME void *this);

void None_BE0654_apply(STACK_FRAME None_BE0654 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_BE0654", "apply", 0);
}