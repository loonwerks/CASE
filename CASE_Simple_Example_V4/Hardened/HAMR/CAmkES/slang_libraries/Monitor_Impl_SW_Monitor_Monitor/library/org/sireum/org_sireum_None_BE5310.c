#include <all.h>

// None[HAMR.SW.Monitor_Impl_Operational_Api]

B None_BE5310__eq(None_BE5310 this, None_BE5310 other) {
  return T;
}

B None_BE5310__ne(None_BE5310 this, None_BE5310 other);

void None_BE5310_string_(STACK_FRAME String result, None_BE5310 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_BE5310_cprint(None_BE5310 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_BE5310__is(STACK_FRAME void* this);
None_BE5310 None_BE5310__as(STACK_FRAME void *this);

void None_BE5310_apply(STACK_FRAME None_BE5310 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_BE5310", "apply", 0);
}