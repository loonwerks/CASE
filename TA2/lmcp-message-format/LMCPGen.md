# LMCPGen

[LMCPGen](https://github.com/afrl-rq/LmcpGen) autogenerates source-code libraries that conform to the serialization specification of LMCP. I downloaded the [latest release](https://github.com/afrl-rq/LmcpGen/releases).

The code documentation and code in generated as follows.

```
$ mkdir OpenUxAS; cd OpenUxAS
$ java -jar LmcpGen.jar -mdmdir "~/case-ta6-experimental-platform-OpenUxAS/mdms" -doc -dir "doc/LMCP"
$ java -jar LmcpGen.jar -mdmdir "~/case-ta6-experimental-platform-OpenUxAS/mdms" -cpp -dir "src/LMCP"
```

The sources creates directories for each of the namespaces and in those it places the generated code for each message type according to namespace. The `avtas/lmcp` directory has the `lmcp` base types for the messages. It also has the `Factory` method used by `OpenUxAS` to create the `lmcp` objects for communication.

# LMCP Object

See `Object * Factory::getObject(ByteBuffer & buffer)` in `avtas/lmcp/Factory.cpp`. In order from beginning to end of the buffer:

  * `int32_t`: LMCP control string (`0x4c4d4350`)
  * `uint32_t`: Message size
  * `bool`: `false` is a NULL message
  * `int64_t`: Series ID
  * `uint32_t`: Message type
  * `uint16_t`: Version
  *  Message Payload (see below `OperatingRegion` Payload)
  * `uint32_t`: Checksum

`HEADER_SIZE` is 8 bytes and `CHECKSUM` is 4 bytes. Byte order is **big-endian** for multi-byte data.

The ID, type, and version are defined in the source for the individual messages. There are corresponding string versions for the ID and type in that same file. The size of the payload depends on the message type and is made clear in the `pack` method for the message type. In general, arrays are preceded by a length specifier.

# OperatingRegion Payload

  * `int64_t`: ID
  * `uint16_t`: `KeepInAreas` array length (array size)
  * `length * sizeof(uint64_t)`: array of `KeepInArea` IDs
  * `uint16_t`: `KeepOutAreas` array length
  * `length * sizeof(uint64_t)`: array of `KeepOutArea` IDs

# LMCP Message

There are two types of messages that only seem to differ slightly in header format. The notes in [UxAS_main.cpp](https://github.com/loonwerks/case-ta6-experimental-platform-OpenUxAS/blob/develop-case-ta6/src/UxAS_Main.cpp) indicate that the `AddressAttributedMessage` is the correct format.

## Address Attributed Message

The message is an address followed by a set of attributes and then the payload. The attributes are defined in [MessageAttributes.h](https://github.com/loonwerks/case-ta6-experimental-platform-OpenUxAS/blob/develop-case-ta6/src/Communications/MessageAttributes.h) and are delimited by the `|` character. A `$` character delimits the address from the attributes and the attributes from the payload. [AddressAttributedMessage.h](https://github.com/loonwerks/case-ta6-experimental-platform-OpenUxAS/blob/develop-case-ta6/src/Communications/AddressedAttributedMessage.h) gives actual format (see `bool setAddressAttributesAndPayload`).


  * `string`: Notational address (e.g., `uxas.project.isolate.IntruderAlert`, `uxas.roadmonitor`, etc.)
  * `$`: delimiter
  * `string` : Content type (e.g., `lmcp`, `json`, `xml`, etc.)
  * `|`: delimiter
  * `string`: Descriptor (e.g., `afrl.cmasi.OperatingRegion` if content type is `lmcp`, etc.)
  * `|`: delimitor
  * `string`: Source group (e.g., `uxas.roadmonitor`, etc.)
  * `|`: delimetor
  * `string`: Source entity ID
  * `|`
  * `string`: Source service ID
  * `$`
  * LMCP Object: (see above)

The format is address `$` payload. (See `AddressedMessage.h`). Ah. The real stuff is in `AddressAttributedMessage`. It has both the address and the attributes.

## Addressed Message

Same as above but without the attributes.
