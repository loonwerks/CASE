#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include "common/struct_defines.h"
#include "lmcp.h"
#include "AddressAttributedMessage.h"
#include "KeyValuePair.h"
#include "Location3D.h"
#include "PayloadAction.h"
#include "PayloadConfiguration.h"
#include "PayloadState.h"
#include "VehicleAction.h"
#include "Task.h"
#include "SearchTask.h"
#include "LineSearchTask.h"
#include "EntityConfiguration.h"
#include "EntityState.h"
#include "AirVehicleState.h"
#include "Waypoint.h"
#include "MissionCommand.h"
#include "VehicleActionCommand.h"
#include "AutomationResponse.h"
#include "Wedge.h"

size_t compute_addr_attr_lmcp_message_size(void *buffer, size_t buffer_length)
{
  static const uint8_t addr_attr_delim = '$';
  static const uint8_t field_delim = '|';

  void *end_of_address_delim = memchr(buffer, addr_attr_delim, buffer_length);
  if (end_of_address_delim == NULL) {
    errno = -1;
    return 0;
  }
  ssize_t end_of_address_delim_offset = end_of_address_delim - buffer;
  
  void *end_of_attr_delim = memchr(end_of_address_delim + 1, addr_attr_delim, buffer_length - end_of_address_delim_offset - 1);
  if (end_of_attr_delim == NULL) {
    errno = -2;
    return 0;
  }
  ssize_t end_of_attr_delim_offset = end_of_attr_delim - buffer;
  
  const size_t lmcp_control_string_size = 4;
  const size_t checksum_size = 4;

  uint8_t *lmcp_message_size_pos = end_of_attr_delim + sizeof(addr_attr_delim) + lmcp_control_string_size;
  size_t lmcp_message_size = ((size_t) lmcp_message_size_pos[0] << 24)
    + ((size_t) lmcp_message_size_pos[1] << 16)
    + ((size_t) lmcp_message_size_pos[2] <<  8)
    + ((size_t) lmcp_message_size_pos[3] <<  0);
    
  if (buffer + buffer_length < ((void *) lmcp_message_size_pos) + lmcp_message_size + checksum_size) {
    fprintf(stdout, "apss: compute_addr_attr_lmcp_message_size: EoAddr %zu, EoAttr %zu, LMCP sz %zu\n",
	    end_of_address_delim_offset, end_of_attr_delim_offset, lmcp_message_size); fflush(stdout);
    errno = -4;
    return 0;
  }

  errno = 0;
  return ((size_t) ((void *) lmcp_message_size_pos - buffer)) + lmcp_control_string_size + lmcp_message_size + checksum_size;
}

