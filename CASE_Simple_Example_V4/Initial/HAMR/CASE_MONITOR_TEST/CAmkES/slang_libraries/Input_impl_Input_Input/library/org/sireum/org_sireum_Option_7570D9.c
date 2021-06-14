#include <all.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api]

B Option_7570D9__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_04B2B5: return T;
    case TSome_ED6B7D: return T;
    default: return F;
  }
}

Option_7570D9 Option_7570D9__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_04B2B5: break;
    case TSome_ED6B7D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_7570D9) this;
}

void Option_7570D9_string_(STACK_FRAME String result, Option_7570D9 this);

void Option_7570D9_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api result, Option_7570D9 this) {
  switch (this->type) {
    case TNone_04B2B5: None_04B2B5_get_(CALLER (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) result, (None_04B2B5) this); return;
    case TSome_ED6B7D: Some_ED6B7D_get_(CALLER (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Initialization_Api) result, (Some_ED6B7D) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}