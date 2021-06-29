#include <all.h>

// None[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]

B None_45110B__eq(None_45110B this, None_45110B other) {
  return T;
}

B None_45110B__ne(None_45110B this, None_45110B other);

void None_45110B_string_(STACK_FRAME String result, None_45110B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_45110B_cprint(None_45110B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_45110B__is(STACK_FRAME void* this);
None_45110B None_45110B__as(STACK_FRAME void *this);

void None_45110B_apply(STACK_FRAME None_45110B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_45110B", "apply", 0);
}