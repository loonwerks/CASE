#include <all.h>

// Option[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api]

B Option_29F734__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_E951B6: return T;
    case TSome_B4F3A8: return T;
    default: return F;
  }
}

Option_29F734 Option_29F734__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_E951B6: break;
    case TSome_B4F3A8: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.FlightPlanner_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_29F734) this;
}

void Option_29F734_string_(STACK_FRAME String result, Option_29F734 this);

void Option_29F734_get_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api result, Option_29F734 this) {
  switch (this->type) {
    case TNone_E951B6: None_E951B6_get_(CALLER (HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api) result, (None_E951B6) this); return;
    case TSome_B4F3A8: Some_B4F3A8_get_(CALLER (HAMR_Simple_V4_SW_FlightPlanner_Impl_Operational_Api) result, (Some_B4F3A8) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}