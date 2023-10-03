#!/bin/bash

# Compile all .c files
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create a static library from the object files
ar -rc liball.a *.o

# Index the library for faster access
ranlib liball.a

# Clean the object files
rm -f *.o
