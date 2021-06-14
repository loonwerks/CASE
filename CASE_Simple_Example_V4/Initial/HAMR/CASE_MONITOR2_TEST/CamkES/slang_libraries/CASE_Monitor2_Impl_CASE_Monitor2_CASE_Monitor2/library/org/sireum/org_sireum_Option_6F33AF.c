#include <all.h>

// Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api]

B Option_6F33AF__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3D0813: return T;
    case TSome_C4344F: return T;
    default: return F;
  }
}

Option_6F33AF Option_6F33AF__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_3D0813: break;
    case TSome_C4344F: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_6F33AF) this;
}

void Option_6F33AF_string_(STACK_FRAME String result, Option_6F33AF this);

void Option_6F33AF_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api result, Option_6F33AF this) {
  switch (this->type) {
    case TNone_3D0813: None_3D0813_get_(CALLER (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) result, (None_3D0813) this); return;
    case TSome_C4344F: Some_C4344F_get_(CALLER (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Operational_Api) result, (Some_C4344F) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}