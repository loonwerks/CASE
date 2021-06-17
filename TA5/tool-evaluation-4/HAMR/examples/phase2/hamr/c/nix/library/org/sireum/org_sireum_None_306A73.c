#include <all.h>

// None[hamr.SW.UxAS_thr_Impl_Initialization_Api]

B None_306A73__eq(None_306A73 this, None_306A73 other) {
  return T;
}

B None_306A73__ne(None_306A73 this, None_306A73 other);

void None_306A73_string_(STACK_FRAME String result, None_306A73 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_306A73_cprint(None_306A73 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_306A73__is(STACK_FRAME void* this);
None_306A73 None_306A73__as(STACK_FRAME void *this);

void None_306A73_apply(STACK_FRAME None_306A73 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_306A73", "apply", 0);
}