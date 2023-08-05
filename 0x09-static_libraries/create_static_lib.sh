#!/bin/bash
gcc  -Wall -Werror -Wextra -o *.c
ar -rc liball.a *o
ranlib liball.a
