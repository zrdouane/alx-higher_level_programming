#!/usr/bin/python3
for index in range(0, 8):
    for q in range(index + 1, 10):
        print("{:d}{:d}".format(index, q), end=', ')
print("{:d}{:d}".format(index + 1, q))
