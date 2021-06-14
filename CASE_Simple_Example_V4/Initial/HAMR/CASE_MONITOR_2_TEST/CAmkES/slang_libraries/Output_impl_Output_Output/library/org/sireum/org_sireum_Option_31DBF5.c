#include <all.h>

// Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api]

B Option_31DBF5__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_BD30E2: return T;
    case TNone_599856: return T;
    default: return F;
  }
}

Option_31DBF5 Option_31DBF5__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_BD30E2: break;
    case TNone_599856: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_2_TEST.VPM_TEST.Output_impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_31DBF5) this;
}

void Option_31DBF5_string_(STACK_FRAME String result, Option_31DBF5 this);

void Option_31DBF5_get_(STACK_FRAME CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api result, Option_31DBF5 this) {
  switch (this->type) {
    case TSome_BD30E2: Some_BD30E2_get_(CALLER (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) result, (Some_BD30E2) this); return;
    case TNone_599856: None_599856_get_(CALLER (CASE_MONITOR_2_TEST_VPM_TEST_Output_impl_Initialization_Api) result, (None_599856) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}