
#pragma once
#include "common/struct_defines.h"
#include "common/conv.h"
#include "KeyValuePair.h"
#define LMCP_Task_SUB "afrl.cmasi.Task"

#define LMCP_Task_TYPENAME "Task"

#define LMCP_Task_TYPE 8

struct Task_struct {
    lmcp_object super;
// Units: None
    int64_t taskid;

    char* label;
    array_info label_ai;

// Units: None
    int64_t* eligibleentities;
    array_info eligibleentities_ai;

// Units: sec
    uint32_t revisitrate;

    KeyValuePair** parameters;
    array_info parameters_ai;

    uint8_t priority;

    uint8_t required;

};
typedef struct Task_struct Task;
void lmcp_pp_Task(Task* s);
size_t lmcp_packsize_Task (Task* i);
size_t lmcp_pack_Task_header(uint8_t* buf, Task* i);
void lmcp_free_Task(Task* i, int out_malloced);
void lmcp_init_Task (Task** i);
int lmcp_unpack_Task(uint8_t** buf, size_t *size_remain,Task* outp);
size_t lmcp_pack_Task(uint8_t* buf, Task* i);
