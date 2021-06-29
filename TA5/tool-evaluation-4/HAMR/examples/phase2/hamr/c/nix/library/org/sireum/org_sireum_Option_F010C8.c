#include <all.h>

// Option[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]

B Option_F010C8__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_45110B: return T;
    case TSome_018CE9: return T;
    default: return F;
  }
}

Option_F010C8 Option_F010C8__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_45110B: break;
    case TSome_018CE9: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_F010C8) this;
}

void Option_F010C8_string_(STACK_FRAME String result, Option_F010C8 this);

void Option_F010C8_get_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api result, Option_F010C8 this) {
  switch (this->type) {
    case TNone_45110B: None_45110B_get_(CALLER (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) result, (None_45110B) this); return;
    case TSome_018CE9: Some_018CE9_get_(CALLER (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) result, (Some_018CE9) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}