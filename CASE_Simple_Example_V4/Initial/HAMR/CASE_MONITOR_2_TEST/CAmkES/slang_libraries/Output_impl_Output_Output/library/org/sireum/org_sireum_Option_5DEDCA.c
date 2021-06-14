#include <all.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api]

B Option_5DEDCA__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_459F82: return T;
    case TNone_32B473: return T;
    default: return F;
  }
}

Option_5DEDCA Option_5DEDCA__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_459F82: break;
    case TNone_32B473: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_5DEDCA) this;
}

void Option_5DEDCA_string_(STACK_FRAME String result, Option_5DEDCA this);

void Option_5DEDCA_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api result, Option_5DEDCA this) {
  switch (this->type) {
    case TSome_459F82: Some_459F82_get_(CALLER (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) result, (Some_459F82) this); return;
    case TNone_32B473: None_32B473_get_(CALLER (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Operational_Api) result, (None_32B473) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}