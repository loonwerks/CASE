#include <all.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]

B Option_8A9C20__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_E10DBF: return T;
    case TNone_29B833: return T;
    default: return F;
  }
}

Option_8A9C20 Option_8A9C20__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_E10DBF: break;
    case TNone_29B833: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_8A9C20) this;
}

void Option_8A9C20_string_(STACK_FRAME String result, Option_8A9C20 this);

void Option_8A9C20_get_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api result, Option_8A9C20 this) {
  switch (this->type) {
    case TSome_E10DBF: Some_E10DBF_get_(CALLER (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) result, (Some_E10DBF) this); return;
    case TNone_29B833: None_29B833_get_(CALLER (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Operational_Api) result, (None_29B833) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}