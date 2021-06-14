#include <all.h>

// None[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]

B None_EC3D0D__eq(None_EC3D0D this, None_EC3D0D other) {
  return T;
}

B None_EC3D0D__ne(None_EC3D0D this, None_EC3D0D other);

void None_EC3D0D_string_(STACK_FRAME String result, None_EC3D0D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_EC3D0D_cprint(None_EC3D0D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_EC3D0D__is(STACK_FRAME void* this);
None_EC3D0D None_EC3D0D__as(STACK_FRAME void *this);

void None_EC3D0D_apply(STACK_FRAME None_EC3D0D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_EC3D0D", "apply", 0);
}