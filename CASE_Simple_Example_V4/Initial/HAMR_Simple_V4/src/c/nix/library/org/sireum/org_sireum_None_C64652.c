#include <all.h>

// None[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]

B None_C64652__eq(None_C64652 this, None_C64652 other) {
  return T;
}

B None_C64652__ne(None_C64652 this, None_C64652 other);

void None_C64652_string_(STACK_FRAME String result, None_C64652 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_C64652_cprint(None_C64652 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_C64652__is(STACK_FRAME void* this);
None_C64652 None_C64652__as(STACK_FRAME void *this);

void None_C64652_apply(STACK_FRAME None_C64652 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_C64652", "apply", 0);
}