#include <all.h>

// Option[HAMR.SW.FlightController_Impl_Operational_Api]

B Option_642C2E__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_9535B2: return T;
    case TNone_F62B67: return T;
    default: return F;
  }
}

Option_642C2E Option_642C2E__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_9535B2: break;
    case TNone_F62B67: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.FlightController_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_642C2E) this;
}

void Option_642C2E_string_(STACK_FRAME String result, Option_642C2E this);

void Option_642C2E_get_(STACK_FRAME HAMR_SW_FlightController_Impl_Operational_Api result, Option_642C2E this) {
  switch (this->type) {
    case TSome_9535B2: Some_9535B2_get_(CALLER (HAMR_SW_FlightController_Impl_Operational_Api) result, (Some_9535B2) this); return;
    case TNone_F62B67: None_F62B67_get_(CALLER (HAMR_SW_FlightController_Impl_Operational_Api) result, (None_F62B67) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}