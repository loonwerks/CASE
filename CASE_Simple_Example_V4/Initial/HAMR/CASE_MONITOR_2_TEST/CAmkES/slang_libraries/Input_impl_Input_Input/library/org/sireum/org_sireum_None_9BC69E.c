#include <all.h>

// None[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]

B None_9BC69E__eq(None_9BC69E this, None_9BC69E other) {
  return T;
}

B None_9BC69E__ne(None_9BC69E this, None_9BC69E other);

void None_9BC69E_string_(STACK_FRAME String result, None_9BC69E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_9BC69E_cprint(None_9BC69E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_9BC69E__is(STACK_FRAME void* this);
None_9BC69E None_9BC69E__as(STACK_FRAME void *this);

void None_9BC69E_apply(STACK_FRAME None_9BC69E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_9BC69E", "apply", 0);
}