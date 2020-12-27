from collections import deque
n, m = map(int, input().split())
dx = [-1, 1, 0, 0]
dy = [0, 0, -1, 1]

maze = []
for i in range(n):
  maze.append(list(map(int, input())))

def bfs(i, j):
  q = deque()
  q.append((i,j))
  while q:
    i, j = q.popleft()
    for k in range(4):
      nx = i + dx[k]
      ny = j + dy[k]
      if nx >= 0 and nx < n and ny >= 0 and ny < m:
        if maze[nx][ny] == 1:
          maze[nx][ny] = maze[i][j] + 1
          q.append((nx, ny))

bfs(0, 0)

print(maze[n-1][m-1])
