#!/usr/bin/python3


"""function that reads a text file."""


def read_file(filename=""):
    """
    read_file.

    Args:
        filename : fl name.
    """
    with open(filename, encoding="utf-8") as f:
        print(f.read(), end="")
