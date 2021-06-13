
#include "common/struct_defines.h"
#include "common/conv.h"
#include "PayloadState.h"
#include "KeyValuePair.h"
#include <string.h>
#include <stdlib.h>
void lmcp_pp_PayloadState(PayloadState* s) {
    printf("PayloadState{");
    printf("payloadid: ");
    printf("%lld",s->payloadid);
    printf("\n");
    printf("parameters: ");
    printf("[");
    for (uint32_t index = 0; index < s->parameters_ai.length; index++) {
        lmcp_pp_KeyValuePair((s->parameters[index]));
        printf(",");
    }
    printf("\n");
    printf("}");
}
size_t lmcp_packsize_PayloadState (PayloadState* i) {
    size_t out = 0;
    out += sizeof(int64_t);
    out += 2;
    for (uint32_t index = 0; index < i->parameters_ai.length; index++) {
        out += 15 + lmcp_packsize_KeyValuePair(i->parameters[index]);
    }
    return out;
}
size_t lmcp_pack_PayloadState_header(uint8_t* buf, PayloadState* i) {
    uint8_t* outb = buf;
    if (i == NULL) {
        lmcp_pack_uint8_t(outb, 0);
        return 1;
    }
    outb += lmcp_pack_uint8_t(outb, 1);
    memcpy(outb, "CMASI", 5);
    outb += 5;
    for (size_t j = 5; j < 8; j++, outb++)
        *outb = 0;
    outb += lmcp_pack_uint32_t(outb, 6);
    outb += lmcp_pack_uint16_t(outb, 3);
    return 15;
}
void lmcp_free_PayloadState(PayloadState* out, int out_malloced) {
    if (out == NULL)
        return;
    if (out->parameters != NULL) {
        for (uint32_t index = 0; index < out->parameters_ai.length; index++) {
            if (out->parameters[index] != NULL) {
                lmcp_free_KeyValuePair(out->parameters[index], 1);
            }
        }
        free(out->parameters);
    }
    if (out_malloced == 1) {
        free(out);
    }
}
void lmcp_init_PayloadState (PayloadState** i) {
    if (i == NULL) return;
    (*i) = calloc(1,sizeof(PayloadState));
    ((lmcp_object*)(*i)) -> type = 6;
}
int lmcp_unpack_PayloadState(uint8_t** inb, size_t *size_remain, PayloadState* outp) {
    if (inb == NULL || *inb == NULL) {
        return -1;
    }
    if (size_remain == NULL || *size_remain == 0) {
        return -1;
    }
    PayloadState* out = outp;
    uint32_t tmp;
    uint16_t tmp16;
    CHECK(lmcp_unpack_int64_t(inb, size_remain, &(out->payloadid)))
    CHECK(lmcp_unpack_uint16_t(inb, size_remain, &tmp16))
    tmp = tmp16;
//printf("num parameters: %u\n", tmp);
    (out)->parameters = malloc(sizeof(KeyValuePair*) * tmp);
    if (out->parameters==0) {
        return -1;
    }
    out->parameters_ai.length = tmp;
    for (uint32_t index = 0; index < out->parameters_ai.length; index++) {
        uint8_t isnull;
        uint32_t objtype;
        uint16_t objseries;
        char seriesname[8];
        CHECK(lmcp_unpack_uint8_t(inb, size_remain, &isnull))
        if (isnull == 0 && inb != NULL) {
            out->parameters[index] = NULL;
        } else if (inb != NULL) {
            CHECK(lmcp_unpack_8byte(inb, size_remain, seriesname))
            CHECK(lmcp_unpack_uint32_t(inb, size_remain, &objtype))
            CHECK(lmcp_unpack_uint16_t(inb, size_remain, &objseries))
            lmcp_init_KeyValuePair(&(out->parameters[index]));
            CHECK(lmcp_unpack_KeyValuePair(inb, size_remain, (out->parameters[index])))
        }
    }
    return 0;
}
size_t lmcp_pack_PayloadState(uint8_t* buf, PayloadState* i) {
    if (i == NULL) return 0;
    uint8_t* outb = buf;
    outb += lmcp_pack_int64_t(outb, i->payloadid);
    outb += lmcp_pack_uint16_t(outb, i->parameters_ai.length);
    for (uint32_t index = 0; index < i->parameters_ai.length; index++) {
        if (i->parameters[index]==NULL) {
            outb += lmcp_pack_uint8_t(outb, 0);
        } else {
            outb += lmcp_pack_uint8_t(outb, 1);
            memcpy(outb, "CMASI", 5);
            outb += 5;
            for (size_t j = 5; j < 8; j++, outb++)
                *outb = 0;
            outb += lmcp_pack_uint32_t(outb, 2);
            outb += lmcp_pack_uint16_t(outb, 3);
            outb += lmcp_pack_KeyValuePair(outb, i->parameters[index]);
        }
    }
    return (outb - buf);
}
