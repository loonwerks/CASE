#ifndef SIREUM_TYPE_H_org_sireum_Option_54EF1B
#define SIREUM_TYPE_H_org_sireum_Option_54EF1B

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]

#include <type-org_sireum_None_392677.h>
#include <type-org_sireum_Some_481DA5.h>

typedef union Option_54EF1B *Option_54EF1B;
union Option_54EF1B {
  TYPE type;
  struct None_392677 None_392677;
  struct Some_481DA5 Some_481DA5;
};

#define DeclNewOption_54EF1B(x) union Option_54EF1B x = { 0 }

#ifdef __cplusplus
}
#endif

#endif