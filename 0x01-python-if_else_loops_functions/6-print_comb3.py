#!/usr/bin/python3
for n in range(0, 10):
    for j in range((n+1), 10):
        if (n is not 8) or (j is not 9):
            print("{}{}, ".format(n, j), end="")
        else:
            print("{}{}".format(n, j))
