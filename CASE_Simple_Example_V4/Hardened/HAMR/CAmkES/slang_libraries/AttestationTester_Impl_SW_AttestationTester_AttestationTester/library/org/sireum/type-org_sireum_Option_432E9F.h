#ifndef SIREUM_TYPE_H_org_sireum_Option_432E9F
#define SIREUM_TYPE_H_org_sireum_Option_432E9F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.AttestationTester_Impl_Initialization_Api]

#include <type-org_sireum_Some_4F9B23.h>
#include <type-org_sireum_None_570D44.h>

typedef union Option_432E9F *Option_432E9F;
union Option_432E9F {
  TYPE type;
  struct Some_4F9B23 Some_4F9B23;
  struct None_570D44 None_570D44;
};

#define DeclNewOption_432E9F(x) union Option_432E9F x = { 0 }

#ifdef __cplusplus
}
#endif

#endif