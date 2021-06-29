#ifndef SIREUM_TYPE_H_org_sireum_Option_089975
#define SIREUM_TYPE_H_org_sireum_Option_089975

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Operational_Api]

#include <type-org_sireum_Some_3A7E15.h>
#include <type-org_sireum_None_6557E1.h>

typedef union Option_089975 *Option_089975;
union Option_089975 {
  TYPE type;
  struct Some_3A7E15 Some_3A7E15;
  struct None_6557E1 None_6557E1;
};

#define DeclNewOption_089975(x) union Option_089975 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif