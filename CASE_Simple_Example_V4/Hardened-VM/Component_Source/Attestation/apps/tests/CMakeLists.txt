cmake_minimum_required(VERSION 3.10.2)

get_files(tests_src ${server_am_src} Main.sml)
build_posix_am("tests" ${tests_src})