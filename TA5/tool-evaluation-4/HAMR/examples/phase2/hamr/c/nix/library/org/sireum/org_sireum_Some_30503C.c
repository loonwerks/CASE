#include <all.h>

// Some[hamr.SW.FlyZonesDatabase_thr_Impl_Initialization_Api]

B Some_30503C__eq(Some_30503C this, Some_30503C other) {
  if (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api__ne((hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &this->value, (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_30503C__ne(Some_30503C this, Some_30503C other);

void Some_30503C_string_(STACK_FRAME String result, Some_30503C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_30503C_cprint(Some_30503C this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api_cprint((hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_30503C__is(STACK_FRAME void* this);
Some_30503C Some_30503C__as(STACK_FRAME void *this);

void Some_30503C_apply(STACK_FRAME Some_30503C this, hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_30503C", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Initialization_Api));
}