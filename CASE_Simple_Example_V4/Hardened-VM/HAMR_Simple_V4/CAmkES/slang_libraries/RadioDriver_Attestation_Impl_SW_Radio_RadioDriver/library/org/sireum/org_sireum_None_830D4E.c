#include <all.h>

// None[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]

B None_830D4E__eq(None_830D4E this, None_830D4E other) {
  return T;
}

B None_830D4E__ne(None_830D4E this, None_830D4E other);

void None_830D4E_string_(STACK_FRAME String result, None_830D4E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_830D4E_cprint(None_830D4E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_830D4E__is(STACK_FRAME void* this);
None_830D4E None_830D4E__as(STACK_FRAME void *this);

void None_830D4E_apply(STACK_FRAME None_830D4E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_830D4E", "apply", 0);
}