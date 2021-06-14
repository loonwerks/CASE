#include <all.h>

// ops.ISZOps[Z]

B ops_ISZOps_A6D40E__eq(ops_ISZOps_A6D40E this, ops_ISZOps_A6D40E other) {
  if (IS_82ABD8__ne((IS_82ABD8) &this->s, (IS_82ABD8) &other->s)) return F;
  return T;
}

B ops_ISZOps_A6D40E__ne(ops_ISZOps_A6D40E this, ops_ISZOps_A6D40E other);

void ops_ISZOps_A6D40E_string_(STACK_FRAME String result, ops_ISZOps_A6D40E this) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "string", 0);
  String_string_(SF result, string("ISZOps("));
  IS_82ABD8_string_(SF result, (IS_82ABD8) &this->s);
  String_string_(SF result, string(")"));
}

void ops_ISZOps_A6D40E_cprint(ops_ISZOps_A6D40E this, B isOut) {
  #ifndef SIREUM_NO_PRINT
  String_cprint(string("ISZOps("), isOut);
  IS_82ABD8_cprint((IS_82ABD8) &this->s, isOut);
  String_cprint(string(")"), isOut);
  #endif
}

B ops_ISZOps_A6D40E__is(STACK_FRAME void* this);
ops_ISZOps_A6D40E ops_ISZOps_A6D40E__as(STACK_FRAME void *this);

void ops_ISZOps_A6D40E_apply(STACK_FRAME ops_ISZOps_A6D40E this, IS_82ABD8 s) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ops_ISZOps_A6D40E", "apply", 0);
  Type_assign(&this->s, s, sizeof(struct IS_82ABD8));
}