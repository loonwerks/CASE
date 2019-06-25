#
# Copyright 2018, Data61
# Commonwealth Scientific and Industrial Research Organisation (CSIRO)
# ABN 41 687 119 230.
#
# This software may be distributed and modified according to the terms of
# the BSD 2-Clause license. Note that NO WARRANTY is provided.
# See "LICENSE_BSD2.txt" for details.
#
# @TAG(DATA61_BSD)
#

cmake_minimum_required(VERSION 3.8.2)

project(FileServer C)

# The FileServer expects a cpio_archive to be linked into it. This needs to be provided
# on a per instances basis by the system through ExtendCAmkESComponentInstance
DeclareCAmkESComponent(FileServer SOURCES src/server.c)

add_subdirectory("${CMAKE_CURRENT_LIST_DIR}/libFileServer-client" ${CMAKE_CURRENT_BINARY_DIR}/libFileServer-client)
