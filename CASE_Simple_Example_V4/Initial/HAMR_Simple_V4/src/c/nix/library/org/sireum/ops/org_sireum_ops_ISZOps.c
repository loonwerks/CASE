#include <all.h>

B ops_ISZOps_A6D40E_contains_(STACK_FRAME ops_ISZOps_A6D40E this, Z e) {
  DeclNewStackFrame(caller, "SOps.scala", "org.sireum.ops.ISZOps", "contains", 0);

  sfUpdateLoc(217);
  {
    IS_82ABD8 t_1 = ops_ISZOps_A6D40E_s_(this);
    int8_t t_2 = (ops_ISZOps_A6D40E_s_(this))->size;
    for (int8_t t_3 = 0; t_3 < t_2; t_3++) {
      Z v = t_1->value[t_3];

      sfUpdateLoc(218);
      B t_0;
      {
        t_0 = Z__eq(v, e);
      }
      if (t_0) {
        return T;
      }
    }
  }
  return F;
}