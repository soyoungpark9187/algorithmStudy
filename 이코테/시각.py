cnt = 0
n = int(input())
for i in range(n+1):
  for j in range(60):
    for x in range(60):
      str_concat = str(i) + str(j) + str(x)
      if '3' in str_concat:
        cnt+=1

print(cnt)
