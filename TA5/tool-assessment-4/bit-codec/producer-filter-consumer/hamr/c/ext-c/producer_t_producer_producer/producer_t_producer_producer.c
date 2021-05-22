#include <producer_t_producer_producer_api.h>
#include <producer_t_producer_producer.h>
#include <ext.h>

// This file will not be overwritten so is safe to edit


#define MISSION_SIZE 3

struct pfc_PFC_MissionBitCodec_Coordinate createCoord(Z lat, Z lon, Z alt) {
    DeclNewpfc_PFC_MissionBitCodec_Coordinate(_coordinate);
    _coordinate.latitude = lat;
    _coordinate.longitude = lon;
    _coordinate.altitude = alt;
    return _coordinate;
}

struct pfc_PFC_MissionBitCodec_Mission createMission(
        struct pfc_PFC_MissionBitCodec_Coordinate a,
        struct pfc_PFC_MissionBitCodec_Coordinate b,
        struct pfc_PFC_MissionBitCodec_Coordinate c) {

    DeclNewpfc_PFC_MissionBitCodec_Mission(_mission);

    DeclNewIS_66BE19(coords);
    coords.size = (int8_t) MISSION_SIZE;
    coords.value[0] = a;
    coords.value[1] = b;
    coords.value[2] = c;

    _mission.data = coords;

    return _mission;
}

struct pfc_PFC_MissionBitCodec_Mission missions [MISSION_SIZE];

Z i = 0;

Unit pfc_PFC_producer_t_producer_producer_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_producer_producer.c", "", "pfc_PFC_producer_t_producer_producer_initialise_", 0);

    missions[0] = createMission(
            createCoord(1,1,1),
            createCoord(2,2,2),
            createCoord(3,3,3));
    missions[1] = createMission(
            createCoord(4,4,4),
            createCoord(5,5,5),
            createCoord(6,6,6));
    missions[2] = createMission(
            createCoord(7,7,7),
            createCoord(8,8,8),
            createCoord(9,9,9));
}

Unit pfc_PFC_producer_t_producer_producer_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_producer_producer.c", "", "pfc_PFC_producer_t_producer_producer_finalise_", 0);
}

Unit pfc_PFC_producer_t_producer_producer_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "producer_t_producer_producer.c", "", "pfc_PFC_producer_t_producer_producer_timeTriggered_", 0);

    U8 encoded[numBytes_pfc_PFC_Mission];
    Z size = encode_Mission_MissionBitCodec_PFC_pfc(&missions[i], encoded);

    if(size >= 0) {

        api_put_to_filter__pfc_PFC_producer_t_producer_producer(SF size, encoded);

        i = (i + 1) % MISSION_SIZE;

    } else {
        api_logError__pfc_PFC_producer_t_producer_producer(SF string("Encoding error!"));
    }
}
