from collections import deque

n, m, k, x = map(int, input().split())

graph = [[] for _ in range(n+1)]
cost = [-1] * (n+1)
cost[x] = 0

for i in range(m):
  a, b = map(int, input().split())
  graph[a].append(b)

q = deque([x])
while q:
  v = q.popleft()
  for i in graph[v]:
    if cost[i] == -1:
      cost[i] = cost[v] + 1
      q.append(i)  

cnt = 0
for i in range(1, n+1):
  if cost[i] == k:
    cnt+=1
    print(i)

if cost == 0:
  print(cnt)
