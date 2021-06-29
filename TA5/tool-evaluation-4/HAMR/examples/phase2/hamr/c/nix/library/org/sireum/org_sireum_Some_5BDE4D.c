#include <all.h>

// Some[hamr.SW.UxAS_thr_Impl_Initialization_Api]

B Some_5BDE4D__eq(Some_5BDE4D this, Some_5BDE4D other) {
  if (hamr_SW_UxAS_thr_Impl_Initialization_Api__ne((hamr_SW_UxAS_thr_Impl_Initialization_Api) &this->value, (hamr_SW_UxAS_thr_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_5BDE4D__ne(Some_5BDE4D this, Some_5BDE4D other);

void Some_5BDE4D_string_(STACK_FRAME String result, Some_5BDE4D this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_UxAS_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_UxAS_thr_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_5BDE4D_cprint(Some_5BDE4D this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_UxAS_thr_Impl_Initialization_Api_cprint((hamr_SW_UxAS_thr_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_5BDE4D__is(STACK_FRAME void* this);
Some_5BDE4D Some_5BDE4D__as(STACK_FRAME void *this);

void Some_5BDE4D_apply(STACK_FRAME Some_5BDE4D this, hamr_SW_UxAS_thr_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_5BDE4D", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_UxAS_thr_Impl_Initialization_Api));
}