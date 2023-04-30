def dfs(grid, visited, row, col, count):
    max_count = count
    for i in range(row-1, row+2):
        for j in range(col-1, col+2):
            if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]):
                continue
            if visited[i][j]:
                continue
            if ord(grid[i][j]) == ord(grid[row][col]) + 1:
                visited[i][j] = True
                max_count = max(max_count, dfs(grid, visited, i, j, count+1))
                visited[i][j] = False
    return max_count

case = 1
while True:
    h, w = map(int, input().split())
    if h == 0 and w == 0:
        break
    grid = [input().strip() for _ in range(h)]
    found = False
    for i in range(h):
        for j in range(w):
            if grid[i][j] == 'A':
                visited = [[False] * w for _ in range(h)]
                visited[i][j] = True
                count = dfs(grid, visited, i, j, 1)
                if count > 1:
                    print("Case {}: {}".format(case, count))
                    found = True
                    break
        if found:
            break
    if not found:
        print("Case {}: 1".format(case))
    case += 1
