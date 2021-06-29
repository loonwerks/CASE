#ifndef SIREUM_TYPE_H_org_sireum_Option_849849
#define SIREUM_TYPE_H_org_sireum_Option_849849

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.CASE_AttestationGate_thr_Impl_Initialization_Api]

#include <type-org_sireum_None_78A1D4.h>
#include <type-org_sireum_Some_D48312.h>

typedef union Option_849849 *Option_849849;
union Option_849849 {
  TYPE type;
  struct None_78A1D4 None_78A1D4;
  struct Some_D48312 Some_D48312;
};

#define DeclNewOption_849849(x) union Option_849849 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif