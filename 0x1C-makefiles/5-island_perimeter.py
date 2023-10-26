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
        for m in range(len(grid[i])):
            if grid[i][m] == 1:
                # 4 sides of land cell
                perimeter += 4

                # adjacent sells
                if i > 0 grid[i - 1][m] == 1:
                    perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][m] == 1:
                    perimeter -= 1
                if m > 0 and grid[i][m - 1] == 1:
                    perimeter -= 1
                if m > len(grid[i]) - 1 and grid[i][m + 1] == 1:
                    perimeter -= 1
    return perimeter
