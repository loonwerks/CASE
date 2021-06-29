#include <all.h>

// Option[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api]

B Option_AE4A98__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_262A95: return T;
    case TNone_02D0B8: return T;
    default: return F;
  }
}

Option_AE4A98 Option_AE4A98__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_262A95: break;
    case TNone_02D0B8: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.AttestationGate_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_AE4A98) this;
}

void Option_AE4A98_string_(STACK_FRAME String result, Option_AE4A98 this);

void Option_AE4A98_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api result, Option_AE4A98 this) {
  switch (this->type) {
    case TSome_262A95: Some_262A95_get_(CALLER (HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api) result, (Some_262A95) this); return;
    case TNone_02D0B8: None_02D0B8_get_(CALLER (HAMR_Simple_V4_SW_AttestationGate_Impl_Initialization_Api) result, (None_02D0B8) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}