void lmcp_pp(lmcp_object *o) {
    if (o == NULL) {
        return;
    }
    switch (o->type) {

    case KEYVALUEPAIR:
        lmcp_pp_KeyValuePair((KeyValuePair*)o);

        break;
    case LOCATION3D:
        lmcp_pp_Location3D((Location3D*)o);

        break;
    case PAYLOADACTION:
        lmcp_pp_PayloadAction((PayloadAction*)o);

        break;
    case PAYLOADCONFIGURATION:
        lmcp_pp_PayloadConfiguration((PayloadConfiguration*)o);

        break;
    case PAYLOADSTATE:
        lmcp_pp_PayloadState((PayloadState*)o);

        break;
    case VEHICLEACTION:
        lmcp_pp_VehicleAction((VehicleAction*)o);

        break;
    case TASK:
        lmcp_pp_Task((Task*)o);

        break;
    case SEARCHTASK:
        lmcp_pp_SearchTask((SearchTask*)o);

        break;
    case ENTITYCONFIGURATION:
        lmcp_pp_EntityConfiguration((EntityConfiguration*)o);

        break;
    case ENTITYSTATE:
        lmcp_pp_EntityState((EntityState*)o);

        break;
    case AIRVEHICLESTATE:
        lmcp_pp_AirVehicleState((AirVehicleState*)o);

        break;
    case WEDGE:
        lmcp_pp_Wedge((Wedge*)o);

        break;
    case LINESEARCHTASK:
        lmcp_pp_LineSearchTask((LineSearchTask*)o);

        break;
    case WAYPOINT:
        lmcp_pp_Waypoint((Waypoint*)o);

        break;
    case MISSIONCOMMAND:
        lmcp_pp_MissionCommand((MissionCommand*)o);

        break;
    case VEHICLEACTIONCOMMAND:
        lmcp_pp_VehicleActionCommand((VehicleActionCommand*)o);

        break;
    case AUTOMATIONRESPONSE:
        lmcp_pp_AutomationResponse((AutomationResponse*)o);

        break;
    default:
        return;
    }
}
uint32_t lmcp_msgsize(lmcp_object* o) {
    return 8 + lmcp_packsize(o);
}
uint32_t lmcp_packsize(lmcp_object* o) {
    switch (o->type) {
    case 2:
        return 15 + lmcp_packsize_KeyValuePair((KeyValuePair*)o);

        break;
    case 3:
        return 15 + lmcp_packsize_Location3D((Location3D*)o);

        break;
    case 4:
        return 15 + lmcp_packsize_PayloadAction((PayloadAction*)o);

        break;
    case 5:
        return 15 + lmcp_packsize_PayloadConfiguration((PayloadConfiguration*)o);

        break;
    case 6:
        return 15 + lmcp_packsize_PayloadState((PayloadState*)o);

        break;
    case 7:
        return 15 + lmcp_packsize_VehicleAction((VehicleAction*)o);

        break;
    case 8:
        return 15 + lmcp_packsize_Task((Task*)o);

        break;
    case 9:
        return 15 + lmcp_packsize_SearchTask((SearchTask*)o);

        break;
    case 11:
        return 15 + lmcp_packsize_EntityConfiguration((EntityConfiguration*)o);

        break;
    case 14:
        return 15 + lmcp_packsize_EntityState((EntityState*)o);

        break;
    case 15:
        return 15 + lmcp_packsize_AirVehicleState((AirVehicleState*)o);

        break;
    case 16:
        return 15 + lmcp_packsize_Wedge((Wedge*)o);

        break;
    case 31:
        return 15 + lmcp_packsize_LineSearchTask((LineSearchTask*)o);

        break;
    case 35:
        return 15 + lmcp_packsize_Waypoint((Waypoint*)o);

        break;
    case 36:
        return 15 + lmcp_packsize_MissionCommand((MissionCommand*)o);

        break;
    case 47:
        return 15 + lmcp_packsize_VehicleActionCommand((VehicleActionCommand*)o);

        break;
    case 51:
        return 15 + lmcp_packsize_AutomationResponse((AutomationResponse*)o);

        break;
    default:
        return 0;
    }
}
void lmcp_free(lmcp_object *o) {
    if (o == NULL) {
        return;
    }
    switch (o->type) {
    case 2:
        lmcp_free_KeyValuePair((KeyValuePair*)o, 1);

        break;
    case 3:
        lmcp_free_Location3D((Location3D*)o, 1);

        break;
    case 4:
        lmcp_free_PayloadAction((PayloadAction*)o, 1);

        break;
    case 5:
        lmcp_free_PayloadConfiguration((PayloadConfiguration*)o, 1);

        break;
    case 6:
        lmcp_free_PayloadState((PayloadState*)o, 1);

        break;
    case 7:
        lmcp_free_VehicleAction((VehicleAction*)o, 1);

        break;
    case 8:
        lmcp_free_Task((Task*)o, 1);

        break;
    case 9:
        lmcp_free_SearchTask((SearchTask*)o, 1);

        break;
    case 11:
        lmcp_free_EntityConfiguration((EntityConfiguration*)o, 1);

        break;
    case 14:
        lmcp_free_EntityState((EntityState*)o, 1);

        break;
    case 15:
        lmcp_free_AirVehicleState((AirVehicleState*)o, 1);

        break;
    case 16:
        lmcp_free_Wedge((Wedge*)o, 1);

        break;
    case 31:
        lmcp_free_LineSearchTask((LineSearchTask*)o, 1);

        break;
    case 35:
        lmcp_free_Waypoint((Waypoint*)o, 1);

        break;
    case 36:
        lmcp_free_MissionCommand((MissionCommand*)o, 1);

        break;
    case 47:
        lmcp_free_VehicleActionCommand((VehicleActionCommand*)o, 1);

        break;
    case 51:
        lmcp_free_AutomationResponse((AutomationResponse*)o, 1);

        break;
    default:
        return;
    }
}
int lmcp_make_msg(uint8_t* buf, lmcp_object* o) {
    size_t size = 0;
    buf[0] = 'L';
    buf[1] = 'M';
    buf[2] = 'C';
    buf[3] = 'P';
    size += 4;
    size += lmcp_pack_uint32_t(buf + size, lmcp_packsize(o));
    size += lmcp_pack(buf + size, o);
    return size;
}

