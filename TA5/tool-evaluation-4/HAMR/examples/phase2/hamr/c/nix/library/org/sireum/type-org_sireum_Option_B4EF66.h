#ifndef SIREUM_TYPE_H_org_sireum_Option_B4EF66
#define SIREUM_TYPE_H_org_sireum_Option_B4EF66

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.RadioDriver_Attestation_thr_Impl_Operational_Api]

#include <type-org_sireum_None_69DE14.h>
#include <type-org_sireum_Some_181FDB.h>

typedef union Option_B4EF66 *Option_B4EF66;
union Option_B4EF66 {
  TYPE type;
  struct None_69DE14 None_69DE14;
  struct Some_181FDB Some_181FDB;
};

#define DeclNewOption_B4EF66(x) union Option_B4EF66 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif