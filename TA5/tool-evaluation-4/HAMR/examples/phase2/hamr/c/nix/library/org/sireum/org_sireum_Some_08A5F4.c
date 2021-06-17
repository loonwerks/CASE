#include <all.h>

// Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]

B Some_08A5F4__eq(Some_08A5F4 this, Some_08A5F4 other) {
  if (hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api__ne((hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &this->value, (hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_08A5F4__ne(Some_08A5F4 this, Some_08A5F4 other);

void Some_08A5F4_string_(STACK_FRAME String result, Some_08A5F4 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_08A5F4_cprint(Some_08A5F4 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api_cprint((hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_08A5F4__is(STACK_FRAME void* this);
Some_08A5F4 Some_08A5F4__as(STACK_FRAME void *this);

void Some_08A5F4_apply(STACK_FRAME Some_08A5F4 this, hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_08A5F4", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api));
}