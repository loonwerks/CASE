#include <all.h>

// Option[HAMR.SW.Monitor_Impl_Initialization_Api]

B Option_27551F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_6EC2CA: return T;
    case TNone_2A8B4A: return T;
    default: return F;
  }
}

Option_27551F Option_27551F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_6EC2CA: break;
    case TNone_2A8B4A: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR.SW.Monitor_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_27551F) this;
}

void Option_27551F_string_(STACK_FRAME String result, Option_27551F this);

void Option_27551F_get_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api result, Option_27551F this) {
  switch (this->type) {
    case TSome_6EC2CA: Some_6EC2CA_get_(CALLER (HAMR_SW_Monitor_Impl_Initialization_Api) result, (Some_6EC2CA) this); return;
    case TNone_2A8B4A: None_2A8B4A_get_(CALLER (HAMR_SW_Monitor_Impl_Initialization_Api) result, (None_2A8B4A) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}