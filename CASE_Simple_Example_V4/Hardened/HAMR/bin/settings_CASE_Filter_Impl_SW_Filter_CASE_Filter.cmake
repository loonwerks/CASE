add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(CASE_Filter_Impl_SW_Filter_CASE_Filter
                        muslc)
endif()