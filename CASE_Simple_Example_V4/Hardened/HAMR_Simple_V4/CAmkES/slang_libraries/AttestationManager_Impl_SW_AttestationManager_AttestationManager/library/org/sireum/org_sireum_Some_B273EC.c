#include <all.h>

// Some[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api]

B Some_B273EC__eq(Some_B273EC this, Some_B273EC other) {
  if (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &this->value, (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_B273EC__ne(Some_B273EC this, Some_B273EC other);

void Some_B273EC_string_(STACK_FRAME String result, Some_B273EC this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_B273EC_cprint(Some_B273EC this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_B273EC__is(STACK_FRAME void* this);
Some_B273EC Some_B273EC__as(STACK_FRAME void *this);

void Some_B273EC_apply(STACK_FRAME Some_B273EC this, HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_B273EC", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api));
}