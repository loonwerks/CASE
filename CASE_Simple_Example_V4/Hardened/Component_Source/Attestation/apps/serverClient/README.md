# An example of a server/client pair #

The client sends a Copland term to measure the `hashTest.txt` file.

## Build
Build the server with `make server`, the client with `make client`, or both with `make am`.

## Run
Navigate to `apps/tests/`. From here, launch the server with `../../build/server 5000 5`. This starts the server on port 5000, with a queue length of 5 (the maximum number of queued incoming connections).

Next, run the client. If you are running it on the same device, you can run `./client 127.0.0.1`. If the server is on another device, pass the ip address of that device instead. The client assumes the server is listening on port 5000.

Use ctrl+c (SIGINT) to stop the server.
