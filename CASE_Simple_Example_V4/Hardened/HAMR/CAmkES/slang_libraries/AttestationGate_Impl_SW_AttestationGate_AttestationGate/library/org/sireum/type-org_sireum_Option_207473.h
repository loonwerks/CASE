#ifndef SIREUM_TYPE_H_org_sireum_Option_207473
#define SIREUM_TYPE_H_org_sireum_Option_207473

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.AttestationGate_Impl_Initialization_Api]

#include <type-org_sireum_Some_925053.h>
#include <type-org_sireum_None_BE0654.h>

typedef union Option_207473 *Option_207473;
union Option_207473 {
  TYPE type;
  struct Some_925053 Some_925053;
  struct None_BE0654 None_BE0654;
};

#define DeclNewOption_207473(x) union Option_207473 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif