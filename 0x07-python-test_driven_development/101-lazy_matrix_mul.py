#!/usr/bin/python3
"""
     function that multiplies 2 matrices by using the module NumPy.
"""
import numpy as np


def lazy_matrix_mul(m_a, m_b):
    """
        Multiplies 2 matrices

        Args:
            m_a: first matrix(2D List)
            m_b: second matrix(2D List)

        Returns:
            the product of two matrices
    """
    return np.matmul(m_a, m_b)
