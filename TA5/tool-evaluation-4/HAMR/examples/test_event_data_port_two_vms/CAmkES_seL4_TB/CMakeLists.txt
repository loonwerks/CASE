#
# Copyright 2018, Data61
# Commonwealth Scientific and Industrial Research Organisation (CSIRO)
# ABN 41 687 119 230.
#
# Copyright 2019 Adventium Labs
# Modifications made to original
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#
# @TAG(DATA61_Adventium_BSD)
#

cmake_minimum_required(VERSION 3.7.2)

project(aadl-eventdata-direct C)

add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/queue)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/Receiver)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/components/Sender)
add_subdirectory(${CMAKE_CURRENT_LIST_DIR}/vm)

DeclareCAmkESRootserver(test_event_data_port_two_vms.camkes)
