#include <all.h>

// Option[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api]

B Option_CEC5BB__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_F9E3B8: return T;
    case TNone_39F351: return T;
    default: return F;
  }
}

Option_CEC5BB Option_CEC5BB__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_F9E3B8: break;
    case TNone_39F351: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.Filter_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_CEC5BB) this;
}

void Option_CEC5BB_string_(STACK_FRAME String result, Option_CEC5BB this);

void Option_CEC5BB_get_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api result, Option_CEC5BB this) {
  switch (this->type) {
    case TSome_F9E3B8: Some_F9E3B8_get_(CALLER (HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) result, (Some_F9E3B8) this); return;
    case TNone_39F351: None_39F351_get_(CALLER (HAMR_Simple_V4_SW_Filter_Impl_Initialization_Api) result, (None_39F351) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}