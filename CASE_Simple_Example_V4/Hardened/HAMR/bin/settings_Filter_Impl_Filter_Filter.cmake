add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(Filter_Impl_Filter_Filter
                        muslc)
endif()