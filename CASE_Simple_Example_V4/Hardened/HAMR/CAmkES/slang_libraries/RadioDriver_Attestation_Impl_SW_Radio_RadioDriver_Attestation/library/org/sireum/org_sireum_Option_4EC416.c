#include <all.h>

// Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api]

B Option_4EC416__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_51939A: return T;
    case TNone_C931A3: return T;
    default: return F;
  }
}

Option_4EC416 Option_4EC416__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_51939A: break;
    case TNone_C931A3: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.RadioDriver_Attestation_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_4EC416) this;
}

void Option_4EC416_string_(STACK_FRAME String result, Option_4EC416 this);

void Option_4EC416_get_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api result, Option_4EC416 this) {
  switch (this->type) {
    case TSome_51939A: Some_51939A_get_(CALLER (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) result, (Some_51939A) this); return;
    case TNone_C931A3: None_C931A3_get_(CALLER (HAMR_SW_RadioDriver_Attestation_Impl_Initialization_Api) result, (None_C931A3) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}