#!/usr/bin/python3
'''Technical Interview'''


def island_perimeter(grid):
    '''grid is a list of list of integers:
        0 represents a water zone
        1 represents a land zone
        One cell is a square with side length 1
        Grid cells are connected horizontally/vertically (not diagonally).
        Grid is rectangular, width and height don’t exceed 100
    Grid is completely surrounded by water, and there is
    one island (or nothing).
    The island doesn’t have “lakes” (water inside that isn’t connected
    to the water around the island).'''
    perimeter = 0
    grid_length = len(grid)
    for i in range(grid_length):
        subgrid = grid[i]
        subgrid_length = len(subgrid)
        for j in range(subgrid_length):
            if grid[i][j] == 1:
                perimeter += 1
        perimeter *= 2
        perimeter += 2
    return perimeter
