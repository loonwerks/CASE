#include <all.h>

// Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]

B Option_089975__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3A7E15: return T;
    case TNone_6557E1: return T;
    default: return F;
  }
}

Option_089975 Option_089975__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3A7E15: break;
    case TNone_6557E1: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_089975) this;
}

void Option_089975_string_(STACK_FRAME String result, Option_089975 this);

void Option_089975_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api result, Option_089975 this) {
  switch (this->type) {
    case TSome_3A7E15: Some_3A7E15_get_(CALLER (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) result, (Some_3A7E15) this); return;
    case TNone_6557E1: None_6557E1_get_(CALLER (HAMR_Simple_V4_SW_AttestationTester_Impl_Operational_Api) result, (None_6557E1) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}