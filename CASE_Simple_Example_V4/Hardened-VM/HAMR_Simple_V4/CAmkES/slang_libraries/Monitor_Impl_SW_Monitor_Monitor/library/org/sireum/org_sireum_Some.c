#include <all.h>

void Some_CF7B75_get_(STACK_FRAME HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api result, Some_CF7B75 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_CF7B75_value_(this), sizeof(struct HAMR_Simple_V4_SW_Monitor_Impl_Initialization_Api));
  return;
}

void Some_E0238A_get_(STACK_FRAME HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api result, Some_E0238A this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_E0238A_value_(this), sizeof(struct HAMR_Simple_V4_SW_Monitor_Impl_Operational_Api));
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