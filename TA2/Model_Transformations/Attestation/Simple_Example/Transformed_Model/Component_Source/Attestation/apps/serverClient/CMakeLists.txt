cmake_minimum_required(VERSION 3.10.2)

get_files(client_src ${server_am_src} ClientTest.sml)
build_posix_am("client" ${client_src})

get_files(server_src ${server_am_src} Server.sml)
build_posix_am("server" ${server_src})