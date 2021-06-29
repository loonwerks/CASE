#ifndef SIREUM_TYPE_H_org_sireum_Option_680CAA
#define SIREUM_TYPE_H_org_sireum_Option_680CAA

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.AttestationTester_Impl_Initialization_Api]

#include <type-org_sireum_Some_CFA8D1.h>
#include <type-org_sireum_None_600AAD.h>

typedef union Option_680CAA *Option_680CAA;
union Option_680CAA {
  TYPE type;
  struct Some_CFA8D1 Some_CFA8D1;
  struct None_600AAD None_600AAD;
};

#define DeclNewOption_680CAA(x) union Option_680CAA x = { 0 }

#ifdef __cplusplus
}
#endif

#endif