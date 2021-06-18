#include <all.h>

// Option[hamr.Drivers.UARTDriver_Impl_Operational_Api]

B Option_AE3831__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A929A3: return T;
    case TSome_74DA67: return T;
    default: return F;
  }
}

Option_AE3831 Option_AE3831__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_A929A3: break;
    case TSome_74DA67: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.Drivers.UARTDriver_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_AE3831) this;
}

void Option_AE3831_string_(STACK_FRAME String result, Option_AE3831 this);

void Option_AE3831_get_(STACK_FRAME hamr_Drivers_UARTDriver_Impl_Operational_Api result, Option_AE3831 this) {
  switch (this->type) {
    case TNone_A929A3: None_A929A3_get_(CALLER (hamr_Drivers_UARTDriver_Impl_Operational_Api) result, (None_A929A3) this); return;
    case TSome_74DA67: Some_74DA67_get_(CALLER (hamr_Drivers_UARTDriver_Impl_Operational_Api) result, (Some_74DA67) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}