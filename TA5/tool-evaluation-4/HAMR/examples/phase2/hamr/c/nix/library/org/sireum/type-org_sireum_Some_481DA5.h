#ifndef SIREUM_TYPE_H_org_sireum_Some_481DA5
#define SIREUM_TYPE_H_org_sireum_Some_481DA5

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.CASE_Filter_LST_thr_Impl_Operational_Api]
#include <type-hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api.h>

typedef struct Some_481DA5 *Some_481DA5;
struct Some_481DA5 {
  TYPE type;
  struct hamr_SW_CASE_Filter_LST_thr_Impl_Operational_Api value;
};

#define DeclNewSome_481DA5(x) struct Some_481DA5 x = { .type = TSome_481DA5 }

#ifdef __cplusplus
}
#endif

#endif