#include <all.h>

// Option[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api]

B Option_3A1F68__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_2849BF: return T;
    case TSome_FCFE69: return T;
    default: return F;
  }
}

Option_3A1F68 Option_3A1F68__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_2849BF: break;
    case TSome_FCFE69: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.FlightController_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_3A1F68) this;
}

void Option_3A1F68_string_(STACK_FRAME String result, Option_3A1F68 this);

void Option_3A1F68_get_(STACK_FRAME HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api result, Option_3A1F68 this) {
  switch (this->type) {
    case TNone_2849BF: None_2849BF_get_(CALLER (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) result, (None_2849BF) this); return;
    case TSome_FCFE69: Some_FCFE69_get_(CALLER (HAMR_Simple_V4_SW_FlightController_Impl_Operational_Api) result, (Some_FCFE69) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}