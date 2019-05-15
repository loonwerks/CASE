cmake_minimum_required(VERSION 3.8.2)

project (testsubprogram C)



DeclareCAmkESComponent(sender_impl
  SOURCES components/sender_impl//src/sender.c components/sender_impl/src/sb_sender_impl.c
  INCLUDES components/sender_impl/includes/ includes
)

DeclareCAmkESComponent(receiver_impl
  SOURCES components/receiver_impl//src/receiver.c components/receiver_impl/src/sb_receiver_impl.c
  INCLUDES components/receiver_impl/includes/ includes
)

DeclareCAmkESRootserver(testsubprogram.camkes)
