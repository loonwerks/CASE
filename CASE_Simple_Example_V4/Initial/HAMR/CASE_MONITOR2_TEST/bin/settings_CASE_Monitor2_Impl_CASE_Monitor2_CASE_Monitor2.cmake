add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_Monitor2_Impl_CASE_Monitor2_CASE_Monitor2
                        muslc)
endif()