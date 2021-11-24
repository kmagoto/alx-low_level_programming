#!/usr/bin/python3

"""
Island perimeter module
"""

def island_perimeter(grid):
    """
    calculate perimeter of grid where 1 is found
    """
    p = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    p += 1 #top side
                if row == (len(grid) - 1) or grid[row + 1][col] == 0:
                    p += 1 #botton side
                if col == 0 or grid[row][col - 1] == 0:
                    p += 1  # left side
                if col == (len(grid[0]) - 1) or grid[row][col + 1] == 0:
                    p += 1  # right side
    return p

# Method for rectangular island only, no odd shapes
#    maxWidth = 0
#    length = 0
#    for i in range(len(grid)):
#        width = 0
#        for j in range(len(grid[0])):
#            if grid[i][j] == 1:
#                width += 1
#        if width:
#            length += 1
#        if width > maxWidth:
#            maxWidth = width
#    return ((maxWidth + length) * 2)