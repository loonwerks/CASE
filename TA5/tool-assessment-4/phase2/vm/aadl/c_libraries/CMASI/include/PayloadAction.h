
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#include "VehicleAction.h"
#define LMCP_PayloadAction_SUB "afrl.cmasi.PayloadAction"

#define LMCP_PayloadAction_TYPENAME "PayloadAction"

#define LMCP_PayloadAction_TYPE 4

struct PayloadAction_struct {
    VehicleAction super;
// Units: None
    int64_t payloadid;

};
typedef struct PayloadAction_struct PayloadAction;
void lmcp_pp_PayloadAction(PayloadAction* s);
size_t lmcp_packsize_PayloadAction (PayloadAction* i);
size_t lmcp_pack_PayloadAction_header(uint8_t* buf, PayloadAction* i);
void lmcp_free_PayloadAction(PayloadAction* i, int out_malloced);
void lmcp_init_PayloadAction (PayloadAction** i);
int lmcp_unpack_PayloadAction(uint8_t** buf, size_t *size_remain,PayloadAction* outp);
size_t lmcp_pack_PayloadAction(uint8_t* buf, PayloadAction* i);
