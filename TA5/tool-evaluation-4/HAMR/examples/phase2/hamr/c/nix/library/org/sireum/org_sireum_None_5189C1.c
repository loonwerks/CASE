#include <all.h>

// None[hamr.SW.UxAS_thr_Impl_Operational_Api]

B None_5189C1__eq(None_5189C1 this, None_5189C1 other) {
  return T;
}

B None_5189C1__ne(None_5189C1 this, None_5189C1 other);

void None_5189C1_string_(STACK_FRAME String result, None_5189C1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_5189C1_cprint(None_5189C1 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_5189C1__is(STACK_FRAME void* this);
None_5189C1 None_5189C1__as(STACK_FRAME void *this);

void None_5189C1_apply(STACK_FRAME None_5189C1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_5189C1", "apply", 0);
}