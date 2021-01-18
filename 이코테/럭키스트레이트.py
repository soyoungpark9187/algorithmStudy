n = input()

front = 0
back = 0
half = int(len(n)/2)
for i in range(half):
  front += int(n[i])

for i in range(half):
  back += int(n[half + i])

if front == back:
  print("LUCKY")
else:
  print("READY")
