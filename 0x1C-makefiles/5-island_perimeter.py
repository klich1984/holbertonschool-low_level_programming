#!/usr/bin/python3
""" Function that sum the perimeter of the island"""


def island_perimeter(grid):
    """ functionthat returns the perimeter of the island described in grid

    Args:
        grid (list): list of list of integers
    Return: perimeter of the island
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[row])):
            if grid[row][col] is 1:
                try:
                    if grid[row][col - 1] == 0:
                        perimeter += 1
                except:
                    return
                try:
                    if grid[row][col + 1] == 0:
                        perimeter += 1
                except:
                    return
                try:
                    if grid[row - 1][col] == 0:
                        perimeter += 1
                except:
                    return
                try:
                    if grid[row + 1][col] == 0:
                        perimeter += 1
                except:
                    return
    return perimeter

