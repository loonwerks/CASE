#ifndef SIREUM_TYPE_H_art_UPort
#define SIREUM_TYPE_H_art_UPort

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.UPort

#include <type-art_art_Port_45E54D.h>
#include <type-art_art_Port_9CBF18.h>

typedef union art_UPort *art_UPort;
union art_UPort {
  TYPE type;
  struct art_Port_45E54D art_Port_45E54D;
  struct art_Port_9CBF18 art_Port_9CBF18;
};

#define DeclNewart_UPort(x) union art_UPort x = { 0 }

#ifdef __cplusplus
}
#endif

#endif