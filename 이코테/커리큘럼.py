from collections import deque
import copy

n = int(input())

indegree = [0] * (n + 1)
graph = [[] for i in range(n + 1)]
cost = [0] * (n + 1)

for i in range(1, n + 1):
  li = list(map(int, input().split()))
  cost[i] = li[0]
  for l in li[1:-1]:
    indegree[i] += 1
    graph[l].append(i)

def topology_sort():
  result = copy.deepcopy(cost)
  q = deque()

  for i in range(1, n + 1):
    if indegree[i] == 0:
      q.append(i)
  
  while q:
    now = q.popleft()
    for i in graph[now]:
      result[i] = max(result[i], result[now] + cost[i])
      indegree[i] -= 1
      if indegree[i] == 0:
        q.append(i)
  
  for i in range(1, n + 1):
    print(result[i])

topology_sort()
