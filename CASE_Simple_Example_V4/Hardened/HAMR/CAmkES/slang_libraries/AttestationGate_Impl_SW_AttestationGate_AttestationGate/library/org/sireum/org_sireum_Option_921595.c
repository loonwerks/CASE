#include <all.h>

// Option[HAMR.SW.AttestationGate_Impl_Operational_Api]

B Option_921595__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_8753F1: return T;
    case TNone_118401: return T;
    default: return F;
  }
}

Option_921595 Option_921595__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_8753F1: break;
    case TNone_118401: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.AttestationGate_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_921595) this;
}

void Option_921595_string_(STACK_FRAME String result, Option_921595 this);

void Option_921595_get_(STACK_FRAME HAMR_SW_AttestationGate_Impl_Operational_Api result, Option_921595 this) {
  switch (this->type) {
    case TSome_8753F1: Some_8753F1_get_(CALLER (HAMR_SW_AttestationGate_Impl_Operational_Api) result, (Some_8753F1) this); return;
    case TNone_118401: None_118401_get_(CALLER (HAMR_SW_AttestationGate_Impl_Operational_Api) result, (None_118401) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}