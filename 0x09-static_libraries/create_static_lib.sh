#!/bin/bash

# This script creates a static library called liball.a from all file that
# have the '.c' extension present in the current directory

# Compile all files with '.c' extension into object file
gcc -c *.c

# Creates the static library from all object files in the current directory
ar rc liball.a *.o

# Indexing the library to optimize symbol look-up by the compiler
ranlib liball.a