// int lmcp_process_addr_attrib_msg(uint8_t** inb, size_t size, AddressAttributedMessage **o) {

//     if (size < 14) {
//         return -1;
//     }
//     if (inb == NULL || *inb == NULL) {
//         return -1;
//     }
    
//     // Figure out size of attributes
//     int firstAttrDelimFound = 0;
//     int endIdx = 0;
//     for (size_t i = 0; i < size; i++) {
//         if ((*inb)[i] == '$') {
//             if (firstAttrDelimFound == 0) {
//                 firstAttrDelimFound = 1;
//             } else {
//                 endIdx = i + 1;
//                 break;
//             }
//         }
//     }

//     (*o)->attributes = calloc(1,endIdx+1);
//     memcpy((*o)->attributes, (*inb), endIdx);
//     (*o)->attributes[endIdx] = '\0';


//     *inb += endIdx;

//     return lmcp_process_msg(inb, size-endIdx, &(*o)->lmcp_obj);

// }


int lmcp_process_msg(uint8_t** inb, size_t size, lmcp_object **o) {

    // if (size < 8) {
    //     return -1;
    // }
    if (size < 14) {
        return -1;
    }
    if (inb == NULL || *inb == NULL) {
        return -1;
    }

    uint8_t * startPtr = *inb;
    // Figure out size of attributes
    int firstAttrDelimFound = 0;
    int endIdx = 0;
    for (size_t i = 0; i < size; i++) {
        if (startPtr[i] == '$') {
            if (firstAttrDelimFound == 0) {
                firstAttrDelimFound = 1;
            } else {
                endIdx = i + 1;
                break;
            }
        }
    }
    startPtr += endIdx;

    if (startPtr[0] != 'L' || startPtr[1] != 'M' || startPtr[2] != 'C' || startPtr[3] != 'P') {
        return -1;
    }

    startPtr += 4;
    size_t s = 4;
    uint32_t msglen;
    CHECK(lmcp_unpack_uint32_t(&startPtr, &s, &msglen))
    if (size < (msglen + 8)) {
        return -1;
    }

//    uint32_t objtype;
//    uint16_t objseries;
//    char seriesname[8];
//    CHECK(lmcp_unpack_structheader(&startPtr, &msglen, seriesname, &objtype, &objseries))
    CHECK(lmcp_unpack(&startPtr, msglen, o))
//    CHECK(lmcp_unpack(&startPtr, msglen, objtype, o))

    return 0;
}

