#include <all.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api]

B Option_D680D8__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_C9A1C9: return T;
    case TNone_9BC69E: return T;
    default: return F;
  }
}

Option_D680D8 Option_D680D8__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_C9A1C9: break;
    case TNone_9BC69E: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_2_TEST.VPM_TEST.Input_impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_D680D8) this;
}

void Option_D680D8_string_(STACK_FRAME String result, Option_D680D8 this);

void Option_D680D8_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api result, Option_D680D8 this) {
  switch (this->type) {
    case TSome_C9A1C9: Some_C9A1C9_get_(CALLER (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) result, (Some_C9A1C9) this); return;
    case TNone_9BC69E: None_9BC69E_get_(CALLER (CASE_MONITOR_2_TEST_VPM_TEST_Input_impl_Initialization_Api) result, (None_9BC69E) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}