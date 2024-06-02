# NOTICE : Compiling multiple files
When compiling a program that uses multiple files, you have to specify all the files that are used and input them into the compiler

Example:
```bash
g++ -std=c++17 2-8.cc add.cc
```
This will run and compile the code correctly.

This however...
```bash
g++ -std=c++17 2-8.cc
```
will not compile. Although ``2-8.cc`` has a reference to the function defined in ``add.cc``, since it doesn't compile with it, it never gets linked and returns an exit status 1.
