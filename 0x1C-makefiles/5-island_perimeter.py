#!/usr/bin/pyton3


def island_perimeter(grid):
    """ functionthat returns the perimeter of the island described in grid

    Args:
        grid (list): list of list of integers
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] is 1:
                if grid[row][col - 1] == 0:
                    perimeter += 1
                if grid[row][col + 1] == 0:
                    perimeter += 1
                if grid[row - 1][col] == 0:
                    perimeter += 1
                if grid[row + 1][col] == 0:
                    perimeter += 1
    return perimeter
