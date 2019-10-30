#include <all.h>

// None[art.DataContent]

B None_964667__eq(None_964667 this, None_964667 other) {
  return T;
}

void None_964667_string(STACK_FRAME String result, None_964667 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string(SF result, string("None("));
  String_string(SF result, string(")"));
}

void None_964667_cprint(None_964667 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void None_964667_apply(STACK_FRAME None_964667 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_964667", "apply", 0);
}