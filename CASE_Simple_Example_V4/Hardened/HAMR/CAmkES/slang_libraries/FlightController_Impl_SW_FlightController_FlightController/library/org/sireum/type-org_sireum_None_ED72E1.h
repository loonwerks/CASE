#ifndef SIREUM_TYPE_H_org_sireum_None_ED72E1
#define SIREUM_TYPE_H_org_sireum_None_ED72E1

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[art.Empty]

typedef struct None_ED72E1 *None_ED72E1;
struct None_ED72E1 {
  TYPE type;
};

#define DeclNewNone_ED72E1(x) struct None_ED72E1 x = { .type = TNone_ED72E1 }

#ifdef __cplusplus
}
#endif

#endif