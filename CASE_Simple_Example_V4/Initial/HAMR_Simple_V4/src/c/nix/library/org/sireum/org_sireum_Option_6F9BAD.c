#include <all.h>

// Option[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api]

B Option_6F9BAD__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_0FF3DD: return T;
    case TNone_4E54E3: return T;
    default: return F;
  }
}

Option_6F9BAD Option_6F9BAD__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_0FF3DD: break;
    case TNone_4E54E3: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.FlightController_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_6F9BAD) this;
}

void Option_6F9BAD_string_(STACK_FRAME String result, Option_6F9BAD this);

void Option_6F9BAD_get_(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api result, Option_6F9BAD this) {
  switch (this->type) {
    case TSome_0FF3DD: Some_0FF3DD_get_(CALLER (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) result, (Some_0FF3DD) this); return;
    case TNone_4E54E3: None_4E54E3_get_(CALLER (HAMR_Simple_V4_SW_FlightController_Impl_Initialization_Api) result, (None_4E54E3) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}