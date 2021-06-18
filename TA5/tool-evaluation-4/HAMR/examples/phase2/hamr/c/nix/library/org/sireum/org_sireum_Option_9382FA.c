#include <all.h>

// Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]

B Option_9382FA__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_77A6BF: return T;
    case TSome_6322F0: return T;
    default: return F;
  }
}

Option_9382FA Option_9382FA__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_77A6BF: break;
    case TSome_6322F0: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_9382FA) this;
}

void Option_9382FA_string_(STACK_FRAME String result, Option_9382FA this);

void Option_9382FA_get_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api result, Option_9382FA this) {
  switch (this->type) {
    case TNone_77A6BF: None_77A6BF_get_(CALLER (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) result, (None_77A6BF) this); return;
    case TSome_6322F0: Some_6322F0_get_(CALLER (hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api) result, (Some_6322F0) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}