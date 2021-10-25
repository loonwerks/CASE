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

val source_thread_impl_source_process_component_source_thread_component: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/test_data_port_periodic_domains/test_data_port_periodic_domains${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/test_data_port_periodic_domains/source_thread_impl_source_process_component_source_thread_component",
  "--output-dir", s"${SCRIPT_HOME}/../src/c/CAmkES_seL4/slang_libraries/source_thread_impl_source_process_component_source_thread_component",
  "--name", "source_thread_impl_source_process_component_source_thread_component",
  "--apps", "test_data_port_periodic_domains.source_thread_impl_source_process_component_source_thread_component.source_thread_component",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=1",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_source_thread_impl_source_process_component_source_thread_component.cmake",
  "--forward", "art.ArtNative=test_data_port_periodic_domains.source_thread_impl_source_process_component_source_thread_component.source_thread_component",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/source_thread_impl_source_process_component_source_thread_component/source_thread_impl_source_process_component_source_thread_component.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/source_thread_impl_source_process_component_source_thread_component/source_thread_impl_source_process_component_source_thread_component.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/source_thread_impl_source_process_component_source_thread_component/source_thread_impl_source_process_component_source_thread_component_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/source_thread_impl_source_process_component_source_thread_component/source_thread_impl_source_process_component_source_thread_component_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/source_thread_impl_source_process_component_source_thread_component/source_thread_impl_source_process_component_source_thread_component_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/source_thread_impl_source_process_component_source_thread_component/source_thread_impl_source_process_component_source_thread_component_adapter.c",
  "--exclude-build", "test_data_port_periodic_domains.test_data_port_periodic_domains.source_thread_impl_source_process_component_source_thread_component,test_data_port_periodic_domains.test_data_port_periodic_domains.destination_thread_impl_destination_process_component_destination_thread_component",
  "--lib-only",
  "--verbose")

val destination_thread_impl_destination_process_component_destination_thread_component: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/bridge${PATH_SEP}${SCRIPT_HOME}/../src/main/component${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/test_data_port_periodic_domains/test_data_port_periodic_domains${PATH_SEP}${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/test_data_port_periodic_domains/destination_thread_impl_destination_process_component_destination_thread_component",
  "--output-dir", s"${SCRIPT_HOME}/../src/c/CAmkES_seL4/slang_libraries/destination_thread_impl_destination_process_component_destination_thread_component",
  "--name", "destination_thread_impl_destination_process_component_destination_thread_component",
  "--apps", "test_data_port_periodic_domains.destination_thread_impl_destination_process_component_destination_thread_component.destination_thread_component",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "16",
  "--sequence", s"MS[Z,Option[art.Bridge]]=1;IS[Z,art.UPort]=1",
  "--constants", s"art.Art.maxComponents=1;art.Art.maxPorts=1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_destination_thread_impl_destination_process_component_destination_thread_component.cmake",
  "--forward", "art.ArtNative=test_data_port_periodic_domains.destination_thread_impl_destination_process_component_destination_thread_component.destination_thread_component",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--exts", s"${SCRIPT_HOME}/../src/c/ext-c/ext.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/ext.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/destination_thread_impl_destination_process_component_destination_thread_component/destination_thread_impl_destination_process_component_destination_thread_component.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/destination_thread_impl_destination_process_component_destination_thread_component/destination_thread_impl_destination_process_component_destination_thread_component.c${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/destination_thread_impl_destination_process_component_destination_thread_component/destination_thread_impl_destination_process_component_destination_thread_component_api.h${PATH_SEP}${SCRIPT_HOME}/../src/c/ext-c/destination_thread_impl_destination_process_component_destination_thread_component/destination_thread_impl_destination_process_component_destination_thread_component_api.c${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/destination_thread_impl_destination_process_component_destination_thread_component/destination_thread_impl_destination_process_component_destination_thread_component_adapter.h${PATH_SEP}${SCRIPT_HOME}/../src/c/etc_seL4/adapters/destination_thread_impl_destination_process_component_destination_thread_component/destination_thread_impl_destination_process_component_destination_thread_component_adapter.c",
  "--exclude-build", "test_data_port_periodic_domains.test_data_port_periodic_domains.source_thread_impl_source_process_component_source_thread_component,test_data_port_periodic_domains.test_data_port_periodic_domains.destination_thread_impl_destination_process_component_destination_thread_component",
  "--lib-only",
  "--verbose")

val SlangTypeLibrary: ISZ[String] = ISZ(
  "--sourcepath", s"${SCRIPT_HOME}/../src/main/art${PATH_SEP}${SCRIPT_HOME}/../src/main/data${PATH_SEP}${SCRIPT_HOME}/../src/main/seL4Nix/test_data_port_periodic_domains/SlangTypeLibrary",
  "--output-dir", s"${SCRIPT_HOME}/../src/c/CAmkES_seL4/slang_libraries/SlangTypeLibrary",
  "--name", "SlangTypeLibrary",
  "--apps", "test_data_port_periodic_domains.SlangTypeLibrary.SlangTypeLibrary",
  "--fingerprint", "3",
  "--bits", "32",
  "--string-size", "256",
  "--sequence-size", "1",
  "--cmake-includes", s"+${SCRIPT_HOME}/settings_SlangTypeLibrary.cmake",
  "--forward", "art.ArtNative=test_data_port_periodic_domains.SlangTypeLibrary.SlangTypeLibrary",
  "--stack-size", "16777216",
  "--stable-type-id",
  "--lib-only",
  "--verbose")

val projects: ISZ[ISZ[String]] = ISZ(
  source_thread_impl_source_process_component_source_thread_component,
  destination_thread_impl_destination_process_component_destination_thread_component,
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
