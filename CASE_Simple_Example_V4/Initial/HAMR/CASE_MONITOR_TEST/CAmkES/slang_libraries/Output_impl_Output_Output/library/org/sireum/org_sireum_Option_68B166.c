#include <all.h>

// Option[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api]

B Option_68B166__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_863C2F: return T;
    case TSome_A84D2F: return T;
    default: return F;
  }
}

Option_68B166 Option_68B166__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_863C2F: break;
    case TSome_A84D2F: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR_TEST.VPM_TEST.Output_impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_68B166) this;
}

void Option_68B166_string_(STACK_FRAME String result, Option_68B166 this);

void Option_68B166_get_(STACK_FRAME CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api result, Option_68B166 this) {
  switch (this->type) {
    case TNone_863C2F: None_863C2F_get_(CALLER (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) result, (None_863C2F) this); return;
    case TSome_A84D2F: Some_A84D2F_get_(CALLER (CASE_MONITOR_TEST_VPM_TEST_Output_impl_Operational_Api) result, (Some_A84D2F) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}