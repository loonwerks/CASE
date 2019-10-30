#ifndef SIREUM_TYPE_H_org_sireum_Tuple2_D0E3BB
#define SIREUM_TYPE_H_org_sireum_Tuple2_D0E3BB
#include <misc.h>

// (Z, art.DataContent)
#include <type-art_DataContent.h>

typedef struct Tuple2_D0E3BB *Tuple2_D0E3BB;
struct Tuple2_D0E3BB {
  TYPE type;
  union art_DataContent _2;
  Z _1;
};

#define DeclNewTuple2_D0E3BB(x) struct Tuple2_D0E3BB x = { .type = TTuple2_D0E3BB }
#define Tuple2_D0E3BB_size(this) Z_C(2)

#endif