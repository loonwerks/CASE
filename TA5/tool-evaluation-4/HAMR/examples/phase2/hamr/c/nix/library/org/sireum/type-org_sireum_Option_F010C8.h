#ifndef SIREUM_TYPE_H_org_sireum_Option_F010C8
#define SIREUM_TYPE_H_org_sireum_Option_F010C8

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[hamr.SW.FlyZonesDatabase_thr_Impl_Operational_Api]

#include <type-org_sireum_None_45110B.h>
#include <type-org_sireum_Some_018CE9.h>

typedef union Option_F010C8 *Option_F010C8;
union Option_F010C8 {
  TYPE type;
  struct None_45110B None_45110B;
  struct Some_018CE9 Some_018CE9;
};

#define DeclNewOption_F010C8(x) union Option_F010C8 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif