#include <all.h>

// None[Z]

B None_76463B__eq(None_76463B this, None_76463B other) {
  return T;
}

B None_76463B__ne(None_76463B this, None_76463B other);

void None_76463B_string_(STACK_FRAME String result, None_76463B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_76463B_cprint(None_76463B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_76463B__is(STACK_FRAME void* this);
None_76463B None_76463B__as(STACK_FRAME void *this);

void None_76463B_apply(STACK_FRAME None_76463B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_76463B", "apply", 0);
}