n, m = map(int, input().split())
arr = list(map(int, input().split()))

def binary_search(arr, start, end, target):
  length = 0
  while start <= end:
    mid = (start + end) // 2
    s = 0
    for i in arr:
      if i - mid >= 0:
        s = s + i - mid
    if s < target:
      end = mid - 1
    else:
      length = mid
      start = mid + 1
  return length

arr.sort()
print(binary_search(arr, 0, max(arr), m))
