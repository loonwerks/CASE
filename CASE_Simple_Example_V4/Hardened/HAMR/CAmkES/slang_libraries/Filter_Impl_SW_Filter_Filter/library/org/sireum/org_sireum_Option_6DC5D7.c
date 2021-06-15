#include <all.h>

// Option[HAMR.SW.Filter_Impl_Operational_Api]

B Option_6DC5D7__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_73C5E1: return T;
    case TNone_10267D: return T;
    default: return F;
  }
}

Option_6DC5D7 Option_6DC5D7__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_73C5E1: break;
    case TNone_10267D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.Filter_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_6DC5D7) this;
}

void Option_6DC5D7_string_(STACK_FRAME String result, Option_6DC5D7 this);

void Option_6DC5D7_get_(STACK_FRAME HAMR_SW_Filter_Impl_Operational_Api result, Option_6DC5D7 this) {
  switch (this->type) {
    case TSome_73C5E1: Some_73C5E1_get_(CALLER (HAMR_SW_Filter_Impl_Operational_Api) result, (Some_73C5E1) this); return;
    case TNone_10267D: None_10267D_get_(CALLER (HAMR_SW_Filter_Impl_Operational_Api) result, (None_10267D) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}