#ifndef SIREUM_TYPE_H_org_sireum_Option_87EF85
#define SIREUM_TYPE_H_org_sireum_Option_87EF85

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR.SW.RadioDriver_Attestation_Impl_Operational_Api]

#include <type-org_sireum_Some_6B4FE0.h>
#include <type-org_sireum_None_FF6291.h>

typedef union Option_87EF85 *Option_87EF85;
union Option_87EF85 {
  TYPE type;
  struct Some_6B4FE0 Some_6B4FE0;
  struct None_FF6291 None_FF6291;
};

#define DeclNewOption_87EF85(x) union Option_87EF85 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif