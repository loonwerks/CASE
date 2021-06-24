# Licensing
The socket structure adapts file operations from the basis library to work with arbitrary file descriptors. Because code is adapted from the basis, the CakeML copyright notice is embedded as a comment into `SocketFFI.sml` where relevant.

# Misc
If you need to prematurely terminate a program with an active socket connection, use Ctl+c. Using Ctl+z will result in the sockets not closing properly, and the program will likely fail to reacquire the socket port on the next execution (restarting fixes the issue).
