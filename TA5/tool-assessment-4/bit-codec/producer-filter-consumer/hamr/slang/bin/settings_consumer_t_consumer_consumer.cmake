add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(consumer_t_consumer_consumer
                        muslc)
endif()