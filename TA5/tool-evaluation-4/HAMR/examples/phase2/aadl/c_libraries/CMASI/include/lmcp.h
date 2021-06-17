#pragma once
#include "common/struct_defines.h"
#include "AddressAttributedMessage.h"
#include "KeyValuePair.h"
#include "Location3D.h"
#include "VehicleAction.h"
#include "EntityState.h"
#include "AirVehicleState.h"
#include "Waypoint.h"
#include "MissionCommand.h"
#include "VehicleActionCommand.h"
#include "AutomationResponse.h"

size_t compute_addr_attr_lmcp_message_size(void *buffer, size_t buffer_length);
void lmcp_pp(lmcp_object* o);
uint32_t lmcp_msgsize(lmcp_object* o);
uint32_t lmcp_packsize(lmcp_object* o);
void lmcp_free(lmcp_object* o);
int lmcp_make_msg(uint8_t* buf, lmcp_object *o);
//int lmcp_process_addr_attrib_msg(uint8_t** inb, size_t size, AddressAttributedMessage **o);
int lmcp_process_msg(uint8_t** inb, size_t size, lmcp_object **o);
int lmcp_unpack(uint8_t** inb, size_t size, lmcp_object **o);
//int lmcp_unpack(uint8_t** inb, size_t size, uint32_t objtype, lmcp_object **o);
uint32_t lmcp_pack(uint8_t* buf, lmcp_object* o);
