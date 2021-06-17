#ifndef SIREUM_TYPE_H_org_sireum_Some_967389
#define SIREUM_TYPE_H_org_sireum_Some_967389

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.CASE_Monitor_Req_thr_Impl_Initialization_Api]
#include <type-hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api.h>

typedef struct Some_967389 *Some_967389;
struct Some_967389 {
  TYPE type;
  struct hamr_SW_CASE_Monitor_Req_thr_Impl_Initialization_Api value;
};

#define DeclNewSome_967389(x) struct Some_967389 x = { .type = TSome_967389 }

#ifdef __cplusplus
}
#endif

#endif