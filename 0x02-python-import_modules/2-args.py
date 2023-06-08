#!/usr/bin/python3

if __name__ == "__main__":
    from sys import argv
    longueur = len(argv)
    if longueur == 1:
        print("0 arguments.")
    elif longueur == 2:
        print("1 argument:")
    else:
        print("{} argument:".format(longueur - 1))
    for index in range(1, longueur):
        print("{}: {}".format(index, argv[index]))
