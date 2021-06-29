#include <all.h>

// None[IS[Z, Z]]

B None_5C1355__eq(None_5C1355 this, None_5C1355 other) {
  return T;
}

B None_5C1355__ne(None_5C1355 this, None_5C1355 other);

void None_5C1355_string_(STACK_FRAME String result, None_5C1355 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_5C1355_cprint(None_5C1355 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_5C1355__is(STACK_FRAME void* this);
None_5C1355 None_5C1355__as(STACK_FRAME void *this);

void None_5C1355_apply(STACK_FRAME None_5C1355 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_5C1355", "apply", 0);
}