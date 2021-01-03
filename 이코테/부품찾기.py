n = int(input())
item = list(map(int, input().split()))
m = int(input())
request = list(map(int, input().split()))

'''
sol 1
시간복잡도: O(nm) - ?
for i in request:
  if i in item:
    print("yes", end= ' ')
  else:
    print("no ", end= ' ')
'''

'''
sol 2 (binary search)
시간복잡도: O((m+n)logn)
'''
def binary_search(arr, start, end, target):
  while start <= end:
    mid = (start + end) // 2
    if arr[mid] == target:
      return mid
    elif arr[mid] > target:
      end = mid - 1
    else:
      start = mid + 1
  return None

item.sort()
for i in request:
  if binary_search(item, 0, n-1, i) != None:
    print("yes", end=' ')
  else:
    print("no", end=' ')

'''
sol 3 (binary search)
시간복잡도: O(n+m)
'''
cnt = [0] * 1000001
for i in item:
  cnt[i] += 1

for i in request:
  if cnt[i] != 0:
    print("yes", end=' ')
  else:
    print("no", end= ' ')
