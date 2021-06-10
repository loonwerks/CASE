
#pragma once

#include <sys/types.h>

#include "common/struct_defines.h"

#define ATTRIBUTE_DELIMITER '$'
#define FIELD_DELIMITER '|'

struct AddressAttributedMessage_struct {
    
    char * attributes;
    lmcp_object * lmcp_obj;
    uint32_t checksum;

};
typedef struct AddressAttributedMessage_struct AddressAttributedMessage;

void lmcp_pp_AddressAttributedMessage(AddressAttributedMessage* s);
size_t lmcp_packsize_AddressAttributedMessage(AddressAttributedMessage* i);
void lmcp_free_AddressAttributedMessage(AddressAttributedMessage* out, int out_malloced);
void lmcp_init_AddressAttributedMessage (AddressAttributedMessage** i);
//int lmcp_unpack_AddressAttributedMessage(uint8_t** inb, size_t *size_remain, AddressAttributedMessage* outp);
size_t lmcp_pack_AddressAttributedMessage(uint8_t* buf, AddressAttributedMessage* i);
uint32_t computeChecksum(const uint8_t* buf, const size_t size);
