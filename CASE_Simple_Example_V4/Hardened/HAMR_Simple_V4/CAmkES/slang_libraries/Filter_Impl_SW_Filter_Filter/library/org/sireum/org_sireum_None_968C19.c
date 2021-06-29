#include <all.h>

// None[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api]

B None_968C19__eq(None_968C19 this, None_968C19 other) {
  return T;
}

B None_968C19__ne(None_968C19 this, None_968C19 other);

void None_968C19_string_(STACK_FRAME String result, None_968C19 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_968C19_cprint(None_968C19 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_968C19__is(STACK_FRAME void* this);
None_968C19 None_968C19__as(STACK_FRAME void *this);

void None_968C19_apply(STACK_FRAME None_968C19 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_968C19", "apply", 0);
}