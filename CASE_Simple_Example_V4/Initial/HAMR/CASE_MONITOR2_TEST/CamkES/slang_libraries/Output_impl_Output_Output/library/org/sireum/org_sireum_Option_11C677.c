#include <all.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api]

B Option_11C677__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3790E6: return T;
    case TSome_2C70A4: return T;
    default: return F;
  }
}

Option_11C677 Option_11C677__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3790E6: break;
    case TSome_2C70A4: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_11C677) this;
}

void Option_11C677_string_(STACK_FRAME String result, Option_11C677 this);

void Option_11C677_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api result, Option_11C677 this) {
  switch (this->type) {
    case TNone_3790E6: None_3790E6_get_(CALLER (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) result, (None_3790E6) this); return;
    case TSome_2C70A4: Some_2C70A4_get_(CALLER (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Initialization_Api) result, (Some_2C70A4) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}