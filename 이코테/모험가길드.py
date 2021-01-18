n = int(input())
arr = list(map(int, input().split()))

arr.sort(reverse=True)

num = arr[0]
mem_cnt = 0
g_cnt = 0
i = 0

for i in arr:
  if num == mem_cnt:
    num = i
    g_cnt += 1
    mem_cnt = 1
  else:
    mem_cnt += 1

print(g_cnt+1)
