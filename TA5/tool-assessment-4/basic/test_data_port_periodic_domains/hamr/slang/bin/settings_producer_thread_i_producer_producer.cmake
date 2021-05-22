add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(producer_thread_i_producer_producer
                        muslc)
endif()