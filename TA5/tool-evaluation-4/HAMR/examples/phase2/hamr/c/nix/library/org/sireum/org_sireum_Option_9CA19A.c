#include <all.h>

// Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api]

B Option_9CA19A__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3A40F5: return T;
    case TSome_FCAC0B: return T;
    default: return F;
  }
}

Option_9CA19A Option_9CA19A__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3A40F5: break;
    case TSome_FCAC0B: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_9CA19A) this;
}

void Option_9CA19A_string_(STACK_FRAME String result, Option_9CA19A this);

void Option_9CA19A_get_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api result, Option_9CA19A this) {
  switch (this->type) {
    case TNone_3A40F5: None_3A40F5_get_(CALLER (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) result, (None_3A40F5) this); return;
    case TSome_FCAC0B: Some_FCAC0B_get_(CALLER (hamr_SW_RadioDriver_Attestation_thr_Impl_Initialization_Api) result, (Some_FCAC0B) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}