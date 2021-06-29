#include <all.h>

// Option[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]

B Option_54EF1B__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_392677: return T;
    case TSome_481DA5: return T;
    default: return F;
  }
}

Option_54EF1B Option_54EF1B__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_392677: break;
    case TSome_481DA5: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_54EF1B) this;
}

void Option_54EF1B_string_(STACK_FRAME String result, Option_54EF1B this);

void Option_54EF1B_get_(STACK_FRAME hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api result, Option_54EF1B this) {
  switch (this->type) {
    case TNone_392677: None_392677_get_(CALLER (hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) result, (None_392677) this); return;
    case TSome_481DA5: Some_481DA5_get_(CALLER (hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api) result, (Some_481DA5) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}