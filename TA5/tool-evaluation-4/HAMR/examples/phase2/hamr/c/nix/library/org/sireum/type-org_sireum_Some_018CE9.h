#ifndef SIREUM_TYPE_H_org_sireum_Some_018CE9
#define SIREUM_TYPE_H_org_sireum_Some_018CE9

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]
#include <type-hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api.h>

typedef struct Some_018CE9 *Some_018CE9;
struct Some_018CE9 {
  TYPE type;
  struct hamr_SW_FlyZonesDatabase_thr_Impl_Operational_Api value;
};

#define DeclNewSome_018CE9(x) struct Some_018CE9 x = { .type = TSome_018CE9 }

#ifdef __cplusplus
}
#endif

#endif