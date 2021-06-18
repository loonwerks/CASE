#include <all.h>

// None[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]

B None_C554A3__eq(None_C554A3 this, None_C554A3 other) {
  return T;
}

B None_C554A3__ne(None_C554A3 this, None_C554A3 other);

void None_C554A3_string_(STACK_FRAME String result, None_C554A3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_C554A3_cprint(None_C554A3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_C554A3__is(STACK_FRAME void* this);
None_C554A3 None_C554A3__as(STACK_FRAME void *this);

void None_C554A3_apply(STACK_FRAME None_C554A3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_C554A3", "apply", 0);
}