int lmcp_unpack(uint8_t** inb, size_t size, lmcp_object **o) {
//int lmcp_unpack(uint8_t** inb, size_t size, uint32_t objtype, lmcp_object **o) {
    if (o == NULL) return -1;
    size_t* size_remain = &size;
    int isnull;
    uint32_t objtype;
    uint16_t objseries;
    char seriesname[8];
    isnull = lmcp_unpack_structheader(inb, size_remain, seriesname, &objtype, &objseries);
    if (isnull == -1) {
        return -1;
    }

    switch (objtype) {
    case 2:
        lmcp_init_KeyValuePair((KeyValuePair**)o);
        CHECK(lmcp_unpack_KeyValuePair(inb, size_remain, (KeyValuePair*)(*o)))

        break;
    case 3:
        lmcp_init_Location3D((Location3D**)o);
        CHECK(lmcp_unpack_Location3D(inb, size_remain, (Location3D*)(*o)))

        break;
    case 4:
        lmcp_init_PayloadAction((PayloadAction**)o);
        CHECK(lmcp_unpack_PayloadAction(inb, size_remain, (PayloadAction*)(*o)))

        break;
    case 5:
        lmcp_init_PayloadConfiguration((PayloadConfiguration**)o);
        CHECK(lmcp_unpack_PayloadConfiguration(inb, size_remain, (PayloadConfiguration*)(*o)))

        break;
    case 6:
        lmcp_init_PayloadState((PayloadState**)o);
        CHECK(lmcp_unpack_PayloadState(inb, size_remain, (PayloadState*)(*o)))

        break;
    case 7:
        lmcp_init_VehicleAction((VehicleAction**)o);
        CHECK(lmcp_unpack_VehicleAction(inb, size_remain, (VehicleAction*)(*o)))

        break;
    case 8:
        lmcp_init_Task((Task**)o);
        CHECK(lmcp_unpack_Task(inb, size_remain, (Task*)(*o)))

        break;
    case 9:
        lmcp_init_SearchTask((SearchTask**)o);
        CHECK(lmcp_unpack_SearchTask(inb, size_remain, (SearchTask*)(*o)))

        break;
    case 11:
        lmcp_init_EntityConfiguration((EntityConfiguration**)o);
        CHECK(lmcp_unpack_EntityConfiguration(inb, size_remain, (EntityConfiguration*)(*o)))

        break;
    case 14:
        lmcp_init_EntityState((EntityState**)o);
        CHECK(lmcp_unpack_EntityState(inb, size_remain, (EntityState*)(*o)))

        break;
    case 15:
        lmcp_init_AirVehicleState((AirVehicleState**)o);
        CHECK(lmcp_unpack_AirVehicleState(inb, size_remain, (AirVehicleState*)(*o)))

        break;
    case 16:
        lmcp_init_Wedge((Wedge**)o);
        CHECK(lmcp_unpack_Wedge(inb, size_remain, (Wedge*)(*o)))

        break;
    case 31:
        lmcp_init_LineSearchTask((LineSearchTask**)o);
        CHECK(lmcp_unpack_LineSearchTask(inb, size_remain, (LineSearchTask*)(*o)))

        break;
    case 35:
        lmcp_init_Waypoint((Waypoint**)o);
        CHECK(lmcp_unpack_Waypoint(inb, size_remain, (Waypoint*)(*o)))

        break;
    case 36:
        lmcp_init_MissionCommand((MissionCommand**)o);
        CHECK(lmcp_unpack_MissionCommand(inb, size_remain, (MissionCommand*)(*o)))

        break;
    case 47:
        lmcp_init_VehicleActionCommand((VehicleActionCommand**)o);
        CHECK(lmcp_unpack_VehicleActionCommand(inb, size_remain, (VehicleActionCommand*)(*o)))

        break;
    case 51:
        lmcp_init_AutomationResponse((AutomationResponse**)o);
        CHECK(lmcp_unpack_AutomationResponse(inb, size_remain, (AutomationResponse*)(*o)))

        break;
    default:
        return 0;
    }
    return 0;
}
uint32_t lmcp_pack(uint8_t* buf, lmcp_object* o) {
    uint8_t* outb = buf;
    switch (o->type) {

    case 2:
        outb += lmcp_pack_KeyValuePair_header(outb, (KeyValuePair*)o);
        outb += lmcp_pack_KeyValuePair(outb, (KeyValuePair*)o);
        return (outb - buf);

        break;
    case 3:
        outb += lmcp_pack_Location3D_header(outb, (Location3D*)o);
        outb += lmcp_pack_Location3D(outb, (Location3D*)o);
        return (outb - buf);

        break;
    case 4:
        outb += lmcp_pack_PayloadAction_header(outb, (PayloadAction*)o);
        outb += lmcp_pack_PayloadAction(outb, (PayloadAction*)o);
        return (outb - buf);

        break;
    case 5:
        outb += lmcp_pack_PayloadConfiguration_header(outb, (PayloadConfiguration*)o);
        outb += lmcp_pack_PayloadConfiguration(outb, (PayloadConfiguration*)o);
        return (outb - buf);

        break;
    case 6:
        outb += lmcp_pack_PayloadState_header(outb, (PayloadState*)o);
        outb += lmcp_pack_PayloadState(outb, (PayloadState*)o);
        return (outb - buf);

        break;
    case 7:
        outb += lmcp_pack_VehicleAction_header(outb, (VehicleAction*)o);
        outb += lmcp_pack_VehicleAction(outb, (VehicleAction*)o);
        return (outb - buf);

        break;
    case 8:
        outb += lmcp_pack_Task_header(outb, (Task*)o);
        outb += lmcp_pack_Task(outb, (Task*)o);
        return (outb - buf);

        break;
    case 9:
        outb += lmcp_pack_SearchTask_header(outb, (SearchTask*)o);
        outb += lmcp_pack_SearchTask(outb, (SearchTask*)o);
        return (outb - buf);

        break;
    case 11:
        outb += lmcp_pack_EntityConfiguration_header(outb, (EntityConfiguration*)o);
        outb += lmcp_pack_EntityConfiguration(outb, (EntityConfiguration*)o);
        return (outb - buf);

        break;
    case 14:
        outb += lmcp_pack_EntityState_header(outb, (EntityState*)o);
        outb += lmcp_pack_EntityState(outb, (EntityState*)o);
        return (outb - buf);

        break;
    case 15:
        outb += lmcp_pack_AirVehicleState_header(outb, (AirVehicleState*)o);
        outb += lmcp_pack_AirVehicleState(outb, (AirVehicleState*)o);
        return (outb - buf);

        break;
    case 16:
        outb += lmcp_pack_Wedge_header(outb, (Wedge*)o);
        outb += lmcp_pack_Wedge(outb, (Wedge*)o);
        return (outb - buf);

        break;
    case 31:
        outb += lmcp_pack_LineSearchTask_header(outb, (LineSearchTask*)o);
        outb += lmcp_pack_LineSearchTask(outb, (LineSearchTask*)o);
        return (outb - buf);

        break;
    case 35:
        outb += lmcp_pack_Waypoint_header(outb, (Waypoint*)o);
        outb += lmcp_pack_Waypoint(outb, (Waypoint*)o);
        return (outb - buf);

        break;
    case 36:
        outb += lmcp_pack_MissionCommand_header(outb, (MissionCommand*)o);
        outb += lmcp_pack_MissionCommand(outb, (MissionCommand*)o);
        return (outb - buf);

        break;
    case 47:
        outb += lmcp_pack_VehicleActionCommand_header(outb, (VehicleActionCommand*)o);
        outb += lmcp_pack_VehicleActionCommand(outb, (VehicleActionCommand*)o);
        return (outb - buf);

        break;
    case 51:
        outb += lmcp_pack_AutomationResponse_header(outb, (AutomationResponse*)o);
        outb += lmcp_pack_AutomationResponse(outb, (AutomationResponse*)o);
        return (outb - buf);

        break;
    default:
        return 0;
    }
}
