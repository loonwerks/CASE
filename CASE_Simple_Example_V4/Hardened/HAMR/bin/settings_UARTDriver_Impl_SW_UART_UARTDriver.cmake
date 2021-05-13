add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(UARTDriver_Impl_SW_UART_UARTDriver
                        muslc)
endif()