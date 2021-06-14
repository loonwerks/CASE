#include <all.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api]

B Option_EE5DBF__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_2EBF4C: return T;
    case TNone_05FEAD: return T;
    default: return F;
  }
}

Option_EE5DBF Option_EE5DBF__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_2EBF4C: break;
    case TNone_05FEAD: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_EE5DBF) this;
}

void Option_EE5DBF_string_(STACK_FRAME String result, Option_EE5DBF this);

void Option_EE5DBF_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api result, Option_EE5DBF this) {
  switch (this->type) {
    case TSome_2EBF4C: Some_2EBF4C_get_(CALLER (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) result, (Some_2EBF4C) this); return;
    case TNone_05FEAD: None_05FEAD_get_(CALLER (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Operational_Api) result, (None_05FEAD) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}