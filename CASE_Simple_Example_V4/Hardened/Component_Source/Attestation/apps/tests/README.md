# Test for Copland #

A series of tests for the interpreter, largely revolving around the crypto functionality. Build with `make test`. Make sure to run in the same directory as `hashTest.txt` for the file hash test to work.

## Contents ##

- `testDir/`&mdash;a test directory to be hashed.
- `hashTest.txt`&mdash;a test file to be hashed.
- [`Main.sml`](Main.sml)&mdash;the code that checks the hashes with the current
  golden values hard-coded into the file.
