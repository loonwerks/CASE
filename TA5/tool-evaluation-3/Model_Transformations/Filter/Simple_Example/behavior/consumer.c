#include <stdio.h>
#include <sb_Consumer_Impl.h>

void msg_in_event_handler(const Producer_Consumer__Coordinate_Impl * in_arg){
  printf("msg_in event handler called\n");
}