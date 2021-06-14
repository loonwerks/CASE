#include <all.h>

// Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api]

B Option_F9C054__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_EC3D0D: return T;
    case TSome_2D0976: return T;
    default: return F;
  }
}

Option_F9C054 Option_F9C054__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_EC3D0D: break;
    case TSome_2D0976: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[CASE_MONITOR2_TEST.VPM.CASE_Monitor2_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_F9C054) this;
}

void Option_F9C054_string_(STACK_FRAME String result, Option_F9C054 this);

void Option_F9C054_get_(STACK_FRAME CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api result, Option_F9C054 this) {
  switch (this->type) {
    case TNone_EC3D0D: None_EC3D0D_get_(CALLER (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) result, (None_EC3D0D) this); return;
    case TSome_2D0976: Some_2D0976_get_(CALLER (CASE_MONITOR2_TEST_VPM_CASE_Monitor2_Impl_Initialization_Api) result, (Some_2D0976) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}