#ifndef SIREUM_TYPE_H_org_sireum_MBox2_1CBFC4
#define SIREUM_TYPE_H_org_sireum_MBox2_1CBFC4

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MBox2[Z, art.DataContent]
#include <type-art_DataContent.h>

typedef struct MBox2_1CBFC4 *MBox2_1CBFC4;
struct MBox2_1CBFC4 {
  TYPE type;
  union art_DataContent value2;
  Z value1;
};

#define DeclNewMBox2_1CBFC4(x) struct MBox2_1CBFC4 x = { .type = TMBox2_1CBFC4 }

#ifdef __cplusplus
}
#endif

#endif