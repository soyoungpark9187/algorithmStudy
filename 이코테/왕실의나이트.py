s = input()
row = int(s[1])
col = int(ord(s[0])) - int(ord('a')) + 1

way = [(-2, -1), (-2, 1), (2, -1), (2, 1), (-1, -2), (-1, 2), (1, -2), (1, 2)]

cnt = 0
for i in range(len(way)):
  if row + way[i][0] >= 1 and row + way[i][0] <= 8  and col + way[i][1] >= 1 and col + way[i][1] <= 8:
    cnt+=1

print(cnt)
