#include <all.h>

// Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]

B Option_849849__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_78A1D4: return T;
    case TSome_D48312: return T;
    default: return F;
  }
}

Option_849849 Option_849849__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_78A1D4: break;
    case TSome_D48312: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_849849) this;
}

void Option_849849_string_(STACK_FRAME String result, Option_849849 this);

void Option_849849_get_(STACK_FRAME hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api result, Option_849849 this) {
  switch (this->type) {
    case TNone_78A1D4: None_78A1D4_get_(CALLER (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) result, (None_78A1D4) this); return;
    case TSome_D48312: Some_D48312_get_(CALLER (hamr_SW_CASE_AttestationGate_thr_Impl_Initialization_Api) result, (Some_D48312) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}