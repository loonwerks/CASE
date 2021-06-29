#ifndef SIREUM_TYPE_H_org_sireum_Some_08A5F4
#define SIREUM_TYPE_H_org_sireum_Some_08A5F4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.CASE_Monitor_Geo_thr_Impl_Operational_Api]
#include <type-hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api.h>

typedef struct Some_08A5F4 *Some_08A5F4;
struct Some_08A5F4 {
  TYPE type;
  struct hamr_SW_CASE_Monitor_Geo_thr_Impl_Operational_Api value;
};

#define DeclNewSome_08A5F4(x) struct Some_08A5F4 x = { .type = TSome_08A5F4 }

#ifdef __cplusplus
}
#endif

#endif