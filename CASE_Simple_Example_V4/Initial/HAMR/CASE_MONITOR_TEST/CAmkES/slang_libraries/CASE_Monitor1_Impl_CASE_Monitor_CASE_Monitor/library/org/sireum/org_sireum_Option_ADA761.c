#include <all.h>

// Option[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

B Option_ADA761__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_C84E72: return T;
    case TSome_638F73: return T;
    default: return F;
  }
}

Option_ADA761 Option_ADA761__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_C84E72: break;
    case TSome_638F73: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_ADA761) this;
}

void Option_ADA761_string_(STACK_FRAME String result, Option_ADA761 this);

void Option_ADA761_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api result, Option_ADA761 this) {
  switch (this->type) {
    case TNone_C84E72: None_C84E72_get_(CALLER (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) result, (None_C84E72) this); return;
    case TSome_638F73: Some_638F73_get_(CALLER (CASE_MONITOR_TEST_VPM_CASE_Monitor1_Impl_Operational_Api) result, (Some_638F73) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}