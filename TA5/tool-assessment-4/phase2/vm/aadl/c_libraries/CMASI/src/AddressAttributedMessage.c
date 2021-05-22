#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "AddressAttributedMessage.h"
#include "lmcp.h"

void lmcp_pp_AddressAttributedMessage(AddressAttributedMessage* s) {
    printf("AddressAttributedMessage {\n");
    printf("Attributes {\n");
    printf("%s\n", s->attributes);
    printf("},\n");
    printf("lmcp_obj {\n");
    lmcp_pp(s->lmcp_obj);
    printf("\n}");
}


size_t lmcp_packsize_AddressAttributedMessage(AddressAttributedMessage* i) {
    size_t out = 0;
    
    // Attributes
    out += strlen(i->attributes);
    
    // LMCP object
    out += lmcp_msgsize(i->lmcp_obj);
    
    // Checksum
    out += 4;

    return out;
}


void lmcp_free_AddressAttributedMessage(AddressAttributedMessage* out, int out_malloced) {
    if (out == NULL) {
        return;
    }

    if (out_malloced == 1) {
        free(out);
    }
}


void lmcp_init_AddressAttributedMessage (AddressAttributedMessage** i) {
    if (i == NULL) return;
    (*i) = calloc(1, sizeof(AddressAttributedMessage));
}


// int lmcp_unpack_AddressAttributedMessage(uint8_t** inb, size_t *size_remain, AddressAttributedMessage* outp) {
//     if (inb == NULL || *inb == NULL) {
//         return -1;
//     }
//     if (size_remain == NULL || *size_remain == 0) {
//         return -1;
//     }
//     AddressAttributedMessage* out = outp;

//     return 0;
// }


size_t lmcp_pack_AddressAttributedMessage(uint8_t* buf, AddressAttributedMessage* i) {
    
    if (i == NULL) {
        return 0;
    }
    
    uint8_t* outb = buf;

    // pack attributes
    int attribSize = strlen(i->attributes);
    memcpy(outb, i->attributes, attribSize);
    outb += attribSize;

    // pack lmcp object
    outb += lmcp_make_msg(outb, i->lmcp_obj);

    // checksum
    uint32_t checksum = computeChecksum(buf + attribSize, outb - buf - attribSize);
    outb += lmcp_pack_uint32_t(outb, checksum);

    return (outb - buf);
}

uint32_t computeChecksum(const uint8_t* buf, const size_t size) {
    uint32_t sum = 0;

  /* assumption: buf is not NULL. */
  assert(buf != NULL);
  
  for (size_t i = 0; i < size; i++) {
    sum += (uint32_t) buf[i];
  }
  return sum & 0x00000000FFFFFFFF;
}
