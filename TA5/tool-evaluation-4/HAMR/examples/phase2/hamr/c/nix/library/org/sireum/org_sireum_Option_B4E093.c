#include <all.h>

// Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api]

B Option_B4E093__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D64418: return T;
    case TSome_CA0A4D: return T;
    default: return F;
  }
}

Option_B4E093 Option_B4E093__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_D64418: break;
    case TSome_CA0A4D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.CASE_Filter_LST_thr_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_B4E093) this;
}

void Option_B4E093_string_(STACK_FRAME String result, Option_B4E093 this);

void Option_B4E093_get_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api result, Option_B4E093 this) {
  switch (this->type) {
    case TNone_D64418: None_D64418_get_(CALLER (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) result, (None_D64418) this); return;
    case TSome_CA0A4D: Some_CA0A4D_get_(CALLER (hamr_SW_CASE_Filter_LST_thr_Impl_Initialization_Api) result, (Some_CA0A4D) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}