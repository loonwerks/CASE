#include <all.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]

B Option_F157C7__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3030EA: return T;
    case TNone_830D4E: return T;
    default: return F;
  }
}

Option_F157C7 Option_F157C7__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3030EA: break;
    case TNone_830D4E: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_F157C7) this;
}

void Option_F157C7_string_(STACK_FRAME String result, Option_F157C7 this);

void Option_F157C7_get_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api result, Option_F157C7 this) {
  switch (this->type) {
    case TSome_3030EA: Some_3030EA_get_(CALLER (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) result, (Some_3030EA) this); return;
    case TNone_830D4E: None_830D4E_get_(CALLER (HAMR_Simple_V4_SW_RadioDriver_Attestation_Impl_Initialization_Api) result, (None_830D4E) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}