#include <RadioDriver_thr_Impl_radio_RadioDriver_api.h>
#include <RadioDriver_thr_Impl_radio_RadioDriver.h>

#include <stdlib.h>

// This file will not be overwritten so is safe to edit

U8 line_search_task_out[] = {0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x4C,0x69,0x6E,0x65,0x53,0x65,0x61,0x72,0x63,0x68,0x54,0x61,0x73,0x6B,0x24,0x6C,0x6D,0x63,0x70,0x7C,0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x4C,0x69,0x6E,0x65,0x53,0x65,0x61,0x72,0x63,0x68,0x54,0x61,0x73,0x6B,0x7C,0x54,0x63,0x70,0x42,0x72,0x69,0x64,0x67,0x65,0x7C,0x34,0x30,0x30,0x7C,0x36,0x38,0x24,0x4C,0x4D,0x43,0x50,0x00,0x00,0x0E,0x26,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE8,0x00,0x17,0x4C,0x49,0x4E,0x45,0x5F,0x57,0x61,0x74,0x65,0x72,0x77,0x61,0x79,0x5F,0x44,0x65,0x73,0x63,0x68,0x75,0x74,0x65,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x7A,0x00,0x00,0x00,0x5A,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xB1,0x6B,0x64,0xBB,0x7F,0xC0,0x5E,0x40,0x88,0x67,0x79,0x20,0x16,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xB2,0xD1,0x06,0x35,0x8D,0xC0,0x5E,0x40,0x78,0x33,0x09,0xF5,0xA6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xAB,0xFE,0xFC,0x16,0x85,0xC0,0x5E,0x40,0x64,0xB6,0xDD,0x71,0x8E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x9E,0xB5,0x9F,0x8C,0xCF,0xC0,0x5E,0x40,0x51,0x3E,0xED,0x62,0xA0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x92,0x8F,0x58,0x2D,0xA4,0xC0,0x5E,0x40,0x3F,0x03,0x3B,0xF9,0x33,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x86,0x74,0x63,0x08,0xB6,0xC0,0x5E,0x40,0x31,0x3C,0x3A,0xE4,0xF9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x76,0x25,0x0F,0x8D,0x88,0xC0,0x5E,0x40,0x22,0x2A,0x2A,0xAF,0x6F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x62,0x88,0x0B,0xC6,0x02,0xC0,0x5E,0x40,0x14,0x36,0x22,0x09,0xEA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x52,0x6F,0x35,0x77,0x3D,0xC0,0x5E,0x40,0x00,0x8D,0x96,0x25,0x27,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x3D,0xDC,0x93,0xFD,0xF4,0xC0,0x5E,0x3F,0xE2,0x16,0x83,0x48,0xF4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x42,0x67,0xA8,0x6B,0xF3,0xC0,0x5E,0x3F,0xB8,0xE8,0xFF,0x79,0xB7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x56,0xBC,0x7D,0xE4,0x3C,0xC0,0x5E,0x3F,0x95,0xFB,0x90,0x01,0x47,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x82,0x4D,0xF1,0xD0,0x46,0xC0,0x5E,0x3F,0x72,0xB5,0x14,0x6B,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xB0,0x0E,0xA4,0xDF,0xFF,0xC0,0x5E,0x3F,0x5D,0x76,0x74,0xF2,0x86,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x01,0x11,0x85,0x59,0x25,0xC0,0x5E,0x3F,0x47,0x97,0x63,0x50,0x5E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x26,0x69,0x2D,0xFA,0x7B,0xC0,0x5E,0x3F,0x40,0x76,0x34,0xEC,0x6C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x39,0xA6,0x09,0x86,0x16,0xC0,0x5E,0x3F,0x38,0xEB,0x79,0xDB,0xDF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x5D,0x35,0xED,0x43,0xDA,0xC0,0x5E,0x3F,0x33,0x92,0xFD,0xE7,0xF7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xAE,0x94,0x15,0x22,0x1E,0xC0,0x5E,0x3F,0x22,0xDE,0x91,0x7B,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xDA,0x66,0x64,0xDC,0xD7,0xC0,0x5E,0x3F,0x19,0x44,0x45,0x1D,0x55,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xFA,0x09,0x34,0x69,0xCD,0xC0,0x5E,0x3F,0x0E,0x9A,0x50,0xC2,0x3B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x17,0x20,0x89,0x5C,0x44,0xC0,0x5E,0x3E,0xFD,0xA1,0x73,0x6F,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x31,0x42,0x05,0x4D,0xC2,0xC0,0x5E,0x3E,0xE7,0xEA,0xA6,0x95,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x47,0xB7,0x20,0x32,0x99,0xC0,0x5E,0x3E,0xCD,0x0F,0x49,0x40,0xAF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x4D,0xCB,0xC3,0xBB,0x37,0xC0,0x5E,0x3E,0xBA,0x02,0xDC,0xE8,0x52,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x43,0x9A,0xE4,0x15,0xCA,0xC0,0x5E,0x3E,0xA8,0x51,0x07,0x70,0x84,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x2D,0xC5,0x5A,0x7C,0x51,0xC0,0x5E,0x3E,0x89,0xCB,0x2A,0x26,0xEF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x1E,0xD2,0xD0,0x33,0x00,0xC0,0x5E,0x3E,0x76,0x40,0xC3,0x27,0x6D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x10,0x63,0xE5,0x17,0x45,0xC0,0x5E,0x3E,0x59,0x3F,0x54,0xE6,0x6C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xFF,0x4F,0x91,0x66,0xDB,0xC0,0x5E,0x3E,0x48,0xC9,0x9D,0xFC,0xD9,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xEB,0xA5,0xA3,0x2F,0x20,0xC0,0x5E,0x3E,0x3E,0x91,0xBD,0x46,0xA2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xD4,0x79,0xE0,0x9A,0x42,0xC0,0x5E,0x3E,0x3D,0x81,0xCA,0x08,0x45,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xC0,0x07,0xAF,0xD5,0x0F,0xC0,0x5E,0x3E,0x41,0xC0,0x0A,0x4C,0x51,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xAF,0xE3,0xCE,0xCB,0x45,0xC0,0x5E,0x3E,0x49,0x39,0xF5,0x9F,0x52,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x93,0x79,0xAF,0xE5,0x95,0xC0,0x5E,0x3E,0x4F,0xE3,0xD8,0xAD,0x97,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x74,0x7D,0x25,0xC4,0x74,0xC0,0x5E,0x3E,0x4F,0x95,0xB8,0xE1,0x83,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x4F,0x22,0x7A,0x8F,0x73,0xC0,0x5E,0x3E,0x57,0xC2,0xE7,0xDD,0x23,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x2E,0xB9,0xDD,0x5C,0xE6,0xC0,0x5E,0x3E,0x5B,0x24,0x89,0xEC,0xEB,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xFA,0x6D,0xB4,0x51,0x3F,0xC0,0x5E,0x3E,0x57,0x81,0x15,0x1B,0xEB,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xDA,0xE8,0x1E,0x99,0x3D,0xC0,0x5E,0x3E,0x50,0xCD,0xDE,0x84,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xB3,0xC3,0x8D,0x9F,0x5F,0xC0,0x5E,0x3E,0x47,0x9D,0x23,0x64,0xBA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x8C,0x30,0x4C,0x8D,0xF9,0xC0,0x5E,0x3E,0x3A,0x18,0x14,0xE3,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x6D,0x0A,0xAB,0xA9,0x38,0xC0,0x5E,0x3E,0x27,0xA7,0xC1,0x42,0x7D,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x54,0xF0,0xDA,0xC1,0x60,0xC0,0x5E,0x3E,0x09,0x0F,0x02,0x75,0xDF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x42,0xFE,0xB1,0x5E,0xA1,0xC0,0x5E,0x3D,0xE0,0x2E,0x0A,0x3F,0xA5,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x42,0xF9,0x1F,0x6A,0x86,0xC0,0x5E,0x3D,0xA2,0x76,0x84,0x66,0xB1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x5A,0x3C,0x87,0xD2,0x6D,0xC0,0x5E,0x3D,0x77,0x17,0x4A,0x1D,0x8A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0x7B,0xE2,0xA6,0x35,0xD7,0xC0,0x5E,0x3D,0x58,0x93,0x86,0x77,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xA3,0x92,0x60,0xDA,0x64,0xC0,0x5E,0x3D,0x3C,0x42,0x5B,0xDF,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA7,0xD8,0x4A,0xE6,0xB6,0x1F,0xC0,0x5E,0x3D,0x32,0x3D,0x81,0x89,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x0B,0x64,0x25,0xBE,0x9D,0xC0,0x5E,0x3D,0x2C,0x04,0x7A,0xA8,0xDE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x31,0x11,0x42,0x8B,0x18,0xC0,0x5E,0x3D,0x2B,0x47,0x6B,0x06,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x56,0x09,0xCB,0x7D,0xFF,0xC0,0x5E,0x3D,0x1E,0x8E,0xB1,0x7D,0x95,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0x7D,0x3E,0xF7,0x8B,0x82,0xC0,0x5E,0x3D,0x13,0xAA,0x69,0xB3,0xA4,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xA4,0x23,0xF5,0x57,0x32,0xC0,0x5E,0x3D,0x07,0x18,0xC3,0x27,0xE6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xBC,0x40,0x6C,0x20,0x3B,0xC0,0x5E,0x3C,0xFA,0xC6,0x34,0x0C,0xB1,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA8,0xD7,0xF9,0xD5,0x7E,0x22,0xC0,0x5E,0x3C,0xE9,0x19,0x33,0x6B,0x19,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x0A,0x76,0x43,0x01,0x99,0xC0,0x5E,0x3C,0xC9,0x6B,0xB0,0x65,0xEE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x32,0xB9,0x0B,0x50,0x33,0xC0,0x5E,0x3C,0xB5,0xD9,0x2B,0xA2,0x67,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x5C,0xAE,0xCC,0xFE,0xE6,0xC0,0x5E,0x3C,0xA1,0xCD,0xC9,0x12,0x47,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0x8A,0x8F,0x95,0xA4,0x18,0xC0,0x5E,0x3C,0x8F,0x58,0xE2,0x8B,0xA2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0xA8,0xE4,0xC3,0x97,0x4F,0xC0,0x5E,0x3C,0x89,0x2D,0x04,0xDD,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xA9,0xF3,0x9A,0xC0,0x8E,0x55,0xC0,0x5E,0x3C,0x86,0xE1,0xAA,0xC1,0x73,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x37,0xC7,0xCF,0xB8,0xB5,0xC0,0x5E,0x3C,0x8C,0x33,0xB1,0xB5,0xCC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x62,0xD0,0xA9,0x7E,0x96,0xC0,0x5E,0x3C,0x90,0xE4,0x59,0x14,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x74,0x7E,0x2F,0x4C,0xDF,0xC0,0x5E,0x3C,0x9F,0x6C,0xFF,0x29,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x89,0x3E,0x8B,0x37,0xD3,0xC0,0x5E,0x3C,0xC7,0x51,0xD8,0x2A,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xAC,0x97,0x19,0xB9,0x30,0xC0,0x5E,0x3D,0x09,0x7B,0x80,0x3D,0x64,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xC9,0xA1,0x2C,0xB9,0xFC,0xC0,0x5E,0x3D,0x1E,0x4C,0x2F,0x4B,0xD2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xF0,0xB0,0xEC,0xFC,0x4F,0xC0,0x5E,0x3D,0x22,0x42,0x50,0xFF,0x46,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x12,0xFC,0x08,0xA7,0xF4,0xC0,0x5E,0x3D,0x15,0xD1,0x75,0x04,0xC7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x2D,0x2A,0x4F,0x09,0x61,0xC0,0x5E,0x3D,0x07,0xF3,0xB2,0x37,0xAA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x38,0x4C,0x5A,0xCC,0x59,0xC0,0x5E,0x3C,0xF7,0x3E,0xCF,0x84,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x3B,0xC9,0x4A,0xE6,0x6A,0xC0,0x5E,0x3C,0xDB,0x34,0x3B,0x39,0xDD,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x37,0x5A,0xD6,0x75,0x1A,0xC0,0x5E,0x3C,0xC1,0x76,0x08,0x0F,0x4B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x25,0x80,0x82,0xE6,0xE2,0xC0,0x5E,0x3C,0x9C,0x63,0x24,0x63,0xD3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xF6,0xA6,0x11,0x3E,0xAA,0xC0,0x5E,0x3C,0x75,0xCC,0x9F,0x77,0x39,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xDB,0x61,0x75,0x43,0x85,0xC0,0x5E,0x3C,0x5C,0x1D,0xB9,0x41,0x59,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xB3,0x80,0x8A,0x69,0x67,0xC0,0x5E,0x3C,0x34,0xF5,0xA7,0x5B,0x8C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x66,0xB9,0x62,0x5E,0x39,0xC0,0x5E,0x3B,0xF6,0xF0,0x11,0x7F,0xE2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x5A,0x39,0x63,0x99,0xCE,0xC0,0x5E,0x3B,0xEE,0xCB,0x59,0x5B,0x5A,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x5F,0x16,0xE3,0x49,0xA8,0xC0,0x5E,0x3B,0xDA,0xD9,0x53,0xE8,0x9E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x70,0xF3,0x52,0x6A,0x23,0xC0,0x5E,0x3B,0xBD,0x66,0xF3,0x23,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0x92,0x3B,0xD0,0x29,0x1F,0xC0,0x5E,0x3B,0xAD,0x35,0x9A,0xBA,0xE2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xCC,0xA8,0x68,0x50,0x3E,0xC0,0x5E,0x3B,0xA8,0x50,0xEA,0x66,0xA3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAA,0xEF,0x3F,0x95,0xAA,0x77,0xC0,0x5E,0x3B,0xAB,0x5F,0x64,0x6D,0x65,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x1C,0xD2,0xB7,0x0A,0x6E,0xC0,0x5E,0x3B,0xAC,0x71,0x95,0x75,0x91,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x4B,0x3E,0x3B,0xE0,0x79,0xC0,0x5E,0x3B,0xB9,0x9E,0xCC,0x78,0xB6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0x7A,0xE8,0x86,0x2B,0xD4,0xC0,0x5E,0x3B,0xDB,0xBA,0xC7,0xA5,0xE7,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x03,0x40,0x46,0xAB,0xAC,0xBC,0x22,0xA2,0xA4,0xC0,0x5E,0x3C,0x04,0x4C,0x0D,0x9F,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x01,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x03,0x42,0x0C,0x00,0x00,0xC2,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x2E,0x25};
//[a,f,r,l,.,c,m,a,s,i,.,L,i,n,e,S,e,a,r,c,h,T,a,s,k,$,l,m,c,p,|,a,f,r,l,.,c,m,a,s,i,.,L,i,n,e,S,e,a,r,c,h,T,a,s,k,|,T,c,p,B,r,i,d,g,e,|,4,0,0,|,6,8,$,L,M,C,P, , ,,&, ...]
Z line_search_task_outSizeBits = (Z) sizeof(line_search_task_out) * 8; // 3708 bytes

