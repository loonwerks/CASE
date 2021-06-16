#include <all.h>

// Some[HAMR.SW.AttestationTester_Impl_Operational_Api]

B Some_E55508__eq(Some_E55508 this, Some_E55508 other) {
  if (HAMR_SW_AttestationTester_Impl_Operational_Api__ne((HAMR_SW_AttestationTester_Impl_Operational_Api) &this->value, (HAMR_SW_AttestationTester_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_E55508__ne(Some_E55508 this, Some_E55508 other);

void Some_E55508_string_(STACK_FRAME String result, Some_E55508 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_AttestationTester_Impl_Operational_Api_string_(SF result, (HAMR_SW_AttestationTester_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_E55508_cprint(Some_E55508 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_AttestationTester_Impl_Operational_Api_cprint((HAMR_SW_AttestationTester_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_E55508__is(STACK_FRAME void* this);
Some_E55508 Some_E55508__as(STACK_FRAME void *this);

void Some_E55508_apply(STACK_FRAME Some_E55508 this, HAMR_SW_AttestationTester_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E55508", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_AttestationTester_Impl_Operational_Api));
}