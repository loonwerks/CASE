#ifndef SIREUM_TYPE_H_art_DataContent
#define SIREUM_TYPE_H_art_DataContent

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.DataContent

#include <type-art_Empty.h>
#include <type-hamr_Base_Types_Bits_Payload.h>

typedef union art_DataContent *art_DataContent;
union art_DataContent {
  TYPE type;
  struct art_Empty art_Empty;
  struct hamr_Base_Types_Bits_Payload hamr_Base_Types_Bits_Payload;
};

#define DeclNewart_DataContent(x) union art_DataContent x = { 0 }

#ifdef __cplusplus
}
#endif

#endif