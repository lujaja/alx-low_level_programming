#!/usr/bin/env python3
"""Perimeter"""


def island_perimeter(grid):
    """Returnperimeter of an island
    Atributes:
        grid (lid): 2d list
    """
    if not isinstance(grid, list):
        return
    count = 0
    for row in grid:
        for value in row:
            if value == 1:
                count += 1
    if count < 1:
        return 0
    elif count > 1:
        return count * 2 + 2
    return 4
