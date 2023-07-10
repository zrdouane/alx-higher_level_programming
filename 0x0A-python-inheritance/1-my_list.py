#!/usr/bin/python3

"""MyList class inherit from list"""


class MyList(list):
    """Class that inherits from list"""

    def print_sorted(self):
        """Prints the list, but sorted (ascending sort)"""
        print(sorted(list(self)))
