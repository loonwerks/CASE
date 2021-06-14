#ifndef SIREUM_TYPE_H_org_sireum_Option_7C94AD
#define SIREUM_TYPE_H_org_sireum_Option_7C94AD

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.RadioDriver_Impl_Initialization_Api]

#include <type-org_sireum_None_3F37D3.h>
#include <type-org_sireum_Some_9E368A.h>

typedef union Option_7C94AD *Option_7C94AD;
union Option_7C94AD {
  TYPE type;
  struct None_3F37D3 None_3F37D3;
  struct Some_9E368A Some_9E368A;
};

#define DeclNewOption_7C94AD(x) union Option_7C94AD x = { 0 }

#ifdef __cplusplus
}
#endif

#endif