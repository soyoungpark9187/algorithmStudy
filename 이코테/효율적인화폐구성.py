n, m = map(int, input().split())
money = []
d = [-1] * 10001
for i in range(n):
  temp = int(input())
  money.append(temp)
  d[temp] = 1

for i in range(1, m+1):
  for j in money:
    if d[i-j] != -1:
      if d[i] == -1:
        d[i] = d[i-j] + 1
      else:
        d[i] = min(d[i], d[i-j] + 1)

print(d[m])
