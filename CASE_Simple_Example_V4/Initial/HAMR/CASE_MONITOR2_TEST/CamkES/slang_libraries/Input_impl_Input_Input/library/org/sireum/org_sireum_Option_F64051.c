#include <all.h>

// Option[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api]

B Option_F64051__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B2E40A: return T;
    case TSome_EA751B: return T;
    default: return F;
  }
}

Option_F64051 Option_F64051__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_B2E40A: break;
    case TSome_EA751B: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR2_TEST.VPM_TEST.Input_impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_F64051) this;
}

void Option_F64051_string_(STACK_FRAME String result, Option_F64051 this);

void Option_F64051_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api result, Option_F64051 this) {
  switch (this->type) {
    case TNone_B2E40A: None_B2E40A_get_(CALLER (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) result, (None_B2E40A) this); return;
    case TSome_EA751B: Some_EA751B_get_(CALLER (CASE_MONITOR2_TEST_VPM_TEST_Input_impl_Operational_Api) result, (Some_EA751B) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}