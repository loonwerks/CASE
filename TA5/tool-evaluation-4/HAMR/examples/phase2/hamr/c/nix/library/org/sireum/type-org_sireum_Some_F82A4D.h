#ifndef SIREUM_TYPE_H_org_sireum_Some_F82A4D
#define SIREUM_TYPE_H_org_sireum_Some_F82A4D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.CASE_AttestationGate_thr_Impl_Operational_Api]
#include <type-hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api.h>

typedef struct Some_F82A4D *Some_F82A4D;
struct Some_F82A4D {
  TYPE type;
  struct hamr_SW_CASE_AttestationGate_thr_Impl_Operational_Api value;
};

#define DeclNewSome_F82A4D(x) struct Some_F82A4D x = { .type = TSome_F82A4D }

#ifdef __cplusplus
}
#endif

#endif