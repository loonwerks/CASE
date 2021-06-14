add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_Monitor1_Impl_CASE_Monitor_CASE_Monitor
                        muslc)
endif()