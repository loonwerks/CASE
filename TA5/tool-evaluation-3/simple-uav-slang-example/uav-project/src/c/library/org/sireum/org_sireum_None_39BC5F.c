#include <all.h>

// None[art.UPort]

B None_39BC5F__eq(None_39BC5F this, None_39BC5F other) {
  return T;
}

void None_39BC5F_string(STACK_FRAME String result, None_39BC5F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string(SF result, string("None("));
  String_string(SF result, string(")"));
}

void None_39BC5F_cprint(None_39BC5F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

void None_39BC5F_apply(STACK_FRAME None_39BC5F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_39BC5F", "apply", 0);
}