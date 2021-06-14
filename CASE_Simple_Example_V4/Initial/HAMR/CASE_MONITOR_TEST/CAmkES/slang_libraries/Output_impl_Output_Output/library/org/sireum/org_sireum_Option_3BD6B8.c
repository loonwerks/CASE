#include <all.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api]

B Option_3BD6B8__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1328AE: return T;
    case TSome_DBA49C: return T;
    default: return F;
  }
}

Option_3BD6B8 Option_3BD6B8__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_1328AE: break;
    case TSome_DBA49C: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_3BD6B8) this;
}

void Option_3BD6B8_string_(STACK_FRAME String result, Option_3BD6B8 this);

void Option_3BD6B8_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api result, Option_3BD6B8 this) {
  switch (this->type) {
    case TNone_1328AE: None_1328AE_get_(CALLER (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) result, (None_1328AE) this); return;
    case TSome_DBA49C: Some_DBA49C_get_(CALLER (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Initialization_Api) result, (Some_DBA49C) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}