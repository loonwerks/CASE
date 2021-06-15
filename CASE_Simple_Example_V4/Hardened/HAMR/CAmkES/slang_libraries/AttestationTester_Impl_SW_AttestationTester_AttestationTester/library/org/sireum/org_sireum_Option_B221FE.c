#include <all.h>

// Option[HAMR.SW.AttestationTester_Impl_Operational_Api]

B Option_B221FE__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_E55508: return T;
    case TNone_3A9994: return T;
    default: return F;
  }
}

Option_B221FE Option_B221FE__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_E55508: break;
    case TNone_3A9994: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.AttestationTester_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_B221FE) this;
}

void Option_B221FE_string_(STACK_FRAME String result, Option_B221FE this);

void Option_B221FE_get_(STACK_FRAME HAMR_SW_AttestationTester_Impl_Operational_Api result, Option_B221FE this) {
  switch (this->type) {
    case TSome_E55508: Some_E55508_get_(CALLER (HAMR_SW_AttestationTester_Impl_Operational_Api) result, (Some_E55508) this); return;
    case TNone_3A9994: None_3A9994_get_(CALLER (HAMR_SW_AttestationTester_Impl_Operational_Api) result, (None_3A9994) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}