#include <all.h>

// Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api]

B Option_63CBE2__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_4BF8A4: return T;
    case TSome_993707: return T;
    default: return F;
  }
}

Option_63CBE2 Option_63CBE2__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_4BF8A4: break;
    case TSome_993707: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_63CBE2) this;
}

void Option_63CBE2_string_(STACK_FRAME String result, Option_63CBE2 this);

void Option_63CBE2_get_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api result, Option_63CBE2 this) {
  switch (this->type) {
    case TNone_4BF8A4: None_4BF8A4_get_(CALLER (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) result, (None_4BF8A4) this); return;
    case TSome_993707: Some_993707_get_(CALLER (hamr_SW_CASE_Monitor_Geo_thr_Impl_Initialization_Api) result, (Some_993707) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}