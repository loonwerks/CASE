#ifndef SIREUM_TYPE_H_org_sireum_None_964667
#define SIREUM_TYPE_H_org_sireum_None_964667

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// None[art.DataContent]

typedef struct None_964667 *None_964667;
struct None_964667 {
  TYPE type;
};

#define DeclNewNone_964667(x) struct None_964667 x = { .type = TNone_964667 }

#ifdef __cplusplus
}
#endif

#endif