#include <all.h>

// None[HAMR.SW.AttestationGate_Impl_Operational_Api]

B None_118401__eq(None_118401 this, None_118401 other) {
  return T;
}

B None_118401__ne(None_118401 this, None_118401 other);

void None_118401_string_(STACK_FRAME String result, None_118401 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_118401_cprint(None_118401 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_118401__is(STACK_FRAME void* this);
None_118401 None_118401__as(STACK_FRAME void *this);

void None_118401_apply(STACK_FRAME None_118401 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_118401", "apply", 0);
}