#!/usr/bin/python3
"""
5-main
"""
island_perimeter = __import__('5-island_perimeter').island_perimeter

grid = []
lis = []
if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 1, 1, 0],
        [0, 1, 0, 0, 1, 0],
        [0, 1, 1, 0, 1, 0],
        [0, 1, 1, 1, 1, 0],
        [0, 0, 0, 0, 0, 0],
    ]
    """ for x in range(0, 31):
        for y in range(0, 31):
            lis.append(y)
        grid.append(lis)
        lis = [] """

    print(island_perimeter(grid))
