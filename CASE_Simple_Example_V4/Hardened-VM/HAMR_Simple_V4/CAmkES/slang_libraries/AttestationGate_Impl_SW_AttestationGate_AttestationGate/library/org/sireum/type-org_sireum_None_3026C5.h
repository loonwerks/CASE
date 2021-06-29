#ifndef SIREUM_TYPE_H_org_sireum_None_3026C5
#define SIREUM_TYPE_H_org_sireum_None_3026C5

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[IS[Z, B]]

typedef struct None_3026C5 *None_3026C5;
struct None_3026C5 {
  TYPE type;
};

#define DeclNewNone_3026C5(x) struct None_3026C5 x = { .type = TNone_3026C5 }

#ifdef __cplusplus
}
#endif

#endif