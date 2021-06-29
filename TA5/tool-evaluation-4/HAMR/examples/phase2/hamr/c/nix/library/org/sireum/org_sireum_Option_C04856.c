#include <all.h>

// Option[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]

B Option_C04856__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_7290DE: return T;
    case TSome_30503C: return T;
    default: return F;
  }
}

Option_C04856 Option_C04856__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_7290DE: break;
    case TSome_30503C: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_C04856) this;
}

void Option_C04856_string_(STACK_FRAME String result, Option_C04856 this);

void Option_C04856_get_(STACK_FRAME hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api result, Option_C04856 this) {
  switch (this->type) {
    case TNone_7290DE: None_7290DE_get_(CALLER (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) result, (None_7290DE) this); return;
    case TSome_30503C: Some_30503C_get_(CALLER (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) result, (Some_30503C) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}