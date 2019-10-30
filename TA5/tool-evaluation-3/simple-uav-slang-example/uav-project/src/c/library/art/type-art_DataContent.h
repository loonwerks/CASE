#ifndef SIREUM_TYPE_H_art_DataContent
#define SIREUM_TYPE_H_art_DataContent
#include <misc.h>

// art.DataContent

#include <type-ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload.h>
#include <type-ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload.h>
#include <type-art_Empty.h>

typedef union art_DataContent *art_DataContent;
union art_DataContent {
  TYPE type;
  struct ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload ACT_Demo_Dec2018__camkes_X_SW_Mission_Payload;
  struct ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload ACT_Demo_Dec2018__camkes_X_Base_Types_Integer_64_Payload;
  struct ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload ACT_Demo_Dec2018__camkes_X_SW_Command_Impl_Payload;
  struct ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload ACT_Demo_Dec2018__camkes_X_Base_Types_Boolean_Payload;
  struct ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload ACT_Demo_Dec2018__camkes_X_SW_MissionWindow_Payload;
  struct art_Empty art_Empty;
};

#define DeclNewart_DataContent(x) union art_DataContent x = { 0 }

#endif