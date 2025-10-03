#!/usr/bin/env python3
# use_cube_lib.py
# Glenn G. Chappell
# 2025-10-03
#
# For CS 471 Fall 2025
# Simple main program for module cube_lib
# Requires cube_lib.py


import cube_lib  # For .cube


# Main program
if __name__ == "__main__":
    print("Using function cube_lib.cube")
    val = 5
    print("The cube of", val, "is", cube_lib.cube(val))

