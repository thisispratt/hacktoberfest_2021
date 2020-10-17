# 48. Program to Find Transpose of a Matrix
# Using numpy

import numpy as np

rows = int(input("Enter number of rows: "))
cols = int(input("Enter number of columns: "))
elements = [int(element) for element in input("Enter all elements: ").split()]
matrix = np.array(elements)
matrix.resize(rows, cols)
print("Original Matrix: ")
print(matrix)

# Either use inbuilt function
a = matrix.transpose()
print("Transpose using inbuilt function: ")
print(a)

# Or make the function
print("Transpose using self made function: ")
def transpose_s(array, rows, cols):
    ans = np.array([])
    ans.resize(cols, rows)
    for i in range(len(array[0])):
        for j in range(len(array)):
            ans[i][j] = array[j][i]     #row is column and column is row
    return ans
print(transpose_s(matrix, rows, cols))

# >>>> Enter number of rows: 3
# >>>> Enter number of columns: 4
# >>>> Enter all elements: 1 2 3 4 5 6 7 8 9 10 11 12
#     Original Matrix: 
#     [[ 1  2  3  4]
#     [ 5  6  7  8]
#     [ 9 10 11 12]]
#     Transpose using inbuilt function:
#     [[ 1  5  9]
#     [ 2  6 10]
#     [ 3  7 11]
#     [ 4  8 12]]
#     Transpose using self made function:
#     [[ 1.  5.  9.]
#     [ 2.  6. 10.]
#     [ 3.  7. 11.]
#     [ 4.  8. 12.]]