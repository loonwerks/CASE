#ifndef SIREUM_H_org_sireum_Tuple2_D0E3BB
#define SIREUM_H_org_sireum_Tuple2_D0E3BB
#include <types.h>

// (Z, art.DataContent)
void Tuple2_D0E3BB_apply(STACK_FRAME Tuple2_D0E3BB this, Z _1, art_DataContent _2);
B Tuple2_D0E3BB__eq(Tuple2_D0E3BB this, Tuple2_D0E3BB other);
void Tuple2_D0E3BB_cprint(Tuple2_D0E3BB this, B isOut);
void Tuple2_D0E3BB_string(STACK_FRAME String result, Tuple2_D0E3BB this);

static inline Z Tuple2_D0E3BB_1(Tuple2_D0E3BB this) {
  return this->_1;
}

static inline art_DataContent Tuple2_D0E3BB_2(Tuple2_D0E3BB this) {
  return (art_DataContent) &this->_2;
};

static inline B Tuple2_D0E3BB__ne(Tuple2_D0E3BB this, Tuple2_D0E3BB other) {
  return !Tuple2_D0E3BB__eq(this, other);
}

#endif