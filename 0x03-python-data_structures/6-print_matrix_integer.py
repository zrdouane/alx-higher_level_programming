#!/usr/bin/python3

def print_matrix_integer(matrix=[[]]):
    for x in matrix:
        for index, number in enumerate(x):
            print("{:d}".format(number), end="")
            if index < len(x) - 1:
                print(" ", end="")
        print("")
