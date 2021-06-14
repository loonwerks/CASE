#ifndef SIREUM_TYPE_H_org_sireum_MBox2_1029D1
#define SIREUM_TYPE_H_org_sireum_MBox2_1029D1

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// MBox2[Z, Option[art.DataContent]]
#include <type-org_sireum_Option_8E9F45.h>

typedef struct MBox2_1029D1 *MBox2_1029D1;
struct MBox2_1029D1 {
  TYPE type;
  union Option_8E9F45 value2;
  Z value1;
};

#define DeclNewMBox2_1029D1(x) struct MBox2_1029D1 x = { .type = TMBox2_1029D1 }

#ifdef __cplusplus
}
#endif

#endif