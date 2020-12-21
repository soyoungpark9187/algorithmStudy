n,m,k = map(int, input().split())
data = list(map(int, input().split()))

data.sort()
sum_a = 0
cnt = 0

big1 = data[n - 1]
big2 = data[n - 2]

while cnt <= m:
  for j in range(k):
    cnt += 1
    if cnt > m:
      break
    sum_a += big1
  cnt+=1
  if cnt > m:
    break
  sum_a += big2

print(sum_a)

