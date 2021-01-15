def find_parent(parent, x):
  if parent[x] != x:
    parent[x] = find_parent(parent, parent[x])
  return parent[x]

def union_parent(parent, a, b):
  a = find_parent(parent, a)
  b = find_parent(parent, b)
  if a < b:
    parent[b] = a
  else:
    parent[a] = b

n, m = map(int, input().split())
parent = [0] * (n+1)

for i in range(n+1):
  parent[i] = i

edges = []
for i in range(m):
  a, b, cost = map(int, input().split())
  edges.append((cost, a, b))

edges.sort()
cost_all = 0
last = 0

for i in range(len(edges)):
  cost, a, b = edges[i]
  if find_parent(parent, a) != find_parent(parent, b):
    union_parent(parent, a, b)
    cost_all += cost
    last = cost

print(cost_all - last) # 두 개로 나눠야 하므로 가장 비싼 edge를 제외함
