#ifndef SIREUM_TYPE_H_org_sireum_IS_08117A
#define SIREUM_TYPE_H_org_sireum_IS_08117A

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, art.UConnection]
#include <type-art_UConnection.h>

#define MaxIS_08117A 4
#define IS_08117ASizeT int8_t

typedef struct IS_08117A *IS_08117A;
struct IS_08117A {
  TYPE type;
  IS_08117ASizeT size;
  union art_UConnection value[MaxIS_08117A];
};

#define DeclNewIS_08117A(x) struct IS_08117A x = { .type = TIS_08117A }

#ifdef __cplusplus
}
#endif

#endif