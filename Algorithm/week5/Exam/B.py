n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]

# Check diagonal elements
for i in range(n):
    if matrix[i][i] != 0:
        print("NO")
        exit()

# Check symmetry
for i in range(n):
    for j in range(i+1, n):
        if matrix[i][j] != matrix[j][i]:
            print("NO")
            exit()

# Check multiple edges
for i in range(n):
    for j in range(i+1, n):
        if matrix[i][j] > 1:
            print("NO")
            exit()

print("YES")
