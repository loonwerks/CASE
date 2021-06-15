#include <all.h>

// None[HAMR.SW.FlightPlanner_Impl_Initialization_Api]

B None_BA6ABF__eq(None_BA6ABF this, None_BA6ABF other) {
  return T;
}

B None_BA6ABF__ne(None_BA6ABF this, None_BA6ABF other);

void None_BA6ABF_string_(STACK_FRAME String result, None_BA6ABF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_BA6ABF_cprint(None_BA6ABF this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_BA6ABF__is(STACK_FRAME void* this);
None_BA6ABF None_BA6ABF__as(STACK_FRAME void *this);

void None_BA6ABF_apply(STACK_FRAME None_BA6ABF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_BA6ABF", "apply", 0);
}