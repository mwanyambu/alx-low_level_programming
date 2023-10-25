#!/usr/bin/python3
"""module calculates perimeter of island"""

def island_perimeter(grid):
    count = 0
    x = len(grid) - 1
    y = len(grid[0]) - 1

    for j, k in enumerate(grid):
        for a, b in enumerate(k):
            if b == 1:
                if j == 0 or grid[j - 1][a] != 1:
                    count += 1
                if a == 0 or grid[j][a - 1] != 1:
                    count += 1
                if a == y or grid[j][a + 1] != 1:
                    count += 1
                if j == x or grid[j + 1][a] != 1:
                    count += 1
    return count
