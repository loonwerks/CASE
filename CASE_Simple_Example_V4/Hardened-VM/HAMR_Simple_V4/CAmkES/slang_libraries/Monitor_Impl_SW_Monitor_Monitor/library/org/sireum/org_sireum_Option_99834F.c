#include <all.h>

// Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api]

B Option_99834F__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_CF7B75: return T;
    case TNone_556BC5: return T;
    default: return F;
  }
}

Option_99834F Option_99834F__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TSome_CF7B75: break;
    case TNone_556BC5: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[HAMR_Simple_V4.SW.Monitor_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_99834F) this;
}

void Option_99834F_string_(STACK_FRAME String result, Option_99834F this);

void Option_99834F_get_(STACK_FRAME HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api result, Option_99834F this) {
  switch (this->type) {
    case TSome_CF7B75: Some_CF7B75_get_(CALLER (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) result, (Some_CF7B75) this); return;
    case TNone_556BC5: None_556BC5_get_(CALLER (HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api) result, (None_556BC5) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}