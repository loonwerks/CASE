#include <all.h>

// None[(Z, art.DataContent)]

B None_93AA2B__eq(None_93AA2B this, None_93AA2B other) {
  return T;
}

B None_93AA2B__ne(None_93AA2B this, None_93AA2B other);

void None_93AA2B_string_(STACK_FRAME String result, None_93AA2B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_93AA2B_cprint(None_93AA2B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_93AA2B__is(STACK_FRAME void* this);
None_93AA2B None_93AA2B__as(STACK_FRAME void *this);

void None_93AA2B_apply(STACK_FRAME None_93AA2B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_93AA2B", "apply", 0);
}