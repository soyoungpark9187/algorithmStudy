n = int(input())

cnt = [0] * (n+1)
num = 2
while num <= n:
  cnt[num] = cnt[num-1] + 1
  if num % 5 == 0:
    cnt[num] = cnt[num//5] + 1
  if num % 3 == 0:
    cnt[num] = min(cnt[num], cnt[num//3] + 1)
  if num % 2 == 0:
    cnt[num] = min(cnt[num], cnt[num//2] + 1)
  num+=1

print(cnt[n])
