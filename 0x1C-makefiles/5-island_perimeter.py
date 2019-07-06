#!/usr/bin/python3
""" Returns the perimeter of the island described in grid

"""


def island_perimeter(grid):
    sum_total1 = 0
    sum_total2 = 0
    up_line = [0] * len(grid[0])
    grid.insert(0, up_line)
    grid.append(up_line)
    for line in grid:
        line.insert(0, 0)
        line.append(0)
    for i in range(len(grid) - 1):
        sum_aux1 = sum(grid[i])
        sum_aux2 = sum(grid[i + 1])
        rest_aux = sum_aux2 - sum_aux1
        sum_total1 += abs(rest_aux)
    grid_t = list(zip(*grid))
    sum_total2 = 0
    for k in range(len(grid_t) - 1):
        sum_aux1 = sum(grid_t[k])
        sum_aux2 = sum(grid_t[k + 1])
        rest_aux = sum_aux2 - sum_aux1
        sum_total2 += abs(rest_aux)

    return sum_total1 + sum_total2
