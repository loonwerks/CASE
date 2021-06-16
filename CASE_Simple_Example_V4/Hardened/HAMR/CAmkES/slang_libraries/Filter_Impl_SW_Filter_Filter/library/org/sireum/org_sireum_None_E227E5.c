#include <all.h>

// None[HAMR.SW.Filter_Impl_Initialization_Api]

B None_E227E5__eq(None_E227E5 this, None_E227E5 other) {
  return T;
}

B None_E227E5__ne(None_E227E5 this, None_E227E5 other);

void None_E227E5_string_(STACK_FRAME String result, None_E227E5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_E227E5_cprint(None_E227E5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_E227E5__is(STACK_FRAME void* this);
None_E227E5 None_E227E5__as(STACK_FRAME void *this);

void None_E227E5_apply(STACK_FRAME None_E227E5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_E227E5", "apply", 0);
}