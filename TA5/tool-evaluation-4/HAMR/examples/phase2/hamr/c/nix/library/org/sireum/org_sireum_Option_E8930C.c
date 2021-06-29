#include <all.h>

// Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]

B Option_E8930C__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_844F3C: return T;
    case TSome_65C258: return T;
    default: return F;
  }
}

Option_E8930C Option_E8930C__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_844F3C: break;
    case TSome_65C258: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_E8930C) this;
}

void Option_E8930C_string_(STACK_FRAME String result, Option_E8930C this);

void Option_E8930C_get_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api result, Option_E8930C this) {
  switch (this->type) {
    case TNone_844F3C: None_844F3C_get_(CALLER (hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api) result, (None_844F3C) this); return;
    case TSome_65C258: Some_65C258_get_(CALLER (hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api) result, (Some_65C258) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}