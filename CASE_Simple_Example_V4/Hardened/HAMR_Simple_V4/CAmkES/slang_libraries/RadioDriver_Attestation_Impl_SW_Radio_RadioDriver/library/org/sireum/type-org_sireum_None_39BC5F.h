#ifndef SIREUM_TYPE_H_org_sireum_None_39BC5F
#define SIREUM_TYPE_H_org_sireum_None_39BC5F

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[art.UPort]

typedef struct None_39BC5F *None_39BC5F;
struct None_39BC5F {
  TYPE type;
};

#define DeclNewNone_39BC5F(x) struct None_39BC5F x = { .type = TNone_39BC5F }

#ifdef __cplusplus
}
#endif

#endif