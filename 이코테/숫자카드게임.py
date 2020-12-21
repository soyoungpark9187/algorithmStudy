n,m = map(int, input().split())

max_min = 0
for i in range(n):
  num_list = map(int, input().split())
  num_min = min(num_list)
  max_min = max(max_min, num_min)
print(max_min)
