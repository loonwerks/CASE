#ifndef SIREUM_TYPE_H_org_sireum_Some_181FDB
#define SIREUM_TYPE_H_org_sireum_Some_181FDB

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]
#include <type-hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api.h>

typedef struct Some_181FDB *Some_181FDB;
struct Some_181FDB {
  TYPE type;
  struct hamr_SW_RadioDriver_Attestation_thr_Impl_Operational_Api value;
};

#define DeclNewSome_181FDB(x) struct Some_181FDB x = { .type = TSome_181FDB }

#ifdef __cplusplus
}
#endif

#endif