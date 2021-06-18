#include <all.h>

// None[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]

B None_D64418__eq(None_D64418 this, None_D64418 other) {
  return T;
}

B None_D64418__ne(None_D64418 this, None_D64418 other);

void None_D64418_string_(STACK_FRAME String result, None_D64418 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_D64418_cprint(None_D64418 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_D64418__is(STACK_FRAME void* this);
None_D64418 None_D64418__as(STACK_FRAME void *this);

void None_D64418_apply(STACK_FRAME None_D64418 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_D64418", "apply", 0);
}