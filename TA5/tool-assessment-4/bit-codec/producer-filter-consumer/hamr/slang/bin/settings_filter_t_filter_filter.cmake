add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(filter_t_filter_filter
                        muslc)
endif()