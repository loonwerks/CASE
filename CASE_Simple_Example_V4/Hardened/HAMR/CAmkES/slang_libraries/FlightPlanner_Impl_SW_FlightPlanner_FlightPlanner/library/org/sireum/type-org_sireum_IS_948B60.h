#ifndef SIREUM_TYPE_H_org_sireum_IS_948B60
#define SIREUM_TYPE_H_org_sireum_IS_948B60

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, String]

#define MaxIS_948B60 16
#define IS_948B60SizeT int8_t

typedef struct IS_948B60 *IS_948B60;
struct IS_948B60 {
  TYPE type;
  IS_948B60SizeT size;
  struct StaticString value[MaxIS_948B60];
};

#define DeclNewIS_948B60(x) struct IS_948B60 x = { .type = TIS_948B60 }

#ifdef __cplusplus
}
#endif

#endif