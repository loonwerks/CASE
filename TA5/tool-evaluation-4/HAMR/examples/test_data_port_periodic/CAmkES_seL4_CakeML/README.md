This is an example of two CakeML programs communicating via AADL-style dataports.

The CMake directives assume that you have the CakeML compiler binary (`cake`) on your `$PATH`. Go grab one at https://cakeml.org. It's tested with CakeML version `9309fef75cc5ec28ddc92b105a48bd83fbe03672`, Fri Dec 13 2019, but I expect it would work fine on newer versions. I've only tested it on the `x86_64` platform; to run it on 32-bit ARM (which I haven't tested) you would need to grab the 64-to-32 cross-compiler from cakeml.org.

The CakeML code resides in the `{source,destination}.cml` files for the respective component. A CakeML component is comprised of three structures, as follows:

```
structure API =
struct
  <(mockup of) a HAMR-generated API that should be callable by client>
end

structure Client =
struct
  <client-defined component code>
end

structure Control =
struct
  <HAMR-generated code that should not be callable by client>
end
```

The `Client` module is expected to contain at least two functions:

* `initialise : unit -> unit` defines any inititialisation code the client wishes to run at component startup time.
* `timeTrigged : unit -> unit` defines the behaviour of the client when triggered.

== FFI calls and glue gode ==

CakeML foreign function calls are of the shape `#(foo) s arr`, where `s` is a string and `arr` is a byte array. The intent is that the string is used to pass parameters to the outside world, and `a` is a buffer through which the outside world can pass data to CakeML. This FFI call to the port `foo` will be implemented as a `Call` to the label `ffifoo`, which we assume is implemented by a C function with signature

```void ffiloginfo (unsigned char *c, long clen, unsigned char *a, long alen)```

CakeML will pass the contents of `s` to `c`, the length of `s` to `clen`, the contents of `arr` to `a`, and the length of `arr` to `alen`. CakeML expects this function to write data to write data to `a[0]..a[alen-1]`, and trusts this foreign function to otherwise leave CakeML's memory region unmolested, and to cede ownership of `a` after it returns.

For an example, from the point of view of CakeML client code, writing to the port `sb_write_port` is done by calling the function `API.sb_write_port_write : string -> unit`. This function is implemented as an FFI call `#(sb_write_port_write)`, which passes the string argument supplied by the client to the C function `ffisb_write_port_write`. This function, in turn, passes the string to the C function `sb_write_port_write`, which is the exact same entry point used by client code written in C.

== Known issues/future work ==

We need to account for the possibility that `Client` comes not as concrete syntax but as a CakeML AST in S-expression form. This is because the code that SPLAT and similar tools synthesise will not come in concrete syntax form; in general, this code may use CakeML language features that are outside the domain of the CakeML parser. Because CakeML unfortunately doesn't have separate compilation, this can be done by generating, and `cat`ing together, S-expressions for the `API` and `Control` modules too. I (Johannes ÅP) have a rough idea of how to stitch this together, but it needs to happen.

The functions `wait` and `initialise` in the `API` module should probably move to the `Control` module.