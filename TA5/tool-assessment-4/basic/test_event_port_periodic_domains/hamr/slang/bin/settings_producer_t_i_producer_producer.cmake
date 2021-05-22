add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(producer_t_i_producer_producer
                        muslc)
endif()