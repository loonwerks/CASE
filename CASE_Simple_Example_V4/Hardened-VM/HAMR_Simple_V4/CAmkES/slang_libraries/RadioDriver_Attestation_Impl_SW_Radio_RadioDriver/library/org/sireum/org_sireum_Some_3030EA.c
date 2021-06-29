#include <all.h>

// Some[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]

B Some_3030EA__eq(Some_3030EA this, Some_3030EA other) {
  if (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api__ne((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &this->value, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_3030EA__ne(Some_3030EA this, Some_3030EA other);

void Some_3030EA_string_(STACK_FRAME String result, Some_3030EA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api_string_(SF result, (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_3030EA_cprint(Some_3030EA this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api_cprint((HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_3030EA__is(STACK_FRAME void* this);
Some_3030EA Some_3030EA__as(STACK_FRAME void *this);

void Some_3030EA_apply(STACK_FRAME Some_3030EA this, HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_3030EA", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api));
}