# cube_lib.py
# Glenn G. Chappell
# 2025-10-03
#
# For CS 471 Fall 2025
# Importable module with doctests
# Executing as stand-alone program runs doctests


def cube(x):
    """Return cube of x.

    >>> cube(6)
    216
    >>> cube(-2)
    -8
    >>> cube(0)
    0
    """

    return x*x*x


# Main program: run doctests
if __name__ == "__main__":
    print("RUNNING DOCTESTS FOR cube_lib.py")
    import doctest
    doctest.testmod()

