#!/usr/bin/python3
""" Periemter module """


def island_perimeter(grid):
    """Return island perimiter.

    Args:
        grid: is list of ints.
    Returns:
        island perimiter defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for l in range(height):
        for j in range(width):
            if grid[l][j] == 1:
                size += 1
                if (j > 0 and grid[l][j - 1] == 1):
                    edges += 1
                if (l > 0 and grid[l - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
