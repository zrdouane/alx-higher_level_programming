#!/usr/bin/pyhton3

def square_matrix_simple(matrix=[]):
    new = ([[c**2 for c in row] for row in matrix])
    return(new)
