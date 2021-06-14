#include <all.h>

// Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

B Option_A9BD80__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_8805C8: return T;
    case TSome_2E1D55: return T;
    default: return F;
  }
}

Option_A9BD80 Option_A9BD80__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_8805C8: break;
    case TSome_2E1D55: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_A9BD80) this;
}

void Option_A9BD80_string_(STACK_FRAME String result, Option_A9BD80 this);

void Option_A9BD80_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api result, Option_A9BD80 this) {
  switch (this->type) {
    case TNone_8805C8: None_8805C8_get_(CALLER (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) result, (None_8805C8) this); return;
    case TSome_2E1D55: Some_2E1D55_get_(CALLER (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) result, (Some_2E1D55) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}