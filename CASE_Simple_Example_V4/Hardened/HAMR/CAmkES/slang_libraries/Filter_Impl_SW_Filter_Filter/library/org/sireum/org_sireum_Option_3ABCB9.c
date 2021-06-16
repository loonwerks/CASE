#include <all.h>

// Option[HAMR.SW.Filter_Impl_Initialization_Api]

B Option_3ABCB9__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_CA4FA3: return T;
    case TNone_E227E5: return T;
    default: return F;
  }
}

Option_3ABCB9 Option_3ABCB9__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_CA4FA3: break;
    case TNone_E227E5: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.Filter_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_3ABCB9) this;
}

void Option_3ABCB9_string_(STACK_FRAME String result, Option_3ABCB9 this);

void Option_3ABCB9_get_(STACK_FRAME HAMR_SW_Filter_Impl_Initialization_Api result, Option_3ABCB9 this) {
  switch (this->type) {
    case TSome_CA4FA3: Some_CA4FA3_get_(CALLER (HAMR_SW_Filter_Impl_Initialization_Api) result, (Some_CA4FA3) this); return;
    case TNone_E227E5: None_E227E5_get_(CALLER (HAMR_SW_Filter_Impl_Initialization_Api) result, (None_E227E5) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}