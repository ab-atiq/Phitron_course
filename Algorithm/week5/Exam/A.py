n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]

num_roads = 0
for i in range(n):
    for j in range(i+1, n):
        if matrix[i][j] == 1:
            num_roads += 1

print(num_roads)
