#ifndef SIREUM_TYPE_H_org_sireum_MS_E444B2
#define SIREUM_TYPE_H_org_sireum_MS_E444B2

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MS[Z, IS[Z, Z]]
#include <type-org_sireum_IS_82ABD8.h>

#define MaxMS_E444B2 16
#define MS_E444B2SizeT int8_t

typedef struct MS_E444B2 *MS_E444B2;
struct MS_E444B2 {
  TYPE type;
  MS_E444B2SizeT size;
  struct IS_82ABD8 value[MaxMS_E444B2];
};

#define DeclNewMS_E444B2(x) struct MS_E444B2 x = { .type = TMS_E444B2 }

#ifdef __cplusplus
}
#endif

#endif