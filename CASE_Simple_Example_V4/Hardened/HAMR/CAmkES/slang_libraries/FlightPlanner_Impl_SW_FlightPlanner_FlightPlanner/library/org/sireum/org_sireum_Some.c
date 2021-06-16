#include <all.h>

void Some_9C7E56_get_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_Initialization_Api result, Some_9C7E56 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_9C7E56_value_(this), sizeof(struct HAMR_SW_FlightPlanner_Impl_Initialization_Api));
  return;
}

void Some_EB994A_get_(STACK_FRAME HAMR_SW_FlightPlanner_Impl_Operational_Api result, Some_EB994A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_EB994A_value_(this), sizeof(struct HAMR_SW_FlightPlanner_Impl_Operational_Api));
  return;
}

B Some_D29615_nonEmpty_(STACK_FRAME Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "nonEmpty", 0);
  return T;
}

void Some_D29615_get_(STACK_FRAME art_DataContent result, Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_D29615_value_(this), sizeof(union art_DataContent));
  return;
}