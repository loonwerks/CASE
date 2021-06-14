#include <all.h>

// None[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api]

B None_863C2F__eq(None_863C2F this, None_863C2F other) {
  return T;
}

B None_863C2F__ne(None_863C2F this, None_863C2F other);

void None_863C2F_string_(STACK_FRAME String result, None_863C2F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_863C2F_cprint(None_863C2F this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_863C2F__is(STACK_FRAME void* this);
None_863C2F None_863C2F__as(STACK_FRAME void *this);

void None_863C2F_apply(STACK_FRAME None_863C2F this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_863C2F", "apply", 0);
}