#ifndef SIREUM_TYPE_H_art_art_Connection_A6262C
#define SIREUM_TYPE_H_art_art_Connection_A6262C
#include <misc.h>

// art.Connection[S64]
#include <type-art_art_Port_CBF210.h>
#include <type-art_art_Port_CBF210.h>

typedef struct art_Connection_A6262C *art_Connection_A6262C;
struct art_Connection_A6262C {
  TYPE type;
  struct art_Port_CBF210 from;
  struct art_Port_CBF210 to;
};

#define DeclNewart_Connection_A6262C(x) struct art_Connection_A6262C x = { .type = Tart_Connection_A6262C }

#endif