#include <all.h>

// None[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

B None_8805C8__eq(None_8805C8 this, None_8805C8 other) {
  return T;
}

B None_8805C8__ne(None_8805C8 this, None_8805C8 other);

void None_8805C8_string_(STACK_FRAME String result, None_8805C8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_8805C8_cprint(None_8805C8 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_8805C8__is(STACK_FRAME void* this);
None_8805C8 None_8805C8__as(STACK_FRAME void *this);

void None_8805C8_apply(STACK_FRAME None_8805C8 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_8805C8", "apply", 0);
}