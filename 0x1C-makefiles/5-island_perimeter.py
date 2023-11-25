#!/usr/bin/env python3
"""Perimeter"""


def island_perimeter(grid):
    """Returnperimeter of an island
    Atributes:
        grid (lid): 2d list
    """
    d = 0
    p = 0
    h = len(grid)
    l = len(grid[0])
    for line in grid:
        c = 0
        for value in line:
            if value == 1:
                surround = 4
                if c != l - 1:
                    if grid[d][c + 1]:
                        surround -= 1
                if c != 0:
                    if grid[d][c - 1]:
                        surround -= 1
                if d != h - 1:
                    if grid[d + 1][c]:
                        surround -= 1
                if d != 0:
                    if grid[d - 1][c]:
                        surround -= 1
                p += surround
            c += 1
        d += 1
    return p

