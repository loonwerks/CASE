cmake_minimum_required(VERSION 3.8.2)

project (testshare C)



DeclareCAmkESComponent(publisher_impl
  SOURCES components/publisher_impl//src/publisher.c components/publisher_impl/src/tb_publisher_impl.c
  INCLUDES components/publisher_impl/includes/ includes
)

DeclareCAmkESComponent(subscriber_impl
  SOURCES components/subscriber_impl//src/subscriber.c components/subscriber_impl/src/tb_subscriber_impl.c
  INCLUDES components/subscriber_impl/includes/ includes
)

DeclareCAmkESRootserver(testshare.camkes)
