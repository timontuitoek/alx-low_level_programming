#!/usr/bin/python3
"""
perimeter island
"""


def island_perimeter(grid):
    """
    function def island_perimeter that returns perimeter of island
    described in grid (being list of int)
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][m] == 1:
                perimeter += 4
                if i > 0 and grid[i-1][m] == 1:
                    perimeter -= 2
                if m > 0 and grid[i][m-1] == 1:
                    perimeter -= 2

    return perimeter
