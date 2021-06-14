#include <stdio.h>
#include "simple_v4.h"


// ************************************
//  Assuming all data is little-endian
// ************************************


void print_Coordinate(const Coordinate* const bytes) {
	printf("(lat: %f, long: %f, alt: %f)", bytes->latitude, bytes->longitude, bytes->altitude);
}

void print_Map(const Map* const bytes) {
	printf("Map: \n\t{\n ");
	for (int i = 0; i < num_coord; i++) {
		printf("\t\t");
		print_Coordinate(&(bytes->coord[i]));
		printf("\n");
	}
	printf("\t}\n");
}

void print_Command(const Command* const bytes) {
	print_Map(&(bytes->map));
}

void print_MsgHeader(const MsgHeader* const bytes) {
	printf("MessageHeader: { src: %u, dst: %u }\n", bytes->src, bytes->dst);
}

void print_RFMsg(const RFMsg* const bytes) {
	print_MsgHeader(&(bytes->header));
	print_Command(&(bytes->payload));
}

void print_Mission(const Mission* const bytes) {
	printf("Mission Waypoints: \n\t{\n");
	for (int i = 0; i < num_mission_waypoints; i++) {
		printf("\t\t");
		print_Coordinate(&(bytes->waypoint[i]));
		printf("\n");
	}
	printf("\t}\n");
}

void print_AttestationRequestMsg(const char* const bytes) {
	printf("AttestationRequestMsg: ");
	for (int i = 0; i < 16; i++) {
		printf("%02x", bytes[i]);
	}
}

void print_AttestationResponseMsg(const char* const bytes) {
	printf("AttestationResponseMsg: ");
	for (int i = 0; i < 2048; i++) {
		printf("%02x", bytes[i]);
	}
}

