#ifndef SIREUM_TYPE_H_org_sireum_Option_F157C7
#define SIREUM_TYPE_H_org_sireum_Option_F157C7

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Attestation_Impl_Initialization_Api]

#include <type-org_sireum_Some_3030EA.h>
#include <type-org_sireum_None_830D4E.h>

typedef union Option_F157C7 *Option_F157C7;
union Option_F157C7 {
  TYPE type;
  struct Some_3030EA Some_3030EA;
  struct None_830D4E None_830D4E;
};

#define DeclNewOption_F157C7(x) union Option_F157C7 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif