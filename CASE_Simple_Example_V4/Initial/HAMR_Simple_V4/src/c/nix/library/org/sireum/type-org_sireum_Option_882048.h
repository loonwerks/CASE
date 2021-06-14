#ifndef SIREUM_TYPE_H_org_sireum_Option_882048
#define SIREUM_TYPE_H_org_sireum_Option_882048

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Option[Z]

#include <type-org_sireum_Some_488F47.h>
#include <type-org_sireum_None_76463B.h>

typedef union Option_882048 *Option_882048;
union Option_882048 {
  TYPE type;
  struct Some_488F47 Some_488F47;
  struct None_76463B None_76463B;
};

#define DeclNewOption_882048(x) union Option_882048 x = { 0 }

#ifdef __cplusplus
}
#endif

#endif