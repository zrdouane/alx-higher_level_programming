#!/usr/bin/python3

""" module returns the peak of the list. """


def find_peak(list_of_integers):
    """peak of list unsorted int."""
    if list_of_integers:
        list_of_integers.sort()
        return list_of_integers[-1]
    return None
