#include <all.h>

// None[ACT_Demo_Dec2018__camkes_X.SW.Mission]

B None_0CCA05__eq(None_0CCA05 this, None_0CCA05 other) {
  return T;
}

void None_0CCA05_string(STACK_FRAME String result, None_0CCA05 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string(SF result, string("None("));
  String_string(SF result, string(")"));
}

void None_0CCA05_cprint(None_0CCA05 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void None_0CCA05_apply(STACK_FRAME None_0CCA05 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_0CCA05", "apply", 0);
}