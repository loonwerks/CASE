#include <all.h>

// Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]

B Option_B4EF66__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_69DE14: return T;
    case TSome_181FDB: return T;
    default: return F;
  }
}

Option_B4EF66 Option_B4EF66__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_69DE14: break;
    case TSome_181FDB: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_B4EF66) this;
}

void Option_B4EF66_string_(STACK_FRAME String result, Option_B4EF66 this);

void Option_B4EF66_get_(STACK_FRAME hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api result, Option_B4EF66 this) {
  switch (this->type) {
    case TNone_69DE14: None_69DE14_get_(CALLER (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) result, (None_69DE14) this); return;
    case TSome_181FDB: Some_181FDB_get_(CALLER (hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api) result, (Some_181FDB) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}