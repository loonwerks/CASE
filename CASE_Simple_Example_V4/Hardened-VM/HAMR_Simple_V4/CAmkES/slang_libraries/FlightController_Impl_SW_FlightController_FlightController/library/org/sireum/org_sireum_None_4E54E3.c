#include <all.h>

// None[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]

B None_4E54E3__eq(None_4E54E3 this, None_4E54E3 other) {
  return T;
}

B None_4E54E3__ne(None_4E54E3 this, None_4E54E3 other);

void None_4E54E3_string_(STACK_FRAME String result, None_4E54E3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_4E54E3_cprint(None_4E54E3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_4E54E3__is(STACK_FRAME void* this);
None_4E54E3 None_4E54E3__as(STACK_FRAME void *this);

void None_4E54E3_apply(STACK_FRAME None_4E54E3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_4E54E3", "apply", 0);
}