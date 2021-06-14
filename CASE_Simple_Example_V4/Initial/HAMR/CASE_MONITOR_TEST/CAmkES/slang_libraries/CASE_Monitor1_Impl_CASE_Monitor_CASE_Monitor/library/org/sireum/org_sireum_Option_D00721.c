#include <all.h>

// Option[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api]

B Option_D00721__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1E51A3: return T;
    case TSome_A6A622: return T;
    default: return F;
  }
}

Option_D00721 Option_D00721__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1E51A3: break;
    case TSome_A6A622: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_D00721) this;
}

void Option_D00721_string_(STACK_FRAME String result, Option_D00721 this);

void Option_D00721_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api result, Option_D00721 this) {
  switch (this->type) {
    case TNone_1E51A3: None_1E51A3_get_(CALLER (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) result, (None_1E51A3) this); return;
    case TSome_A6A622: Some_A6A622_get_(CALLER (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Initialization_Api) result, (Some_A6A622) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}