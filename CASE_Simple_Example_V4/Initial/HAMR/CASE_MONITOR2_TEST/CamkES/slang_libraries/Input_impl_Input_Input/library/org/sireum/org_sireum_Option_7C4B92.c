#include <all.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api]

B Option_7C4B92__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_9A887C: return T;
    case TSome_CBF40F: return T;
    default: return F;
  }
}

Option_7C4B92 Option_7C4B92__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_9A887C: break;
    case TSome_CBF40F: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_7C4B92) this;
}

void Option_7C4B92_string_(STACK_FRAME String result, Option_7C4B92 this);

void Option_7C4B92_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api result, Option_7C4B92 this) {
  switch (this->type) {
    case TNone_9A887C: None_9A887C_get_(CALLER (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) result, (None_9A887C) this); return;
    case TSome_CBF40F: Some_CBF40F_get_(CALLER (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Initialization_Api) result, (Some_CBF40F) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}