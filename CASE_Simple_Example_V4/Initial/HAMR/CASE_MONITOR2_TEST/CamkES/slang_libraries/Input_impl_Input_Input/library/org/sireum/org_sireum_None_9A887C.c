#include <all.h>

// None[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api]

B None_9A887C__eq(None_9A887C this, None_9A887C other) {
  return T;
}

B None_9A887C__ne(None_9A887C this, None_9A887C other);

void None_9A887C_string_(STACK_FRAME String result, None_9A887C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_9A887C_cprint(None_9A887C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_9A887C__is(STACK_FRAME void* this);
None_9A887C None_9A887C__as(STACK_FRAME void *this);

void None_9A887C_apply(STACK_FRAME None_9A887C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_9A887C", "apply", 0);
}