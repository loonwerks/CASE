#ifndef SIREUM_H_art_PortMode
#define SIREUM_H_art_PortMode
#include <types.h>

// art.PortMode
Z art_PortMode_numOfElements();
void art_PortMode_cprint(art_PortMode this, B isOut);
void art_PortMode_string_(STACK_FRAME String result, art_PortMode this);

#endif