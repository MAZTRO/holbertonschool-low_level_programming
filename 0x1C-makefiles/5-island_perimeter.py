#!/usr/bin/python3
""" This file check the area of a island """


def island_perimeter(grid):
    """ Return the add of all positions found """
    """
    The lines commented with #,
    was used to illustrate the functionality
    """
    print("============\n")
    lis = []
    per = 0
    g = grid
    if len(g) < 100:
        for x in range(len(g)):
            if len(g[x]) < 100:
                for y in range(len(g[x])):
                    if (g[x][y] == 1):
                        per = 4
                        if (g[x - 1][y] == 1 and x > 0):
                            per -= 1
                        if ((x + 1) <= len(g) - 1 and g[x + 1][y] == 1):
                            per -= 1
                        if ((y + 1) <= len(g[x]) - 1 and g[x][y + 1] == 1):
                            per -= 1
                        if (g[x][y - 1] == 1 and y > 0):
                            per -= 1
                        lis.append(per)
            print(g[x], " -- ", "#: {}".format(x), "Grid: {}".format(len(g)), "Grid[x]: {}".format(len(g[x])))
    print("\n============\n")
    print(lis)
    return (sum(lis))
