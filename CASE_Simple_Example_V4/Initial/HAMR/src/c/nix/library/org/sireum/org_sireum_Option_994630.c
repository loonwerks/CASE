#include <all.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api]

B Option_994630__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_C64652: return T;
    case TSome_DDE9FD: return T;
    default: return F;
  }
}

Option_994630 Option_994630__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_C64652: break;
    case TSome_DDE9FD: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.RadioDriver_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_994630) this;
}

void Option_994630_string_(STACK_FRAME String result, Option_994630 this);

void Option_994630_get_(STACK_FRAME HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api result, Option_994630 this) {
  switch (this->type) {
    case TNone_C64652: None_C64652_get_(CALLER (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) result, (None_C64652) this); return;
    case TSome_DDE9FD: Some_DDE9FD_get_(CALLER (HAMR_Simple_V4_SW_RadioDriver_Impl_Operational_Api) result, (Some_DDE9FD) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}