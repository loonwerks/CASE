#include <all.h>

// None[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]

B None_7290DE__eq(None_7290DE this, None_7290DE other) {
  return T;
}

B None_7290DE__ne(None_7290DE this, None_7290DE other);

void None_7290DE_string_(STACK_FRAME String result, None_7290DE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_7290DE_cprint(None_7290DE this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_7290DE__is(STACK_FRAME void* this);
None_7290DE None_7290DE__as(STACK_FRAME void *this);

void None_7290DE_apply(STACK_FRAME None_7290DE this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_7290DE", "apply", 0);
}