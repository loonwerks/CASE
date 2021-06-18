#include <all.h>

// Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api]

B Option_21F455__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_E7D454: return T;
    case TSome_BAA603: return T;
    default: return F;
  }
}

Option_21F455 Option_21F455__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_E7D454: break;
    case TSome_BAA603: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.Drivers.UARTDriver_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_21F455) this;
}

void Option_21F455_string_(STACK_FRAME String result, Option_21F455 this);

void Option_21F455_get_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Initialization_Api result, Option_21F455 this) {
  switch (this->type) {
    case TNone_E7D454: None_E7D454_get_(CALLER (hamr_Drivers_UARTDriver_Impl_Initialization_Api) result, (None_E7D454) this); return;
    case TSome_BAA603: Some_BAA603_get_(CALLER (hamr_Drivers_UARTDriver_Impl_Initialization_Api) result, (Some_BAA603) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}