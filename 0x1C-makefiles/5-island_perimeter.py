#!/usr/bin/python3
""" Returns the perimeter of the island described in grid
"""


def island_perimeter(grid):
    sum_total1 = 0
    sum_total2 = 0
    up_line = [0] * len(grid[0])
    grid.insert(0, up_line)
    grid.append(up_line)
    grid_t = [list(i) for i in zip(*grid)]
    up_line = [0] * len(grid_t[0])
    grid_t.insert(0, up_line)
    grid_t.append(up_line)
    grid_t2 = [list(i) for i in zip(*grid_t)]
    for i in range(len(grid_t)):
        for j in range(len(grid_t[0])):
            if grid_t[i][j] == 1 and grid_t[i][j - 1] == 0:
                sum_total1 += 2

    for i in range(len(grid_t2)):
        for j in range(len(grid_t2[0])):
            if grid_t2[i][j] == 1 and grid_t2[i][j - 1] == 0:
                sum_total2 += 2

    return sum_total1 + sum_total2
