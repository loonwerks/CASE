#include <all.h>

// Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]

B Some_003142__eq(Some_003142 this, Some_003142 other) {
  if (hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api__ne((hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) &this->value, (hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) &other->value)) return F;
  return T;
}

B Some_003142__ne(Some_003142 this, Some_003142 other);

void Some_003142_string_(STACK_FRAME String result, Some_003142 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_string_(SF result, (hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_003142_cprint(Some_003142 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api_cprint((hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_003142__is(STACK_FRAME void* this);
Some_003142 Some_003142__as(STACK_FRAME void *this);

void Some_003142_apply(STACK_FRAME Some_003142 this, hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_003142", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api));
}