#include <all.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]

B Some_E10DBF__eq(Some_E10DBF this, Some_E10DBF other) {
  if (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api__ne((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->value, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_E10DBF__ne(Some_E10DBF this, Some_E10DBF other);

void Some_E10DBF_string_(STACK_FRAME String result, Some_E10DBF this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_string_(SF result, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_E10DBF_cprint(Some_E10DBF this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api_cprint((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_E10DBF__is(STACK_FRAME void* this);
Some_E10DBF Some_E10DBF__as(STACK_FRAME void *this);

void Some_E10DBF_apply(STACK_FRAME Some_E10DBF this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_E10DBF", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api));
}