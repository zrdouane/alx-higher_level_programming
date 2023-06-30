#!/usr/bin/python3
"""module contains a function that prints a square with the character #.
"""


def print_square(size):
    """
    Prints a square with character #.
    """
    if not isinstance(size, int):
        raise TypeError("size must be an integer")

    if size < 0:
        raise ValueError("size must be >= 0")

    for i in range(size):
        print("#" * size)
