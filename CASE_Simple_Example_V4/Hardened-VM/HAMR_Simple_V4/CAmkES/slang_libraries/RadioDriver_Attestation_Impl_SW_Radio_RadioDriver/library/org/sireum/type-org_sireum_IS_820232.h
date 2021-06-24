#ifndef SIREUM_TYPE_H_org_sireum_IS_820232
#define SIREUM_TYPE_H_org_sireum_IS_820232

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, art.UPort]
#include <type-art_UPort.h>

#define MaxIS_820232 5
#define IS_820232SizeT int8_t

typedef struct IS_820232 *IS_820232;
struct IS_820232 {
  TYPE type;
  IS_820232SizeT size;
  union art_UPort value[MaxIS_820232];
};

#define DeclNewIS_820232(x) struct IS_820232 x = { .type = TIS_820232 }

#ifdef __cplusplus
}
#endif

#endif