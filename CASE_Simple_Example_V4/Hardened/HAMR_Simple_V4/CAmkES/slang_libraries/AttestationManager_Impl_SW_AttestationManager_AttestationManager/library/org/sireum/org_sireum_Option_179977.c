#include <all.h>

// Option[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api]

B Option_179977__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_BCB2D2: return T;
    case TSome_B273EC: return T;
    default: return F;
  }
}

Option_179977 Option_179977__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_BCB2D2: break;
    case TSome_B273EC: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_179977) this;
}

void Option_179977_string_(STACK_FRAME String result, Option_179977 this);

void Option_179977_get_(STACK_FRAME HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api result, Option_179977 this) {
  switch (this->type) {
    case TNone_BCB2D2: None_BCB2D2_get_(CALLER (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) result, (None_BCB2D2) this); return;
    case TSome_B273EC: Some_B273EC_get_(CALLER (HAMR_Simple_V4_SW_AttestationManager_Impl_Operational_Api) result, (Some_B273EC) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}