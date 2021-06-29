#ifndef SIREUM_TYPE_H_org_sireum_IS_C4F575
#define SIREUM_TYPE_H_org_sireum_IS_C4F575

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// IS[Z, B]
#include <type-org_sireum_U8.h>

#define MaxIS_C4F575 16384
#define IS_C4F575SizeT intmax_t

typedef struct IS_C4F575 *IS_C4F575;
struct IS_C4F575 {
  TYPE type;
  IS_C4F575SizeT size;
  U8 value[MaxIS_C4F575 / 8 + 1];
};

#define DeclNewIS_C4F575(x) struct IS_C4F575 x = { .type = TIS_C4F575 }

#ifdef __cplusplus
}
#endif

#endif