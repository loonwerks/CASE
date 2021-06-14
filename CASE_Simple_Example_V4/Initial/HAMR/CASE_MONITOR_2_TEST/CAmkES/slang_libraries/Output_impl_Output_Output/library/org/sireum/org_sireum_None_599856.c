#include <all.h>

// None[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]

B None_599856__eq(None_599856 this, None_599856 other) {
  return T;
}

B None_599856__ne(None_599856 this, None_599856 other);

void None_599856_string_(STACK_FRAME String result, None_599856 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_599856_cprint(None_599856 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_599856__is(STACK_FRAME void* this);
None_599856 None_599856__as(STACK_FRAME void *this);

void None_599856_apply(STACK_FRAME None_599856 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_599856", "apply", 0);
}