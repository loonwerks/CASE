#ifndef SIREUM_TYPE_H_art_Empty
#define SIREUM_TYPE_H_art_Empty

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Empty

typedef struct art_Empty *art_Empty;
struct art_Empty {
  TYPE type;
};

#define DeclNewart_Empty(x) struct art_Empty x = { .type = Tart_Empty }

#ifdef __cplusplus
}
#endif

#endif