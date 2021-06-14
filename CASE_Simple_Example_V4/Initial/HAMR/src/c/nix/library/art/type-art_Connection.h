#ifndef SIREUM_TYPE_H_art_Connection
#define SIREUM_TYPE_H_art_Connection

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.Connection
#include <type-art_UPort.h>
#include <type-art_UPort.h>

typedef struct art_Connection *art_Connection;
struct art_Connection {
  TYPE type;
  union art_UPort from;
  union art_UPort to;
};

#define DeclNewart_Connection(x) struct art_Connection x = { .type = Tart_Connection }

#ifdef __cplusplus
}
#endif

#endif