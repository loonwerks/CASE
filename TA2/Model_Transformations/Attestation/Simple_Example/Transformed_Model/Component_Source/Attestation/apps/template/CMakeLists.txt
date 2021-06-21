cmake_minimum_required(VERSION 3.10.2)

# This sets our CakeML source to just these two files
get_files(template_src main.sml)

# If you want add all of the AM source files, you can add the "server_am_src" variable to your list of sources:
# get_files(template_src ${server_am_src} main.sml)

# This will build an executable from your list of CakeML sources
# (it also links against several C FFI files for posix system calls)
build_posix_am("template_test" ${template_src})

# If you need to add C files, you can add them here (replace the "c_file"s with real filepaths):
# get_files(template_c_files c_file_1 c_file_2 c_file_n)
# target_sources(template_test PRIVATE ${template_c_files})
