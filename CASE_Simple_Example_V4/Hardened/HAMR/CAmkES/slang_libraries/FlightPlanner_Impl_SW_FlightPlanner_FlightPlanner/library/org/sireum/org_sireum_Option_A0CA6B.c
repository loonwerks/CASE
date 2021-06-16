#include <all.h>

// Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api]

B Option_A0CA6B__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_9C7E56: return T;
    case TNone_BA6ABF: return T;
    default: return F;
  }
}

Option_A0CA6B Option_A0CA6B__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_9C7E56: break;
    case TNone_BA6ABF: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.FlightPlanner_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_A0CA6B) this;
}

void Option_A0CA6B_string_(STACK_FRAME String result, Option_A0CA6B this);

void Option_A0CA6B_get_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_Initialization_Api result, Option_A0CA6B this) {
  switch (this->type) {
    case TSome_9C7E56: Some_9C7E56_get_(CALLER (HAMR_SW_FlightPlanner_Impl_Initialization_Api) result, (Some_9C7E56) this); return;
    case TNone_BA6ABF: None_BA6ABF_get_(CALLER (HAMR_SW_FlightPlanner_Impl_Initialization_Api) result, (None_BA6ABF) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}