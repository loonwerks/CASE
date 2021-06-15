#include <all.h>

// Some[HAMR.SW.AttestationTester_Impl_Initialization_Api]

B Some_4F9B23__eq(Some_4F9B23 this, Some_4F9B23 other) {
  if (HAMR_SW_AttestationTester_Impl_Initialization_Api__ne((HAMR_SW_AttestationTester_Impl_Initialization_Api) &this->value, (HAMR_SW_AttestationTester_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_4F9B23__ne(Some_4F9B23 this, Some_4F9B23 other);

void Some_4F9B23_string_(STACK_FRAME String result, Some_4F9B23 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_AttestationTester_Impl_Initialization_Api_string_(SF result, (HAMR_SW_AttestationTester_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_4F9B23_cprint(Some_4F9B23 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_AttestationTester_Impl_Initialization_Api_cprint((HAMR_SW_AttestationTester_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_4F9B23__is(STACK_FRAME void* this);
Some_4F9B23 Some_4F9B23__as(STACK_FRAME void *this);

void Some_4F9B23_apply(STACK_FRAME Some_4F9B23 this, HAMR_SW_AttestationTester_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_4F9B23", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_AttestationTester_Impl_Initialization_Api));
}