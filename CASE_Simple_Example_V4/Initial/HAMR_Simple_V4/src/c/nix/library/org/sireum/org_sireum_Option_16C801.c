#include <all.h>

// Option[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api]

B Option_16C801__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_DAEBD0: return T;
    case TNone_43D596: return T;
    default: return F;
  }
}

Option_16C801 Option_16C801__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_DAEBD0: break;
    case TNone_43D596: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.FlightPlanner_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_16C801) this;
}

void Option_16C801_string_(STACK_FRAME String result, Option_16C801 this);

void Option_16C801_get_(STACK_FRAME HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api result, Option_16C801 this) {
  switch (this->type) {
    case TSome_DAEBD0: Some_DAEBD0_get_(CALLER (HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api) result, (Some_DAEBD0) this); return;
    case TNone_43D596: None_43D596_get_(CALLER (HAMR_Simple_V4_SW_FlightPlanner_Impl_Initialization_Api) result, (None_43D596) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}