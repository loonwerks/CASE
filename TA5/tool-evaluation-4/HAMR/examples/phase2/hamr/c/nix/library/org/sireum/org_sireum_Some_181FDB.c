#include <all.h>

// Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]

B Some_181FDB__eq(Some_181FDB this, Some_181FDB other) {
  if (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api__ne((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &this->value, (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_181FDB__ne(Some_181FDB this, Some_181FDB other);

void Some_181FDB_string_(STACK_FRAME String result, Some_181FDB this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_181FDB_cprint(Some_181FDB this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api_cprint((hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_181FDB__is(STACK_FRAME void* this);
Some_181FDB Some_181FDB__as(STACK_FRAME void *this);

void Some_181FDB_apply(STACK_FRAME Some_181FDB this, hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_181FDB", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api));
}