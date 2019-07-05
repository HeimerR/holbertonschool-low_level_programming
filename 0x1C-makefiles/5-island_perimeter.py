#!/usr/bin/python3
""" Returns the perimeter of the island described in grid

"""


def island_perimeter(grid):
    sum_total1 = 0
    sum_total2 = 0
    flag = 0
    flag2 = 1
    for i in range(len(grid) - 1):
        sum_aux1 = sum(grid[i])
        sum_aux2 = sum(grid[i + 1])
        rest_aux = sum_aux2 - sum_aux1
        sum_total1 += abs(rest_aux)
        for j in range(len(grid[0])):
            if grid[i][j] != flag:
                if grid[i + 1][j - flag2] != 1:
                    sum_total2 += 1
                flag2 = flag
                flag = grid[i][j]
        flag = 0
        flag2 = 1
    return sum_total1 + sum_total2 + 1
