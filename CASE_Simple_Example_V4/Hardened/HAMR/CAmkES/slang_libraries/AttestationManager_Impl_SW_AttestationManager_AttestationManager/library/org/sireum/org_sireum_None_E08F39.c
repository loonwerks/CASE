#include <all.h>

// None[HAMR.SW.AttestationManager_Impl_Initialization_Api]

B None_E08F39__eq(None_E08F39 this, None_E08F39 other) {
  return T;
}

B None_E08F39__ne(None_E08F39 this, None_E08F39 other);

void None_E08F39_string_(STACK_FRAME String result, None_E08F39 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_E08F39_cprint(None_E08F39 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_E08F39__is(STACK_FRAME void* this);
None_E08F39 None_E08F39__as(STACK_FRAME void *this);

void None_E08F39_apply(STACK_FRAME None_E08F39 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_E08F39", "apply", 0);
}