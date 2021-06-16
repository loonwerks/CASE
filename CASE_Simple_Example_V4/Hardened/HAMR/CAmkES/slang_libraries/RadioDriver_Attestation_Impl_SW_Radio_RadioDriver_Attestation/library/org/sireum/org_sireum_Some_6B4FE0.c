#include <all.h>

// Some[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]

B Some_6B4FE0__eq(Some_6B4FE0 this, Some_6B4FE0 other) {
  if (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api__ne((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->value, (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_6B4FE0__ne(Some_6B4FE0 this, Some_6B4FE0 other);

void Some_6B4FE0_string_(STACK_FRAME String result, Some_6B4FE0 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_string_(SF result, (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_6B4FE0_cprint(Some_6B4FE0 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api_cprint((HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_6B4FE0__is(STACK_FRAME void* this);
Some_6B4FE0 Some_6B4FE0__as(STACK_FRAME void *this);

void Some_6B4FE0_apply(STACK_FRAME Some_6B4FE0 this, HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_6B4FE0", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api));
}