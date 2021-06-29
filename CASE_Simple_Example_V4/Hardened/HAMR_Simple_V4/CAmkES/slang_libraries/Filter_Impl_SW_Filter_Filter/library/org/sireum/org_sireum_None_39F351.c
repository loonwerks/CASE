#include <all.h>

// None[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api]

B None_39F351__eq(None_39F351 this, None_39F351 other) {
  return T;
}

B None_39F351__ne(None_39F351 this, None_39F351 other);

void None_39F351_string_(STACK_FRAME String result, None_39F351 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_39F351_cprint(None_39F351 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_39F351__is(STACK_FRAME void* this);
None_39F351 None_39F351__as(STACK_FRAME void *this);

void None_39F351_apply(STACK_FRAME None_39F351 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_39F351", "apply", 0);
}