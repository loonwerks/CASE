#include <all.h>

// None[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]

B None_392677__eq(None_392677 this, None_392677 other) {
  return T;
}

B None_392677__ne(None_392677 this, None_392677 other);

void None_392677_string_(STACK_FRAME String result, None_392677 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_392677_cprint(None_392677 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_392677__is(STACK_FRAME void* this);
None_392677 None_392677__as(STACK_FRAME void *this);

void None_392677_apply(STACK_FRAME None_392677 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_392677", "apply", 0);
}