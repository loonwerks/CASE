#include <all.h>

// None[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]

B None_556BC5__eq(None_556BC5 this, None_556BC5 other) {
  return T;
}

B None_556BC5__ne(None_556BC5 this, None_556BC5 other);

void None_556BC5_string_(STACK_FRAME String result, None_556BC5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_556BC5_cprint(None_556BC5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_556BC5__is(STACK_FRAME void* this);
None_556BC5 None_556BC5__as(STACK_FRAME void *this);

void None_556BC5_apply(STACK_FRAME None_556BC5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_556BC5", "apply", 0);
}