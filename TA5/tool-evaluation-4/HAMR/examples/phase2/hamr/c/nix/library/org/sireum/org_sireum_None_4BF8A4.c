#include <all.h>

// None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]

B None_4BF8A4__eq(None_4BF8A4 this, None_4BF8A4 other) {
  return T;
}

B None_4BF8A4__ne(None_4BF8A4 this, None_4BF8A4 other);

void None_4BF8A4_string_(STACK_FRAME String result, None_4BF8A4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_4BF8A4_cprint(None_4BF8A4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_4BF8A4__is(STACK_FRAME void* this);
None_4BF8A4 None_4BF8A4__as(STACK_FRAME void *this);

void None_4BF8A4_apply(STACK_FRAME None_4BF8A4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_4BF8A4", "apply", 0);
}