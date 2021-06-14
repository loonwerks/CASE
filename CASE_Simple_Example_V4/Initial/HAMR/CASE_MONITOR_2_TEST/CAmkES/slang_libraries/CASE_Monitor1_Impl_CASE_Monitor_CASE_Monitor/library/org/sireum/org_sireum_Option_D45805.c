#include <all.h>

// Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

B Option_D45805__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_67F530: return T;
    case TSome_A8BCDF: return T;
    default: return F;
  }
}

Option_D45805 Option_D45805__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_67F530: break;
    case TSome_A8BCDF: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_2_TEST.VPM.CASE_Monitor1_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_D45805) this;
}

void Option_D45805_string_(STACK_FRAME String result, Option_D45805 this);

void Option_D45805_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api result, Option_D45805 this) {
  switch (this->type) {
    case TNone_67F530: None_67F530_get_(CALLER (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) result, (None_67F530) this); return;
    case TSome_A8BCDF: Some_A8BCDF_get_(CALLER (CASE_MONITOR_2_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) result, (Some_A8BCDF) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}