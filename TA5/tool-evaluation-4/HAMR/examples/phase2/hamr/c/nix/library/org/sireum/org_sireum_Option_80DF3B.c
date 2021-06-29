#include <all.h>

// Option[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]

B Option_80DF3B__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_579C8E: return T;
    case TSome_F82A4D: return T;
    default: return F;
  }
}

Option_80DF3B Option_80DF3B__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_579C8E: break;
    case TSome_F82A4D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_80DF3B) this;
}

void Option_80DF3B_string_(STACK_FRAME String result, Option_80DF3B this);

void Option_80DF3B_get_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api result, Option_80DF3B this) {
  switch (this->type) {
    case TNone_579C8E: None_579C8E_get_(CALLER (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) result, (None_579C8E) this); return;
    case TSome_F82A4D: Some_F82A4D_get_(CALLER (hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api) result, (Some_F82A4D) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}