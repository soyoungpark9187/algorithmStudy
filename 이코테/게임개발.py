d = 0
map_v = [] # 방문 안 한 땅: 0, 바다: 1, 방문 한 땅: 2로 표현
n, m = map(int, input().split())
x, y, d = map(int, input().split())
for i in range(n):
  map_v.append(list(map(int, input().split())))

direc = [(-1, 0), (0, 1), (1, 0), (0, -1)] # 북동남서

def check(dx, dy, d, cnt):
  # 상하좌우 땅 check
  new_d = d
  for i in range(4): # 반시계 방향으로 4방향 탐색
    new_d -= 1
    if new_d == -1:
      new_d = 3
    nx = dx + direc[new_d][0]
    ny = dy + direc[new_d][1]
    if nx >= 0 and ny >= 0 and nx < n and ny < m: # 유효한 범위 내
      if map_v[nx][ny] == 0:
        map_v[nx][ny] = 2
        return nx, ny, new_d, cnt+1, True
  # 네 방향이 모두 방문 or 바다인 경우
  if nx >= 0 and ny >= 0 and nx < n and ny < m: 
    if map_v[nx][ny] != 1:  # 뒤쪽이 육지인 경우
      map_v[nx][ny] = 2
      return nx, ny, d, cnt, True

  return x, y, d, cnt, False

cnt = 1 # 처음 시작 땅
map_v[x][y] = 1
while True:
  prev_x = x
  prev_y = y
  x, y, d, cnt, tf = check(x, y, d, cnt)
  # 현재 칸에서 도는 경우 break (무한 loop 방지)
  if prev_x == x and prev_y == y:
    break
  if tf == False:
    break

print(cnt)
