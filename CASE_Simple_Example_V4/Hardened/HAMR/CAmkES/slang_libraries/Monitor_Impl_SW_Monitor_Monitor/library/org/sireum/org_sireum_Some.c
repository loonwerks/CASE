#include <all.h>

void Some_6EC2CA_get_(STACK_FRAME HAMR_SW_Monitor_Impl_Initialization_Api result, Some_6EC2CA this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_6EC2CA_value_(this), sizeof(struct HAMR_SW_Monitor_Impl_Initialization_Api));
  return;
}

void Some_3E502C_get_(STACK_FRAME HAMR_SW_Monitor_Impl_Operational_Api result, Some_3E502C this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_3E502C_value_(this), sizeof(struct HAMR_SW_Monitor_Impl_Operational_Api));
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