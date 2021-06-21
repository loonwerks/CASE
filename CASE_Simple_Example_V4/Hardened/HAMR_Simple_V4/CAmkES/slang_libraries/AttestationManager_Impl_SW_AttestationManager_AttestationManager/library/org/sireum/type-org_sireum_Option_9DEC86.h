#ifndef SIREUM_TYPE_H_org_sireum_Option_9DEC86
#define SIREUM_TYPE_H_org_sireum_Option_9DEC86

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[HAMR_Simple_V4.SW.AttestationManager_Impl_Initialization_Api]

#include <type-org_sireum_None_B594B8.h>
#include <type-org_sireum_Some_9DE0EF.h>

typedef union Option_9DEC86 *Option_9DEC86;
union Option_9DEC86 {
  TYPE type;
  struct None_B594B8 None_B594B8;
  struct Some_9DE0EF Some_9DE0EF;
};

#define DeclNewOption_9DEC86(x) union Option_9DEC86 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif