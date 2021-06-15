#include <all.h>

// Option[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]

B Option_87EF85__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_6B4FE0: return T;
    case TNone_FF6291: return T;
    default: return F;
  }
}

Option_87EF85 Option_87EF85__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_6B4FE0: break;
    case TNone_FF6291: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_87EF85) this;
}

void Option_87EF85_string_(STACK_FRAME String result, Option_87EF85 this);

void Option_87EF85_get_(STACK_FRAME HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api result, Option_87EF85 this) {
  switch (this->type) {
    case TSome_6B4FE0: Some_6B4FE0_get_(CALLER (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) result, (Some_6B4FE0) this); return;
    case TNone_FF6291: None_FF6291_get_(CALLER (HAMR_SW_RadioDriver_Attestation_Impl_Operational_Api) result, (None_FF6291) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}