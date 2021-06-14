#include <all.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api]

B Option_4B18FC__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_12F982: return T;
    case TSome_BA86B7: return T;
    default: return F;
  }
}

Option_4B18FC Option_4B18FC__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_12F982: break;
    case TSome_BA86B7: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_TEST.VPM_TEST.Input_impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_4B18FC) this;
}

void Option_4B18FC_string_(STACK_FRAME String result, Option_4B18FC this);

void Option_4B18FC_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api result, Option_4B18FC this) {
  switch (this->type) {
    case TNone_12F982: None_12F982_get_(CALLER (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) result, (None_12F982) this); return;
    case TSome_BA86B7: Some_BA86B7_get_(CALLER (CASE_MONITOR_TEST_VPM_TEST_Input_impl_Operational_Api) result, (Some_BA86B7) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}