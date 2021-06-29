add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(Monitor_Impl_SW_Monitor_Monitor
                        muslc)
endif()