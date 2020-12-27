n,m = map(int, input().split())

map_i = []
for i in range(n):
  map_i.append(list(map(int, input())))

cnt = 0

def dfs(i, j):
  if i >= 0 and i < n and j >=0 and j < m:
    if map_i[i][j] == 0:
      map_i[i][j] = 1
      dfs(i-1, j)
      dfs(i+1, j)
      dfs(i, j-1)
      dfs(i, j+1)
      return True
  else:
    return False
  return False

for i in range(n):
  for j in range(m):
    if dfs(i, j) == True:
      cnt += 1
print(cnt)
