#include <ext.h>

// This file will not be overwritten so is safe to edit

// add c extension code here

// example method that sets the first numBits bits of byteArray to 1
void byte_array_default(STACK_FRAME uint8_t* byteArray, size_t numBits, size_t numBytes) {
  DeclNewStackFrame(caller, "ext.c", "", "byte_array_default", 0);

  sfAssert(SF (numBits - 1) / 8  + 1 <= numBytes, "byte_array_default: numBytes * 8 must be at least numBits");

  for(size_t byte = 0; byte < numBytes; byte++) {
    uint8_t v = 0;
    for(uint8_t bit = 0; bit < 8; bit++) {
      if(byte * 8 + bit < numBits) {
        v |= 1UL << bit;
      }
    }
    byteArray[byte] = v;
  }
}

// example method that places the hex value of the bytes in byteArray into str
void byte_array_string(STACK_FRAME String str, uint8_t* byteArray, size_t numBytes) {
  DeclNewStackFrame(caller, "ext.c", "", "byte_array_string", 0);

  sfAssert(SF (str->size + numBytes) <= MaxString, "byte_array_string: Insufficient maximum for String characters, consider increasing the --max-string-size option");

  for(size_t byte = 0; byte < numBytes; byte++) {
    U8_string_(SF str, byteArray[byte]);
    String__append(SF str, string(" "));
  }
}

// example method that directly prints the hex values of the bytes in byte_array
void hex_dump(STACK_FRAME uint8_t* byte_array, size_t numBytes) {
  DeclNewStackFrame(caller, "ext.c", "", "hex_dump", 0);

  printf("[ ");
  for(size_t byte = 0; byte < numBytes; byte++) {
    if(byte != 0 && byte % 16 == 0) { printf("\n  "); }
    printf("%02X ", byte_array[byte]);
  }
  printf("]\n");
}


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