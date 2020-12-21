n=int(input("money: "))
cnt=0
'''
while (n >= 10):
  if n >= 500:
    n-=500
  elif n >= 100:
    n-=100
  elif n >= 50:
    n-=50
  else:
    n-=10
  cnt+=1
'''
coin = [500, 100, 50, 10]
for c in coin:
  cnt += n // c
  n %= c
print(cnt)

