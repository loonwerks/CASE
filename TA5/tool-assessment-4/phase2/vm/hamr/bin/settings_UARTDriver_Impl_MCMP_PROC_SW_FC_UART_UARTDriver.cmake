add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(UARTDriver_Impl_MCMP_PROC_SW_FC_UART_UARTDriver
                        muslc)
endif()