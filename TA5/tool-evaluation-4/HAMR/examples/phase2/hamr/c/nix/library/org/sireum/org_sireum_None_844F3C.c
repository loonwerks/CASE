#include <all.h>

// None[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]

B None_844F3C__eq(None_844F3C this, None_844F3C other) {
  return T;
}

B None_844F3C__ne(None_844F3C this, None_844F3C other);

void None_844F3C_string_(STACK_FRAME String result, None_844F3C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_844F3C_cprint(None_844F3C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_844F3C__is(STACK_FRAME void* this);
None_844F3C None_844F3C__as(STACK_FRAME void *this);

void None_844F3C_apply(STACK_FRAME None_844F3C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_844F3C", "apply", 0);
}