#ifndef SIREUM_TYPE_H_art_UPort
#define SIREUM_TYPE_H_art_UPort
#include <misc.h>

// art.UPort

#include <type-art_art_Port_97EF76.h>
#include <type-art_art_Port_CBF210.h>
#include <type-art_art_Port_C0524D.h>
#include <type-art_art_Port_65F60A.h>
#include <type-art_art_Port_311EA2.h>

typedef union art_UPort *art_UPort;
union art_UPort {
  TYPE type;
  struct art_Port_97EF76 art_Port_97EF76;
  struct art_Port_CBF210 art_Port_CBF210;
  struct art_Port_C0524D art_Port_C0524D;
  struct art_Port_65F60A art_Port_65F60A;
  struct art_Port_311EA2 art_Port_311EA2;
};

#define DeclNewart_UPort(x) union art_UPort x = { 0 }

#endif