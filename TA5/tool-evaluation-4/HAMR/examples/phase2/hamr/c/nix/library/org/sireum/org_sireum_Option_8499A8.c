#include <all.h>

// Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]

B Option_8499A8__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_60EB73: return T;
    case TSome_08A5F4: return T;
    default: return F;
  }
}

Option_8499A8 Option_8499A8__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_60EB73: break;
    case TSome_08A5F4: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_8499A8) this;
}

void Option_8499A8_string_(STACK_FRAME String result, Option_8499A8 this);

void Option_8499A8_get_(STACK_FRAME hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api result, Option_8499A8 this) {
  switch (this->type) {
    case TNone_60EB73: None_60EB73_get_(CALLER (hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) result, (None_60EB73) this); return;
    case TSome_08A5F4: Some_08A5F4_get_(CALLER (hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) result, (Some_08A5F4) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}