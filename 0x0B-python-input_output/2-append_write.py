#!/usr/bin/python3
"""function that appends a string at the end of a text file."""


def append_write(filename="", text=""):
    """take string & return the number of characters """
    with open(filename, "a", encoding="utf-8") as file:
        lines = file.write(text)
        return lines
