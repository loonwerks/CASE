#!/usr/bin/env bash
#
# This file is autogenerated.  Do not edit
#
set -e
export SCRIPT_HOME=$( cd "$( dirname "$0" )" &> /dev/null && pwd )
cd $SCRIPT_HOME
x-terminal-emulator -e sh -c "linux-build/emitter_t_impl_src_process_src_thread_App" &
x-terminal-emulator -e sh -c "linux-build/consumer_t_impl_dst_process_dst_thread_App" &
read -p "Press enter to initialise components ..."
linux-build/Main
read -p "Press enter again to start ..."
linux-build/Main