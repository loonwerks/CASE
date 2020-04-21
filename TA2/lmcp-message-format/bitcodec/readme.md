# LMCP Bitcodec

## Running Example

* Specification: [src/uxas/lmcp-spec.sc](src/uxas/lmcp-spec.sc) ([graph](https://raw.githubusercontent.com/loonwerks/CASE/master/TA2/lmcp-message-format/bitcodec/src/uxas/lmcp-spec.dot.svg))
* Generated codecs: [src/uxas/lmcp-gen.sc](src/uxas/lmcp-gen.sc)

### Requirements

* [Sireum Kekinian](https://github.com/sireum/kekinian)
* [GraphViz](https://www.graphviz.org)'s `dot`
* C compiler toolchain (e.g., gcc, clang, make)
* CMake 3.6.2 or above

### Running on the JVM

* macOS/Linux:

  ```bash
  bin/build.cmd run
  ```

* Windows:

  ```cmd
  bin\build.cmd run
  ```
  
### Running Natively (via C translation)

* macOS:

  ```bash
  bin/build.cmd run-native
  ```

* Linux:

  ```bash
  ulimit -S -s 262144
  bin/build.cmd run-native
  ```

* Windows:

  ```cmd
  bin\build.cmd run-native
  ```
  
### Regenerating Slang Codecs

The repository already holds the generated codecs, however,
they can be regenerated as follows:

* macOS/Linux:

  ```bash
  bin/build.cmd gen
  ```

* Windows:

  ```cmd
  bin\build.cmd gen
  ```
  
### Regenerating JSON

The repository already holds the generated specs in JSON, however,
they can be regenerated as follows:

* macOS/Linux:

  ```bash
  bin/build.cmd json
  ```

* Windows:

  ```cmd
  bin\build.cmd json
  ```
  
### Regenerating GraphViz's .dot

The repository already holds the generated .dot file for each example spec, 
however, they can be regenerated as follows:

* macOS/Linux:

  ```bash
  bin/build.cmd dot
  ```

* Windows:

  ```cmd
  bin\build.cmd dot
  ```

### Running All Tasks

To run all the tasks above in one go:

* macOS/Linux:

  ```bash
  bin/build.cmd all
  ```

* Windows:

  ```cmd
  bin\build.cmd all
  ```

### Running Task(s) on a Specific Example

To run a specific example for any task (e.g., run):
  
* macOS/Linux:

  ```bash
  bin/build.cmd run lmcp-spec.sc
  ```

* Windows:

  ```cmd
  bin\build.cmd run lmcp-spec.sc
  ```
