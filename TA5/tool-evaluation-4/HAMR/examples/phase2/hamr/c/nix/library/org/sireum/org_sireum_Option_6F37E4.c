#include <all.h>

// Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]

B Option_6F37E4__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_C554A3: return T;
    case TSome_967389: return T;
    default: return F;
  }
}

Option_6F37E4 Option_6F37E4__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_C554A3: break;
    case TSome_967389: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_6F37E4) this;
}

void Option_6F37E4_string_(STACK_FRAME String result, Option_6F37E4 this);

void Option_6F37E4_get_(STACK_FRAME hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api result, Option_6F37E4 this) {
  switch (this->type) {
    case TNone_C554A3: None_C554A3_get_(CALLER (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) result, (None_C554A3) this); return;
    case TSome_967389: Some_967389_get_(CALLER (hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api) result, (Some_967389) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}