U8 automation_request_out[] = {0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x41,0x75,0x74,0x6F,0x6D,0x61,0x74,0x69,0x6F,0x6E,0x52,0x65,0x71,0x75,0x65,0x73,0x74,0x24,0x6C,0x6D,0x63,0x70,0x7C,0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x41,0x75,0x74,0x6F,0x6D,0x61,0x74,0x69,0x6F,0x6E,0x52,0x65,0x71,0x75,0x65,0x73,0x74,0x7C,0x54,0x63,0x70,0x42,0x72,0x69,0x64,0x67,0x65,0x7C,0x34,0x30,0x30,0x7C,0x36,0x38,0x24,0x4C,0x4D,0x43,0x50,0x00,0x00,0x00,0x2E,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x00,0x03,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x90,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x50,0x00,0x00,0x00,0x04,0xC2};
//[a,f,r,l,.,c,m,a,s,i,.,A,u,t,o,m,a,t,i,o,n,R,e,q,u,e,s,t,$,l,m,c,p,|,a,f,r,l,.,c,m,a,s,i,.,A,u,t,o,m,a,t,i,o,n,R,e,q,u,e,s,t,|,T,c,p,B,r,i,d,g,e,|,4,0,0,|,6,8,$, ... ]
Z automation_request_outSizeBits = (Z) sizeof(automation_request_out) * 8; // 138 bytes

