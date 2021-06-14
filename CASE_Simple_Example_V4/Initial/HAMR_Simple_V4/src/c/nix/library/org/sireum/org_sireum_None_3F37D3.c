#include <all.h>

// None[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]

B None_3F37D3__eq(None_3F37D3 this, None_3F37D3 other) {
  return T;
}

B None_3F37D3__ne(None_3F37D3 this, None_3F37D3 other);

void None_3F37D3_string_(STACK_FRAME String result, None_3F37D3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_3F37D3_cprint(None_3F37D3 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_3F37D3__is(STACK_FRAME void* this);
None_3F37D3 None_3F37D3__as(STACK_FRAME void *this);

void None_3F37D3_apply(STACK_FRAME None_3F37D3 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_3F37D3", "apply", 0);
}