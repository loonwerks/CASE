#include <all.h>

// None[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]

B None_60EB73__eq(None_60EB73 this, None_60EB73 other) {
  return T;
}

B None_60EB73__ne(None_60EB73 this, None_60EB73 other);

void None_60EB73_string_(STACK_FRAME String result, None_60EB73 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_60EB73_cprint(None_60EB73 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_60EB73__is(STACK_FRAME void* this);
None_60EB73 None_60EB73__as(STACK_FRAME void *this);

void None_60EB73_apply(STACK_FRAME None_60EB73 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_60EB73", "apply", 0);
}