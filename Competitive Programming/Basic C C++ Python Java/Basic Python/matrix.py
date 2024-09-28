matrix = [[1, 2, 3], [4, 5, 6]]
matrix[0][2] = 10
for row in matrix:
    for col in row:
        print(col, end=" ")
