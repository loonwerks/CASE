#include <all.h>

// None[HAMR.SW.Monitor_Impl_Initialization_Api]

B None_2A8B4A__eq(None_2A8B4A this, None_2A8B4A other) {
  return T;
}

B None_2A8B4A__ne(None_2A8B4A this, None_2A8B4A other);

void None_2A8B4A_string_(STACK_FRAME String result, None_2A8B4A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_2A8B4A_cprint(None_2A8B4A this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_2A8B4A__is(STACK_FRAME void* this);
None_2A8B4A None_2A8B4A__as(STACK_FRAME void *this);

void None_2A8B4A_apply(STACK_FRAME None_2A8B4A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_2A8B4A", "apply", 0);
}