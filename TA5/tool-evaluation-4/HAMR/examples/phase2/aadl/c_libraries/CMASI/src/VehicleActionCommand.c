
#include "common/struct_defines.h"
#include "common/conv.h"
#include "VehicleActionCommand.h"
#include "VehicleAction.h"
#include "enums.h"
#include <string.h>
#include <stdlib.h>
void lmcp_pp_VehicleActionCommand(VehicleActionCommand* s) {
    printf("VehicleActionCommand{");
    printf("commandid: ");
    printf("%lld",s->commandid);
    printf("\n");
    printf("vehicleid: ");
    printf("%lld",s->vehicleid);
    printf("\n");
    printf("vehicleactionlist: ");
    printf("[");
    for (uint32_t index = 0; index < s->vehicleactionlist_ai.length; index++) {
        lmcp_pp_VehicleAction((s->vehicleactionlist[index]));
        printf(",");
    }
    printf("\n");
    printf("status: ");
    printf("%i", s->status);
    printf("\n");
    printf("}");
}
size_t lmcp_packsize_VehicleActionCommand (VehicleActionCommand* i) {
    size_t out = 0;
    out += sizeof(int64_t);
    out += sizeof(int64_t);
    out += 2;
    for (uint32_t index = 0; index < i->vehicleactionlist_ai.length; index++) {
        out += 15 + lmcp_packsize_VehicleAction(i->vehicleactionlist[index]);
    }
    out += 4;
    return out;
}
size_t lmcp_pack_VehicleActionCommand_header(uint8_t* buf, VehicleActionCommand* i) {
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
    outb += lmcp_pack_uint32_t(outb, 47);
    outb += lmcp_pack_uint16_t(outb, 3);
    return 15;
}
void lmcp_free_VehicleActionCommand(VehicleActionCommand* out, int out_malloced) {
    if (out == NULL)
        return;
    if (out->vehicleactionlist != NULL) {
        for (uint32_t index = 0; index < out->vehicleactionlist_ai.length; index++) {
            if (out->vehicleactionlist[index] != NULL) {
                lmcp_free_VehicleAction(out->vehicleactionlist[index], 1);
            }
        }
        free(out->vehicleactionlist);
    }
    if (out_malloced == 1) {
        free(out);
    }
}
void lmcp_init_VehicleActionCommand (VehicleActionCommand** i) {
    if (i == NULL) return;
    (*i) = calloc(1,sizeof(VehicleActionCommand));
    ((lmcp_object*)(*i)) -> type = 47;
}
int lmcp_unpack_VehicleActionCommand(uint8_t** inb, size_t *size_remain, VehicleActionCommand* outp) {
    if (inb == NULL || *inb == NULL) {
        return -1;
    }
    if (size_remain == NULL || *size_remain == 0) {
        return -1;
    }
    VehicleActionCommand* out = outp;
    uint32_t tmp;
    uint16_t tmp16;
    CHECK(lmcp_unpack_int64_t(inb, size_remain, &(out->commandid)))
    CHECK(lmcp_unpack_int64_t(inb, size_remain, &(out->vehicleid)))
    CHECK(lmcp_unpack_uint16_t(inb, size_remain, &tmp16))
    tmp = tmp16;
    (out)->vehicleactionlist = malloc(sizeof(VehicleAction*) * tmp);
    if (out->vehicleactionlist==0) {
        return -1;
    }
    out->vehicleactionlist_ai.length = tmp;
    for (uint32_t index = 0; index < out->vehicleactionlist_ai.length; index++) {
        uint8_t isnull;
        uint32_t objtype;
        uint16_t objseries;
        char seriesname[8];
        CHECK(lmcp_unpack_uint8_t(inb, size_remain, &isnull))
        if (isnull == 0 && inb != NULL) {
            out->vehicleactionlist[index] = NULL;
        } else if (inb != NULL) {
            CHECK(lmcp_unpack_8byte(inb, size_remain, seriesname))
            CHECK(lmcp_unpack_uint32_t(inb, size_remain, &objtype))
            CHECK(lmcp_unpack_uint16_t(inb, size_remain, &objseries))
            lmcp_init_VehicleAction(&(out->vehicleactionlist[index]));
            CHECK(lmcp_unpack_VehicleAction(inb, size_remain, (out->vehicleactionlist[index])))
        }
    }
    CHECK(lmcp_unpack_int32_t(inb, size_remain, (int*) &(out->status)))
    return 0;
}
size_t lmcp_pack_VehicleActionCommand(uint8_t* buf, VehicleActionCommand* i) {
    if (i == NULL) return 0;
    uint8_t* outb = buf;
    outb += lmcp_pack_int64_t(outb, i->commandid);
    outb += lmcp_pack_int64_t(outb, i->vehicleid);
    outb += lmcp_pack_uint16_t(outb, i->vehicleactionlist_ai.length);
    for (uint32_t index = 0; index < i->vehicleactionlist_ai.length; index++) {
        if (i->vehicleactionlist[index]==NULL) {
            outb += lmcp_pack_uint8_t(outb, 0);
        } else {
            outb += lmcp_pack_uint8_t(outb, 1);
            memcpy(outb, "CMASI", 5);
            outb += 5;
            for (size_t j = 5; j < 8; j++, outb++)
                *outb = 0;
            outb += lmcp_pack_uint32_t(outb, 7);
            outb += lmcp_pack_uint16_t(outb, 3);
            outb += lmcp_pack_VehicleAction(outb, i->vehicleactionlist[index]);
        }
    }
    outb += lmcp_pack_int32_t(outb, (int) i->status);
    return (outb - buf);
}
