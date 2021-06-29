#ifndef SIREUM_H_art_PortMode_Type
#define SIREUM_H_art_PortMode_Type

#ifdef __cplusplus
extern "C" {
#endif

#include <types.h>

// art.PortMode.Type
Z art_PortMode_Type_numOfElements(void);
void art_PortMode_Type_cprint(art_PortMode_Type this, B isOut);
void art_PortMode_Type_string_(STACK_FRAME String result, art_PortMode_Type this);

#ifdef __cplusplus
}
#endif

#endif