#!/usr/bin/python3
""" This file check the area of a island """


def island_perimeter(grid):
    """ Return the add of all positions found """
    """ the lines commented with #, was used to illustrate the functionality """
    # print("============\n")
    lis = []
    per = 0
    if len(grid) < 100:
        for x in range(len(grid)):
            if len(grid[x]) < 100:
                for y in range(len(grid[x])):
                    if (grid[x][y] == 1):
                        per = 4
                        if (grid[x - 1][y] == 1 and x > 0):
                            per -= 1
                        if ((x + 1) <= len(grid) - 1 and grid[x + 1][y] == 1):
                            per -= 1
                        if ((y + 1) <= len(grid[x]) - 1 and grid[x][y + 1] == 1):
                            per -= 1
                        if (grid[x][y - 1] == 1 and y > 0):
                            per -= 1
                        lis.append(per)
            # print(grid[x], " -- ", "#: {}".format(x), "Grid: {}".format(len(grid)), "Grid[x]: {}".format(len(grid[x])))
    # print("\n============\n")
    # print(lis)
    return (sum(lis))