#!/bin/bash
gcc -Wall -Werror -Wextra -c *.c
ar -rcs liball.a *.c
ranlib liball.a
