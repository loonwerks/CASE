#ifndef SIREUM_TYPE_H_org_sireum_IS_7E8796
#define SIREUM_TYPE_H_org_sireum_IS_7E8796

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, art.Bridge]
#include <type-art_Bridge.h>

#define MaxIS_7E8796 3
#define IS_7E8796SizeT int8_t

typedef struct IS_7E8796 *IS_7E8796;
struct IS_7E8796 {
  TYPE type;
  IS_7E8796SizeT size;
  union art_Bridge value[MaxIS_7E8796];
};

#define DeclNewIS_7E8796(x) struct IS_7E8796 x = { .type = TIS_7E8796 }

#ifdef __cplusplus
}
#endif

#endif