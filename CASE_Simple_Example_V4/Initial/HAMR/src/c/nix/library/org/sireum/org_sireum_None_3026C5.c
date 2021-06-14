#include <all.h>

// None[IS[Z, B]]

B None_3026C5__eq(None_3026C5 this, None_3026C5 other) {
  return T;
}

B None_3026C5__ne(None_3026C5 this, None_3026C5 other);

void None_3026C5_string_(STACK_FRAME String result, None_3026C5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3026C5_cprint(None_3026C5 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3026C5__is(STACK_FRAME void* this);
None_3026C5 None_3026C5__as(STACK_FRAME void *this);

void None_3026C5_apply(STACK_FRAME None_3026C5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3026C5", "apply", 0);
}