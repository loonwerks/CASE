#include <all.h>

Z Some_488F47_get_(STACK_FRAME Some_488F47 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  return Some_488F47_value_(this);
}

B Some_E9D1E5_isEmpty_(STACK_FRAME Some_E9D1E5 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "isEmpty", 0);
  return F;
}

void Some_C19C7E_get_(STACK_FRAME uav_project_extern_SW_Mission result, Some_C19C7E this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "get", 0);
  Type_assign(result, Some_C19C7E_value_(this), sizeof(struct uav_project_extern_SW_Mission));
}

B Some_D29615_nonEmpty_(STACK_FRAME Some_D29615 this) {
  DeclNewStackFrame(caller, "Option.scala", "org.sireum.Some", "nonEmpty", 0);
  return T;
}