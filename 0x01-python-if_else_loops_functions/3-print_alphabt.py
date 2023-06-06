#!/usr/bin/python3
for x in range(97, 123):
    if chr(x) == 'q' or chr(x) == 'e':
        continue
    print(chr(x).format(x), end='')
