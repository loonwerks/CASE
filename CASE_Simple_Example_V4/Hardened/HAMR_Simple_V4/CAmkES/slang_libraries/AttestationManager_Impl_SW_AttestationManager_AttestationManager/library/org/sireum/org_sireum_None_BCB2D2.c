#include <all.h>

// None[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api]

B None_BCB2D2__eq(None_BCB2D2 this, None_BCB2D2 other) {
  return T;
}

B None_BCB2D2__ne(None_BCB2D2 this, None_BCB2D2 other);

void None_BCB2D2_string_(STACK_FRAME String result, None_BCB2D2 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_BCB2D2_cprint(None_BCB2D2 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_BCB2D2__is(STACK_FRAME void* this);
None_BCB2D2 None_BCB2D2__as(STACK_FRAME void *this);

void None_BCB2D2_apply(STACK_FRAME None_BCB2D2 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_BCB2D2", "apply", 0);
}