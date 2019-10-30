#ifndef SIREUM_TYPE_H_art_art_Connection_CAF041
#define SIREUM_TYPE_H_art_art_Connection_CAF041
#include <misc.h>

// art.Connection[ACT_Demo_Dec2018__camkes_X.Base_Types.Integer_64]
#include <type-art_art_Port_446859.h>
#include <type-art_art_Port_446859.h>

typedef struct art_Connection_CAF041 *art_Connection_CAF041;
struct art_Connection_CAF041 {
  TYPE type;
  struct art_Port_446859 from;
  struct art_Port_446859 to;
};

#define DeclNewart_Connection_CAF041(x) struct art_Connection_CAF041 x = { .type = Tart_Connection_CAF041 }


#endif