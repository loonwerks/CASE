#include <all.h>

// Some[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]

B Some_3A7E15__eq(Some_3A7E15 this, Some_3A7E15 other) {
  if (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &this->value, (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_3A7E15__ne(Some_3A7E15 this, Some_3A7E15 other);

void Some_3A7E15_string_(STACK_FRAME String result, Some_3A7E15 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_3A7E15_cprint(Some_3A7E15 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_3A7E15__is(STACK_FRAME void* this);
Some_3A7E15 Some_3A7E15__as(STACK_FRAME void *this);

void Some_3A7E15_apply(STACK_FRAME Some_3A7E15 this, HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_3A7E15", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api));
}