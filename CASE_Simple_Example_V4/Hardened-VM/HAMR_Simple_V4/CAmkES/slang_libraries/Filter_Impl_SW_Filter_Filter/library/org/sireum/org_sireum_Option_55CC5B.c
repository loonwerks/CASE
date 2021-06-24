#include <all.h>

// Option[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api]

B Option_55CC5B__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_FDA5C5: return T;
    case TNone_968C19: return T;
    default: return F;
  }
}

Option_55CC5B Option_55CC5B__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_FDA5C5: break;
    case TNone_968C19: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.Filter_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_55CC5B) this;
}

void Option_55CC5B_string_(STACK_FRAME String result, Option_55CC5B this);

void Option_55CC5B_get_(STACK_FRAME HAMR_Simple_V4_SW_Filter_Impl_Operational_Api result, Option_55CC5B this) {
  switch (this->type) {
    case TSome_FDA5C5: Some_FDA5C5_get_(CALLER (HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) result, (Some_FDA5C5) this); return;
    case TNone_968C19: None_968C19_get_(CALLER (HAMR_Simple_V4_SW_Filter_Impl_Operational_Api) result, (None_968C19) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}