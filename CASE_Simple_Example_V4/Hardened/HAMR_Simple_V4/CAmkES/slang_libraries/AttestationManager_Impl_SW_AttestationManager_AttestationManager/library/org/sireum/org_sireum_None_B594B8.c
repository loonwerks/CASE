#include <all.h>

// None[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api]

B None_B594B8__eq(None_B594B8 this, None_B594B8 other) {
  return T;
}

B None_B594B8__ne(None_B594B8 this, None_B594B8 other);

void None_B594B8_string_(STACK_FRAME String result, None_B594B8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_B594B8_cprint(None_B594B8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_B594B8__is(STACK_FRAME void* this);
None_B594B8 None_B594B8__as(STACK_FRAME void *this);

void None_B594B8_apply(STACK_FRAME None_B594B8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_B594B8", "apply", 0);
}