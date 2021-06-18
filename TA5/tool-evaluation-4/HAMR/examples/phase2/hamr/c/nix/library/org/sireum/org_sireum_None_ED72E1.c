#include <all.h>

// None[art.Empty]

B None_ED72E1__eq(None_ED72E1 this, None_ED72E1 other) {
  return T;
}

B None_ED72E1__ne(None_ED72E1 this, None_ED72E1 other);

void None_ED72E1_string_(STACK_FRAME String result, None_ED72E1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_ED72E1_cprint(None_ED72E1 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_ED72E1__is(STACK_FRAME void* this);
None_ED72E1 None_ED72E1__as(STACK_FRAME void *this);

void None_ED72E1_apply(STACK_FRAME None_ED72E1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_ED72E1", "apply", 0);
}