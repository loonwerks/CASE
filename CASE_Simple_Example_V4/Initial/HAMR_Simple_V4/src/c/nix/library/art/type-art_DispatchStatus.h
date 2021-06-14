#ifndef SIREUM_TYPE_H_art_DispatchStatus
#define SIREUM_TYPE_H_art_DispatchStatus

#ifdef __cplusplus
extern "C" {
#endif

#include <misc.h>

// art.DispatchStatus

#include <type-art_EventTriggered.h>
#include <type-art_TimeTriggered.h>

typedef union art_DispatchStatus *art_DispatchStatus;
union art_DispatchStatus {
  TYPE type;
  struct art_EventTriggered art_EventTriggered;
  struct art_TimeTriggered art_TimeTriggered;
};

#define DeclNewart_DispatchStatus(x) union art_DispatchStatus x = { 0 }

#ifdef __cplusplus
}
#endif

#endif