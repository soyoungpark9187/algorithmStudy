n = int(input())

arr = []
for i in range(n):
  temp = input().split()
  arr.append((temp[0], int(temp[1])))

arr = sorted(arr, key = lambda s  : s[1])

for s in arr:
  print(s[0], end = ' ')
