#ifndef SIREUM_TYPE_H_org_sireum_Option_ADA761
#define SIREUM_TYPE_H_org_sireum_Option_ADA761

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[CASE_MONITOR_TEST.VPM.CASE_Monitor1_Impl_Operational_Api]

#include <type-org_sireum_None_C84E72.h>
#include <type-org_sireum_Some_638F73.h>

typedef union Option_ADA761 *Option_ADA761;
union Option_ADA761 {
  TYPE type;
  struct None_C84E72 None_C84E72;
  struct Some_638F73 Some_638F73;
};

#define DeclNewOption_ADA761(x) union Option_ADA761 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif