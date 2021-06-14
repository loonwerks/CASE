#include <all.h>

// Some[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]

B Some_CFA8D1__eq(Some_CFA8D1 this, Some_CFA8D1 other) {
  if (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_CFA8D1__ne(Some_CFA8D1 this, Some_CFA8D1 other);

void Some_CFA8D1_string_(STACK_FRAME String result, Some_CFA8D1 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_CFA8D1_cprint(Some_CFA8D1 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_CFA8D1__is(STACK_FRAME void* this);
Some_CFA8D1 Some_CFA8D1__as(STACK_FRAME void *this);

void Some_CFA8D1_apply(STACK_FRAME Some_CFA8D1 this, HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_CFA8D1", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_AttestationTester_Impl_Initialization_Api));
}