#ifndef SIREUM_TYPE_H_org_sireum_Option_869AEE
#define SIREUM_TYPE_H_org_sireum_Option_869AEE

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]

#include <type-org_sireum_None_FE10D0.h>
#include <type-org_sireum_Some_003142.h>

typedef union Option_869AEE *Option_869AEE;
union Option_869AEE {
  TYPE type;
  struct None_FE10D0 None_FE10D0;
  struct Some_003142 Some_003142;
};

#define DeclNewOption_869AEE(x) union Option_869AEE x = { 0 }

#ifdef __cplusplus
}
#endif

#endif