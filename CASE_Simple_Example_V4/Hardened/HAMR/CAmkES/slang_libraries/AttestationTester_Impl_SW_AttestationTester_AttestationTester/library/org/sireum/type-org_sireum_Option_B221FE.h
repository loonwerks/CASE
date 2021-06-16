#ifndef SIREUM_TYPE_H_org_sireum_Option_B221FE
#define SIREUM_TYPE_H_org_sireum_Option_B221FE

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.AttestationTester_Impl_Operational_Api]

#include <type-org_sireum_Some_E55508.h>
#include <type-org_sireum_None_3A9994.h>

typedef union Option_B221FE *Option_B221FE;
union Option_B221FE {
  TYPE type;
  struct Some_E55508 Some_E55508;
  struct None_3A9994 None_3A9994;
};

#define DeclNewOption_B221FE(x) union Option_B221FE x = { 0 }

#ifdef __cplusplus
}
#endif

#endif