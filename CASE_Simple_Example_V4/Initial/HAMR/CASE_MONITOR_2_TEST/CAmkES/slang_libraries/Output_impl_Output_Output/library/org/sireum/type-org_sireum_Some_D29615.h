#ifndef SIREUM_TYPE_H_org_sireum_Some_D29615
#define SIREUM_TYPE_H_org_sireum_Some_D29615

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// Some[art.DataContent]
#include <type-art_DataContent.h>

typedef struct Some_D29615 *Some_D29615;
struct Some_D29615 {
  TYPE type;
  union art_DataContent value;
};

#define DeclNewSome_D29615(x) struct Some_D29615 x = { .type = TSome_D29615 }

#ifdef __cplusplus
}
#endif

#endif