U8 operating_region_out[] = {0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x4F,0x70,0x65,0x72,0x61,0x74,0x69,0x6E,0x67,0x52,0x65,0x67,0x69,0x6F,0x6E,0x24,0x6C,0x6D,0x63,0x70,0x7C,0x61,0x66,0x72,0x6C,0x2E,0x63,0x6D,0x61,0x73,0x69,0x2E,0x4F,0x70,0x65,0x72,0x61,0x74,0x69,0x6E,0x67,0x52,0x65,0x67,0x69,0x6F,0x6E,0x7C,0x54,0x63,0x70,0x42,0x72,0x69,0x64,0x67,0x65,0x7C,0x34,0x30,0x30,0x7C,0x36,0x38,0x24,0x4C,0x4D,0x43,0x50,0x00,0x00,0x00,0x2B,0x01,0x43,0x4D,0x41,0x53,0x49,0x00,0x00,0x00,0x00,0x00,0x00,0x27,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x50,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x4E,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x4F,0x00,0x00,0x03,0xE1};
//[a,f,r,l,.,c,m,a,s,i,.,O,p,e,r,a,t,i,n,g,R,e,g,i,o,n,$,l,m,c,p,|,a,f,r,l,.,c,m,a,s,i,.,O,p,e,r,a,t,i,n,g,R,e,g,i,o,n,|,T,c,p,B,r,i,d,g,e,|,4,0,0,|,6,8,$, ... ]
Z operating_region_outSizeBits = (Z) sizeof(operating_region_out) * 8; // 131 bytes

