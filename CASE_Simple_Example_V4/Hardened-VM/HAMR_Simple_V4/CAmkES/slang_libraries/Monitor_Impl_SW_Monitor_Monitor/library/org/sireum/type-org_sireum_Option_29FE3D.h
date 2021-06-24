#ifndef SIREUM_TYPE_H_org_sireum_Option_29FE3D
#define SIREUM_TYPE_H_org_sireum_Option_29FE3D

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.Monitor_Impl_Operational_Api]

#include <type-org_sireum_Some_E0238A.h>
#include <type-org_sireum_None_D81833.h>

typedef union Option_29FE3D *Option_29FE3D;
union Option_29FE3D {
  TYPE type;
  struct Some_E0238A Some_E0238A;
  struct None_D81833 None_D81833;
};

#define DeclNewOption_29FE3D(x) union Option_29FE3D x = { 0 }

#ifdef __cplusplus
}
#endif

#endif