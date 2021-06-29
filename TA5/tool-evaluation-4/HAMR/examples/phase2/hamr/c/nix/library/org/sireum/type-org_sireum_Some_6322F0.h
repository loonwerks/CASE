#ifndef SIREUM_TYPE_H_org_sireum_Some_6322F0
#define SIREUM_TYPE_H_org_sireum_Some_6322F0

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Operational_Api]
#include <type-hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api.h>

typedef struct Some_6322F0 *Some_6322F0;
struct Some_6322F0 {
  TYPE type;
  struct hamr_SW_CASE_Monitor_Req_thr_Impl_Operational_Api value;
};

#define DeclNewSome_6322F0(x) struct Some_6322F0 x = { .type = TSome_6322F0 }

#ifdef __cplusplus
}
#endif

#endif