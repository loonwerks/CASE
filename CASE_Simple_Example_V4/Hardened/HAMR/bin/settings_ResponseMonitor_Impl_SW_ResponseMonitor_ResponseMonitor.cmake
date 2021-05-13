add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(ResponseMonitor_Impl_SW_ResponseMonitor_ResponseMonitor
                        muslc)
endif()