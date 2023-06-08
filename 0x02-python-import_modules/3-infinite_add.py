#!/usr/bin/python3

if __name__ == "__main__":
    from sys import argv
    leng = len(argv)
    sum = 0
    for i in range(1, leng):
        sum += int(argv[i])
    print("{}".format(sum))