U8 trusted_ids_out[] =     {0x35, 0x30, 0x30, 0x00, 0x34, 0x30, 0x30, 0x00, 0x36, 0x30, 0x30, 0x00}; // [5,0,0, ,4,0,0, ,6,0,0, ,]
U8 trusted_ids_out_bad[] = {0x35, 0x35, 0x35, 0x00, 0x36, 0x36, 0x36, 0x00, 0x37, 0x37, 0x37, 0x00}; // [5,5,5, ,6,6,6, ,7,7,7, ,]
Z trusted_ids_outSizeBits = (Z) sizeof(trusted_ids_out) * 8;

Z numberOfChoices = 3;

Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_initialise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_initialise_", 0);
  api_put_trusted_ids_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF trusted_ids_outSizeBits,trusted_ids_out);
  srand(42);
  /*
  
  // examples of api setter and logging usage

  uint8_t t0[numBytes_attestation_gate_CMASI_AddressArray_i];
  byte_array_default(SF t0, numBits_attestation_gate_CMASI_AddressArray_i, numBytes_attestation_gate_CMASI_AddressArray_i);
  api_put_trusted_ids_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF numBits_attestation_gate_CMASI_AddressArray_i, t0);

  uint8_t t1[numBytes_attestation_gate_CMASI_AddressAttributedMessage_i];
  byte_array_default(SF t1, numBits_attestation_gate_CMASI_AddressAttributedMessage_i, numBytes_attestation_gate_CMASI_AddressAttributedMessage_i);
  api_put_automation_request_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF numBits_attestation_gate_CMASI_AddressAttributedMessage_i, t1);

  uint8_t t2[numBytes_attestation_gate_CMASI_AddressAttributedMessage_i];
  byte_array_default(SF t2, numBits_attestation_gate_CMASI_AddressAttributedMessage_i, numBytes_attestation_gate_CMASI_AddressAttributedMessage_i);
  api_put_operating_region_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF numBits_attestation_gate_CMASI_AddressAttributedMessage_i, t2);

  uint8_t t3[numBytes_attestation_gate_CMASI_AddressAttributedMessage_i];
  byte_array_default(SF t3, numBits_attestation_gate_CMASI_AddressAttributedMessage_i, numBytes_attestation_gate_CMASI_AddressAttributedMessage_i);
  api_put_line_search_task_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF numBits_attestation_gate_CMASI_AddressAttributedMessage_i, t3);

  api_logInfo__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF string("Example logInfo"));

  api_logDebug__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF string("Example logDebug"));

  api_logError__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF string("Example logError"));
  */
}

Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_finalise_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_finalise_", 0);
}

Unit attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_timeTriggered_(STACK_FRAME_ONLY) {
  DeclNewStackFrame(caller, "RadioDriver_thr_Impl_radio_RadioDriver.c", "", "attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver_timeTriggered_", 0);

  Z i = rand() % numberOfChoices;
  if (rand() % 2 == 0) {
    api_put_trusted_ids_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF trusted_ids_outSizeBits,trusted_ids_out);
  } else {
    api_put_trusted_ids_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF trusted_ids_outSizeBits,trusted_ids_out_bad);
  }

  if (i == 0) {
    api_put_operating_region_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF operating_region_outSizeBits, operating_region_out);
  } else if (i == 1) {
    api_put_line_search_task_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF line_search_task_outSizeBits, line_search_task_out);
  } else if (i == 2) {
    api_put_automation_request_out__attestation_gate_RadioDriver_RadioDriver_thr_Impl_radio_RadioDriver(SF automation_request_outSizeBits, automation_request_out);
  }
}
