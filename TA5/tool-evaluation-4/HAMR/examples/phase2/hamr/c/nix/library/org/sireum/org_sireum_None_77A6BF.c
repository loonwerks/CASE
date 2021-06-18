#include <all.h>

// None[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]

B None_77A6BF__eq(None_77A6BF this, None_77A6BF other) {
  return T;
}

B None_77A6BF__ne(None_77A6BF this, None_77A6BF other);

void None_77A6BF_string_(STACK_FRAME String result, None_77A6BF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_77A6BF_cprint(None_77A6BF this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_77A6BF__is(STACK_FRAME void* this);
None_77A6BF None_77A6BF__as(STACK_FRAME void *this);

void None_77A6BF_apply(STACK_FRAME None_77A6BF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_77A6BF", "apply", 0);
}