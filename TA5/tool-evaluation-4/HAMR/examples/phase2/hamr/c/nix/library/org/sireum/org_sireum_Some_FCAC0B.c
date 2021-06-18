#include <all.h>

// Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]

B Some_FCAC0B__eq(Some_FCAC0B this, Some_FCAC0B other) {
  if (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api__ne((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &this->value, (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_FCAC0B__ne(Some_FCAC0B this, Some_FCAC0B other);

void Some_FCAC0B_string_(STACK_FRAME String result, Some_FCAC0B this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_FCAC0B_cprint(Some_FCAC0B this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api_cprint((hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_FCAC0B__is(STACK_FRAME void* this);
Some_FCAC0B Some_FCAC0B__as(STACK_FRAME void *this);

void Some_FCAC0B_apply(STACK_FRAME Some_FCAC0B this, hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_FCAC0B", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api));
}