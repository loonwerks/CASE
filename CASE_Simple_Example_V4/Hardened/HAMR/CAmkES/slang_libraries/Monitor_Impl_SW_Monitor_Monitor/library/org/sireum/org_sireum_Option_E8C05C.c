#include <all.h>

// Option[HAMR.SW.Monitor_Impl_Operational_Api]

B Option_E8C05C__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3E502C: return T;
    case TNone_BE5310: return T;
    default: return F;
  }
}

Option_E8C05C Option_E8C05C__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_3E502C: break;
    case TNone_BE5310: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.Monitor_Impl_Operational_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_E8C05C) this;
}

void Option_E8C05C_string_(STACK_FRAME String result, Option_E8C05C this);

void Option_E8C05C_get_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api result, Option_E8C05C this) {
  switch (this->type) {
    case TSome_3E502C: Some_3E502C_get_(CALLER (HAMR_SW_Monitor_Impl_Operational_Api) result, (Some_3E502C) this); return;
    case TNone_BE5310: None_BE5310_get_(CALLER (HAMR_SW_Monitor_Impl_Operational_Api) result, (None_BE5310) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}