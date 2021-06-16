#include <all.h>

// None[HAMR.SW.Filter_Impl_Operational_Api]

B None_10267D__eq(None_10267D this, None_10267D other) {
  return T;
}

B None_10267D__ne(None_10267D this, None_10267D other);

void None_10267D_string_(STACK_FRAME String result, None_10267D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_10267D_cprint(None_10267D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_10267D__is(STACK_FRAME void* this);
None_10267D None_10267D__as(STACK_FRAME void *this);

void None_10267D_apply(STACK_FRAME None_10267D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_10267D", "apply", 0);
}