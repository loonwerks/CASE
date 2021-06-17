#include <all.h>

// Some[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]

B Some_018CE9__eq(Some_018CE9 this, Some_018CE9 other) {
  if (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api__ne((hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &this->value, (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_018CE9__ne(Some_018CE9 this, Some_018CE9 other);

void Some_018CE9_string_(STACK_FRAME String result, Some_018CE9 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_018CE9_cprint(Some_018CE9 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api_cprint((hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_018CE9__is(STACK_FRAME void* this);
Some_018CE9 Some_018CE9__as(STACK_FRAME void *this);

void Some_018CE9_apply(STACK_FRAME Some_018CE9 this, hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_018CE9", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api));
}