#include <all.h>

// None[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]

B None_579C8E__eq(None_579C8E this, None_579C8E other) {
  return T;
}

B None_579C8E__ne(None_579C8E this, None_579C8E other);

void None_579C8E_string_(STACK_FRAME String result, None_579C8E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_579C8E_cprint(None_579C8E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_579C8E__is(STACK_FRAME void* this);
None_579C8E None_579C8E__as(STACK_FRAME void *this);

void None_579C8E_apply(STACK_FRAME None_579C8E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_579C8E", "apply", 0);
}