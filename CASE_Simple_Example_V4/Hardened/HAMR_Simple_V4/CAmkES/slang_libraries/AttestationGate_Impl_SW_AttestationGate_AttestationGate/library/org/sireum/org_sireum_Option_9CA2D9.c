#include <all.h>

// Option[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api]

B Option_9CA2D9__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_06F7FC: return T;
    case TNone_3F8D24: return T;
    default: return F;
  }
}

Option_9CA2D9 Option_9CA2D9__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_06F7FC: break;
    case TNone_3F8D24: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.AttestationGate_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_9CA2D9) this;
}

void Option_9CA2D9_string_(STACK_FRAME String result, Option_9CA2D9 this);

void Option_9CA2D9_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api result, Option_9CA2D9 this) {
  switch (this->type) {
    case TSome_06F7FC: Some_06F7FC_get_(CALLER (HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api) result, (Some_06F7FC) this); return;
    case TNone_3F8D24: None_3F8D24_get_(CALLER (HAMR_Simple_V4_SW_AttestationGate_Impl_Operational_Api) result, (None_3F8D24) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}