#include <all.h>

// Option[hamr.SW.UxAS_thr_Impl_Operational_Api]

B Option_73B21F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_5189C1: return T;
    case TSome_7F8DC4: return T;
    default: return F;
  }
}

Option_73B21F Option_73B21F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_5189C1: break;
    case TSome_7F8DC4: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.UxAS_thr_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_73B21F) this;
}

void Option_73B21F_string_(STACK_FRAME String result, Option_73B21F this);

void Option_73B21F_get_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Operational_Api result, Option_73B21F this) {
  switch (this->type) {
    case TNone_5189C1: None_5189C1_get_(CALLER (hamr_SW_UxAS_thr_Impl_Operational_Api) result, (None_5189C1) this); return;
    case TSome_7F8DC4: Some_7F8DC4_get_(CALLER (hamr_SW_UxAS_thr_Impl_Operational_Api) result, (Some_7F8DC4) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}