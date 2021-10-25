::#! 2> /dev/null                                   #
@ 2>/dev/null # 2>nul & echo off & goto BOF         #
if [ -z ${SIREUM_HOME} ]; then                      #
  echo "Please set SIREUM_HOME env var"             #
  exit -1                                           #
fi                                                  #
exec ${SIREUM_HOME}/bin/sireum slang run "$0" "$@"  #
:BOF
setlocal
if not defined SIREUM_HOME (
  echo Please set SIREUM_HOME env var
  exit /B -1
)
%SIREUM_HOME%\\bin\\sireum.bat slang run "%0" %*
exit /B %errorlevel%
::!#
// #Sireum

import org.sireum._

// This file was auto-generated.  Do not edit

val SCRIPT_HOME: Os.Path = Os.slashDir
val PATH_SEP: String = Os.pathSep

val emitter_t_impl_src_process_src_thread: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/receiver_vm/test_event_data_port_periodic_domains${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/receiver_vm/emitter_t_impl_src_process_src_thread",
  "--output-dir", s"${SCRIPT_HOME}/../src/c/CAmkES_seL4/slang_libraries/emitter_t_impl_src_process_src_thread",
  "--name", "emitter_t_impl_src_process_src_thread",
  "--apps", "receiver_vm.emitter_t_impl_src_process_src_thread.src_thread",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=1",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_emitter_t_impl_src_process_src_thread.cmake",
  "--forward", "art.ArtNative=receiver_vm.emitter_t_impl_src_process_src_thread.src_thread",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/emitter_t_impl_src_process_src_thread/emitter_t_impl_src_process_src_thread.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/emitter_t_impl_src_process_src_thread/emitter_t_impl_src_process_src_thread.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/emitter_t_impl_src_process_src_thread/emitter_t_impl_src_process_src_thread_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/emitter_t_impl_src_process_src_thread/emitter_t_impl_src_process_src_thread_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/emitter_t_impl_src_process_src_thread/emitter_t_impl_src_process_src_thread_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/emitter_t_impl_src_process_src_thread/emitter_t_impl_src_process_src_thread_adapter.c",
  "--exclude-build", "receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread,receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread",
  "--lib-only",
  "--verbose")

val consumer_t_impl_dst_process_dst_thread: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/receiver_vm/test_event_data_port_periodic_domains${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/receiver_vm/consumer_t_impl_dst_process_dst_thread",
  "--output-dir", s"${SCRIPT_HOME}/../src/c/CAmkES_seL4/slang_libraries/consumer_t_impl_dst_process_dst_thread",
  "--name", "consumer_t_impl_dst_process_dst_thread",
  "--apps", "receiver_vm.consumer_t_impl_dst_process_dst_thread.dst_thread",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=1",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_consumer_t_impl_dst_process_dst_thread.cmake",
  "--forward", "art.ArtNative=receiver_vm.consumer_t_impl_dst_process_dst_thread.dst_thread",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/consumer_t_impl_dst_process_dst_thread/consumer_t_impl_dst_process_dst_thread.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/consumer_t_impl_dst_process_dst_thread/consumer_t_impl_dst_process_dst_thread.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/consumer_t_impl_dst_process_dst_thread/consumer_t_impl_dst_process_dst_thread_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/consumer_t_impl_dst_process_dst_thread/consumer_t_impl_dst_process_dst_thread_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/consumer_t_impl_dst_process_dst_thread/consumer_t_impl_dst_process_dst_thread_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/consumer_t_impl_dst_process_dst_thread/consumer_t_impl_dst_process_dst_thread_adapter.c",
  "--exclude-build", "receiver_vm.test_event_data_port_periodic_domains.emitter_t_impl_src_process_src_thread,receiver_vm.test_event_data_port_periodic_domains.consumer_t_impl_dst_process_dst_thread",
  "--lib-only",
  "--verbose")

val SlangTypeLibrary: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/receiver_vm/SlangTypeLibrary",
  "--output-dir", s"${SCRIPT_HOME}/../src/c/CAmkES_seL4/slang_libraries/SlangTypeLibrary",
  "--name", "SlangTypeLibrary",
  "--apps", "receiver_vm.SlangTypeLibrary.SlangTypeLibrary",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_SlangTypeLibrary.cmake",
  "--forward", "art.ArtNative=receiver_vm.SlangTypeLibrary.SlangTypeLibrary",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--lib-only",
  "--verbose")

val projects: ISZ[ISZ[String]] = ISZ(
  emitter_t_impl_src_process_src_thread,
  consumer_t_impl_dst_process_dst_thread,
  SlangTypeLibrary
)

println("Initializing runtime library ...")
Sireum.initRuntimeLibrary()

for(p <- projects) {
  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
}

//ops.ISZOps(projects).parMap(p =>
//  Sireum.run(ISZ[String]("slang", "transpilers", "c") ++ p)
//)
