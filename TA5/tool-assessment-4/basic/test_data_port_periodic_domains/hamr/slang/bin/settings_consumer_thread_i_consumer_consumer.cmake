add_definitions(-DCAMKES)

if(TARGET muslc)
  target_link_libraries(consumer_thread_i_consumer_consumer
                        muslc)
endif()