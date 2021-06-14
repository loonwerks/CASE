#include <all.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api]

B Option_EA4AEC__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A19CD9: return T;
    case TSome_9A9753: return T;
    default: return F;
  }
}

Option_EA4AEC Option_EA4AEC__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A19CD9: break;
    case TSome_9A9753: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR2_TEST.VPM_TEST.Output_impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_EA4AEC) this;
}

void Option_EA4AEC_string_(STACK_FRAME String result, Option_EA4AEC this);

void Option_EA4AEC_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api result, Option_EA4AEC this) {
  switch (this->type) {
    case TNone_A19CD9: None_A19CD9_get_(CALLER (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) result, (None_A19CD9) this); return;
    case TSome_9A9753: Some_9A9753_get_(CALLER (CASE_MONITOR2_TEST_VPM_TEST_Output_impl_Operational_Api) result, (Some_9A9753) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}