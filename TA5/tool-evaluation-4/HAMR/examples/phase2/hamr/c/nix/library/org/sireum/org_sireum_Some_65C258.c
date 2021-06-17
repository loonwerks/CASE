#include <all.h>

// Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Initialization_Api]

B Some_65C258__eq(Some_65C258 this, Some_65C258 other) {
  if (hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api__ne((hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api) &this->value, (hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api) &other->value)) return F;
  return T;
}

B Some_65C258__ne(Some_65C258 this, Some_65C258 other);

void Some_65C258_string_(STACK_FRAME String result, Some_65C258 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "string", 0);
  String_string_(SF result, string("Some("));
  hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_string_(SF result, (hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api) &this->value);
  String_string_(SF result, string(")"));
}

void Some_65C258_cprint(Some_65C258 this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("Some("), isOut);
  hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api_cprint((hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api) &this->value, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B Some_65C258__is(STACK_FRAME void* this);
Some_65C258 Some_65C258__as(STACK_FRAME void *this);

void Some_65C258_apply(STACK_FRAME Some_65C258 this, hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api value) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some_65C258", "apply", 0);
  Type_assign(&this->value, value, sizeof(struct hamr_SW_WaypointPlanManagerService_thr_Impl_Initialization_Api));
}