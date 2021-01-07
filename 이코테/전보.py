import heapq
import sys
input = sys.stdin.readline

inf = int(1e9)
n, m, c = map(int, input().split())
graph = [[] for i in range(n + 1)]
times = [inf] * (n + 1)

for i in range(m):
  x, y, z = map(int, input().split())
  graph[x].append((y, z))

def dijkstra(start):
  q = []
  heapq.heappush(q, (0, start))
  times[start] = 0
  while q:
    t, now = heapq.heappop(q)
    if times[now] < t:
      continue
    for i in graph[now]:
      cost = t + i[1]
      if cost < times[i[0]]:
        times[i[0]] = cost
        heapq.heappush(q, (cost, i[0]))

dijkstra(c)

cnt = 0
max_t = 0
for t in times:
  if t != inf:
    cnt+=1
    max_t = max(max_t, t)
                                                                      
print(cnt - 1, max_t)
