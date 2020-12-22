n = int(input())
move = input().split()
idx_x = 1
idx_y = 1
for i in range(len(move)):
  if move[i] == 'L':
    if idx_y != 1:
      idx_y -=1
  if move[i] == 'R':
    if idx_y != n:
      idx_y += 1
  if move[i] == 'U':
    if idx_x != 1:
      idx_x -= 1
  if move[i] == 'D':
    if idx_x != n:
      idx_x += 1

print(idx_x, idx_y) 
