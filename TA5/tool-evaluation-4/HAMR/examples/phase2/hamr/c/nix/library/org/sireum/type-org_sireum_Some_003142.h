#ifndef SIREUM_TYPE_H_org_sireum_Some_003142
#define SIREUM_TYPE_H_org_sireum_Some_003142

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.WaypointPlanManagerService_thr_Impl_Operational_Api]
#include <type-hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api.h>

typedef struct Some_003142 *Some_003142;
struct Some_003142 {
  TYPE type;
  struct hamr_SW_WaypointPlanManagerService_thr_Impl_Operational_Api value;
};

#define DeclNewSome_003142(x) struct Some_003142 x = { .type = TSome_003142 }

#ifdef __cplusplus
}
#endif

#endif