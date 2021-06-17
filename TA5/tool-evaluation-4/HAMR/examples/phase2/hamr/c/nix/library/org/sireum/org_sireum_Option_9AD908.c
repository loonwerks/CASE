#include <all.h>

// Option[hamr.SW.UxAS_thr_Impl_Initialization_Api]

B Option_9AD908__is(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_306A73: return T;
    case TSome_5BDE4D: return T;
    default: return F;
  }
}

Option_9AD908 Option_9AD908__as(STACK_FRAME void *this) {
  switch(((Type) this)->type) {
    case TNone_306A73: break;
    case TSome_5BDE4D: break;
    default:
      fprintf(stderr, "Invalid cast from %s to Option[hamr.SW.UxAS_thr_Impl_Initialization_Api].", TYPE_string_(this));
      sfAbortImpl(CALLER "");
  }
  return (Option_9AD908) this;
}

void Option_9AD908_string_(STACK_FRAME String result, Option_9AD908 this);

void Option_9AD908_get_(STACK_FRAME hamr_SW_UxAS_thr_Impl_Initialization_Api result, Option_9AD908 this) {
  switch (this->type) {
    case TNone_306A73: None_306A73_get_(CALLER (hamr_SW_UxAS_thr_Impl_Initialization_Api) result, (None_306A73) this); return;
    case TSome_5BDE4D: Some_5BDE4D_get_(CALLER (hamr_SW_UxAS_thr_Impl_Initialization_Api) result, (Some_5BDE4D) this); return;
    default: fprintf(stderr, "Infeasible TYPE: %s.\n", TYPE_string_(this)); exit(1);
  }
}