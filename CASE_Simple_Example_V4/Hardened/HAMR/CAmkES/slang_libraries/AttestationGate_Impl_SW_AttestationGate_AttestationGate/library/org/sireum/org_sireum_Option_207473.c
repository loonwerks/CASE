#include <all.h>

// Option[HAMR.SW.AttestationGate_Impl_Initialization_Api]

B Option_207473__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_925053: return T;
    case TNone_BE0654: return T;
    default: return F;
  }
}

Option_207473 Option_207473__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_925053: break;
    case TNone_BE0654: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.AttestationGate_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_207473) this;
}

void Option_207473_string_(STACK_FRAME String result, Option_207473 this);

void Option_207473_get_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Initialization_Api result, Option_207473 this) {
  switch (this->type) {
    case TSome_925053: Some_925053_get_(CALLER (HAMR_SW_AttestationGate_Impl_Initialization_Api) result, (Some_925053) this); return;
    case TNone_BE0654: None_BE0654_get_(CALLER (HAMR_SW_AttestationGate_Impl_Initialization_Api) result, (None_BE0654) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}