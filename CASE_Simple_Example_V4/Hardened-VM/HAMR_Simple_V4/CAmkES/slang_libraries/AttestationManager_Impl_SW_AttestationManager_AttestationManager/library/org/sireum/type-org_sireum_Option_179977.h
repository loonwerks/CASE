#ifndef SIREUM_TYPE_H_org_sireum_Option_179977
#define SIREUM_TYPE_H_org_sireum_Option_179977

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.AttestationManager_Impl_Operational_Api]

#include <type-org_sireum_Some_B273EC.h>
#include <type-org_sireum_None_BCB2D2.h>

typedef union Option_179977 *Option_179977;
union Option_179977 {
  TYPE type;
  struct Some_B273EC Some_B273EC;
  struct None_BCB2D2 None_BCB2D2;
};

#define DeclNewOption_179977(x) union Option_179977 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif