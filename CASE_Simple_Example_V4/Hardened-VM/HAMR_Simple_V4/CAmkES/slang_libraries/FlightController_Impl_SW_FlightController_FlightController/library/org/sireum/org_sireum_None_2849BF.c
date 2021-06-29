#include <all.h>

// None[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]

B None_2849BF__eq(None_2849BF this, None_2849BF other) {
  return T;
}

B None_2849BF__ne(None_2849BF this, None_2849BF other);

void None_2849BF_string_(STACK_FRAME String result, None_2849BF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_2849BF_cprint(None_2849BF this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_2849BF__is(STACK_FRAME void* this);
None_2849BF None_2849BF__as(STACK_FRAME void *this);

void None_2849BF_apply(STACK_FRAME None_2849BF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_2849BF", "apply", 0);
}