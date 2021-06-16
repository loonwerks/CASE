#include <all.h>

// None[HAMR.SW.AttestationManager_Impl_Operational_Api]

B None_AAA378__eq(None_AAA378 this, None_AAA378 other) {
  return T;
}

B None_AAA378__ne(None_AAA378 this, None_AAA378 other);

void None_AAA378_string_(STACK_FRAME String result, None_AAA378 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None", "string", 0);
  String_string_(SF result, string("None("));
  String_string_(SF result, string(")"));
}

void None_AAA378_cprint(None_AAA378 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("None("), isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B None_AAA378__is(STACK_FRAME void* this);
None_AAA378 None_AAA378__as(STACK_FRAME void *this);

void None_AAA378_apply(STACK_FRAME None_AAA378 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.None_AAA378", "apply", 0);
}