#ifndef SIREUM_TYPE_H_art_UPort
#define SIREUM_TYPE_H_art_UPort
#include <misc.h>

// art.UPort

#include <type-art_art_Port_9D6F5D.h>
#include <type-art_art_Port_446859.h>
#include <type-art_art_Port_2C63FD.h>
#include <type-art_art_Port_695448.h>
#include <type-art_art_Port_D7D05E.h>
#include <type-art_art_Port_FD6239.h>
#include <type-art_art_Port_2D3735.h>

typedef union art_UPort *art_UPort;
union art_UPort {
  TYPE type;
  struct art_Port_9D6F5D art_Port_9D6F5D;
  struct art_Port_446859 art_Port_446859;
  struct art_Port_2C63FD art_Port_2C63FD;
  struct art_Port_695448 art_Port_695448;
  struct art_Port_D7D05E art_Port_D7D05E;
  struct art_Port_FD6239 art_Port_FD6239;
  struct art_Port_2D3735 art_Port_2D3735;
};

#define DeclNewart_UPort(x) union art_UPort x = { 0 }

#endif