#include <all.h>

// Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]

B Option_869AEE__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_FE10D0: return T;
    case TSome_003142: return T;
    default: return F;
  }
}

Option_869AEE Option_869AEE__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_FE10D0: break;
    case TSome_003142: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_869AEE) this;
}

void Option_869AEE_string_(STACK_FRAME String result, Option_869AEE this);

void Option_869AEE_get_(STACK_FRAME hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api result, Option_869AEE this) {
  switch (this->type) {
    case TNone_FE10D0: None_FE10D0_get_(CALLER (hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) result, (None_FE10D0) this); return;
    case TSome_003142: Some_003142_get_(CALLER (hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) result, (Some_003142) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}