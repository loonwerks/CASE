#ifndef SIREUM_TYPE_H_org_sireum_Option_8A9C20
#define SIREUM_TYPE_H_org_sireum_Option_8A9C20

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Operational_Api]

#include <type-org_sireum_Some_E10DBF.h>
#include <type-org_sireum_None_29B833.h>

typedef union Option_8A9C20 *Option_8A9C20;
union Option_8A9C20 {
  TYPE type;
  struct Some_E10DBF Some_E10DBF;
  struct None_29B833 None_29B833;
};

#define DeclNewOption_8A9C20(x) union Option_8A9C20 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif