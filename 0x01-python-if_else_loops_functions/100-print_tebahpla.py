#!/usr/bin/python3

for index in range(122, 96, -1):
    index = index - 32 if index % 2 else index
    print('{}'.format(chr(index)), end='')
