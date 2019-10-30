#include <all.h>
#include <ipc.h>

static union Option_8E9F45 camkes_buffer[10] = { 0 };

Z uav_project_extern_SharedMemory_create(STACK_FRAME Z id) {
  DeclNewNone_964667(t_0);
  None_964667_apply(CALLER &t_0);
  Type_assign((camkes_buffer + id), (&t_0), sizeof(union Option_8E9F45));

  return -1;
}

void uav_project_extern_SharedMemory_receive(STACK_FRAME art_DataContent result, Z port) {
  printf("uav_project_extern_SharedMemory_receive called with port %i -- NOT IMPLEMENTED\n", port);
}

void uav_project_extern_SharedMemory_receiveAsync(STACK_FRAME Option_8E9F45 result, Z port) {
  union Option_8E9F45 p = camkes_buffer[port];

  if (p.type == TSome_D29615) {
      Type_assign(result, &p, sizeOf((Type) &p));
      memset(camkes_buffer + port, 0, sizeof(union Option_8E9F45));
  } else {
      result->type = TNone_964667;
  }
}

Unit uav_project_extern_SharedMemory_send(STACK_FRAME Z destid, Z port, art_DataContent d) {
  printf("uav_project_extern_SharedMemory_send called with port %i -- NOT IMPLEMENTED\n", port);
}

B uav_project_extern_SharedMemory_sendAsync(STACK_FRAME Z id, Z port, art_DataContent d) {
  camkes_sendAsync(port, d);

  return T;
}

Unit uav_project_extern_SharedMemory_remove(STACK_FRAME Z id) {
  printf("uav_project_extern_SharedMemory_remove called with %i -- NOT IMPLEMENTED\n", id);
}

Unit uav_project_extern_Process_sleep(STACK_FRAME Z n) {}

void camkes_In_Port_Data_Transfer (Z port, art_DataContent d) {
  union Option_8E9F45 p = camkes_buffer[port];
  camkes_buffer[port].type = TSome_D29615;
  Type_assign(&(camkes_buffer[port].Some_D29615.value), d, sizeOf((Type) d));
}
